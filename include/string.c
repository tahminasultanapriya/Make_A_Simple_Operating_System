#include "string.h"
#include "screen.h" 
uint16 strlength(string ch)
{
        uint16 i = 0;           
        while(ch[i++]);  
        return i;               
}


uint16 readnum(char *str)
{
    uint8 res = 0;
         for (int i = 0; str[i] != '\0'; ++i) 
        	res = res*10 + str[i] - '0'; 
    return res; 
}

uint8 strEql(string ch1,string ch2)                     
{
        uint8 result = 1;
        uint8 size = strlength(ch1);
        if(size != strlength(ch2)) result =0;
        else 
        {
        uint8 i = 0;
        for(i;i<size;i++)
        {
                if(ch1[i] != ch2[i]) result = 0;
        }
        }
        return result;
}


void screen_substr(string str) {
    string vidmem = (string) 0xb8000;
	uint8 len = strlength(str);
	uint32 i, j, found;
	
	for (i=0; i<(cursorY-1)*sw*2-len*2; i+=2) {
		found = 1;
		for (j=0; j<len; j++) {
			if (vidmem[i+j*2] != str[j]) {
				found = 0;
				break;
			}
		}
		if (found) break;
		found = 0;
	}
	
	if (found) {
		for (j=0; j<len*2; j+=2) {
			vidmem[i+j+1] = 0xF0;
		}
		print("Substring found!\n");
	} else {
		print("Substring not found :(\n");
	}
	
}


