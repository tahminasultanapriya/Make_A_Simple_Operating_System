#ifndef STRING_H
#define STRING_H

#include "types.h"
uint16 strlength(string ch);
uint16 readnum(char *str);

/* Added in episode 3*/ /*This function compares two strings and returns true (1) if they are equal or false (0) if they are not equal */

uint8 strEql(string ch1,string ch2);

void screen_substr(string str);


#endif
