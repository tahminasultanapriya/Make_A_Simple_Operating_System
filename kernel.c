#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/types.h"
#include "include/isr.h"
#include "include/idt.h"
kmain()
{   
	isr_install();
	print("This is a clear function");
	clearScreen();
	    
	print("Operating system\n");
	print("Welcome to my operating system!\nPlease login first\n");
	   string username = "priya";
	   string password = "150";
	   
	   string inp = 0,inp2 =0;
	   uint8 inp1 =0,inp3 = 0, inp5=0;
	   while (1) {
		   uint8 uOK = 0, pOK = 0;
		   
		   print("username: ");
		   inp = readStr();
		   if (strEql(inp, username)) uOK = 1;
		 
		   
		   print("password: ");
		  
		   inp = readStr();
		   if (strEql(inp, password)) pOK = 1;
		   
		   if (uOK && !pOK) {
			   print("Login Done!\n");
			   print("\n");
			   break;
		   }
		   print("Wrong info.Try again\n");
	   } 
print("1)Clear Screen Function\n");
	print("2)Print Function\n");
	print("3)String Length Function\n");
	print("4)Clear Line Function\n");
	print("5)Substring Checking Function\n");
	print("6)Update Cursor\n");
	print("These are the functions in my OS\n");
	print("1)Clear Screen Function\n");
	print("2)Print Function\n");
	print("3)String Length Function\n");
	print("4)Clear Line Function\n");
	print("5)Substring Checking Function\n");
	print("6)Update Cursor\n");
	print("7)Scroll Up function\n");
        print("These all are Print function\n");
	print("This is a clear line command\n");
	clearLine(0,0);	
	print("This First Line is Clear\n");
	clearLine(0,1);
	print("This Second Line is Clear\n");
	clearLine(0,2);
	print("This Third Line is Clear\n");
	clearLine(0,3);
	print("This Forth Line is Clear\n");
	clearLine(0,4);
	print("This Fifth Line is Clear\n");
	clearLine(0,5);
	print("This Sixth Line is Clear\n");
	clearLine(0,6);
	print("This Seventh Line is Clear\n");
	print("This is a function of Scroll Up\n");
	print("This is a function of Scroll Up\n");
	scrollUp(4);
	print("Scroll Up function working\n");
	printch(0x08);
	printch('B');
	printch(0x09);
	printch('\r');
	printch('\n');   
 print("Commanda are:\n1)cmd\n2)clearline\n3)clear\n4)updatecursor\n5)print\n6)scrollup\n7)substr\n8)strlength\n9)shutdown\n");
	   
       while (1)
       {
			print("command> ");
			inp = readStr();
			if(strEql(inp,"cmd"))
			{
					print("You are allready in cmd\n");
			}
			else if(strEql(inp,"clear"))
			{
					clearScreen();
			}
			else if(strEql(inp,"clearline"))
			{
			        print("Please enter starting line number from you want to delete:\n");
				inp = readStr();
				inp1 = readnum(inp);
				print("Please enter ending line number:\n");
				inp2 = readStr();
				inp3 = readnum(inp2);
				clearLine(inp1,inp3);
				
			}
			else if(strEql(inp,"print"))
			{
			        print("Please enter a string:\n");
				inp = readStr();
				print(inp);
				print("\n");
			}
			else if(strEql(inp,"updatecursor"))
			{
			        print("Please enter the value of cursorX axis:\n");
				inp = readStr();
				cursorX = readnum(inp);
				print("Please enter the value of cursorY:\n");
				inp2 = readStr();
				cursorY = readnum(inp2);
				updateCursor();
				
			}
			else if(strEql(inp,"scrollup"))
			{
			        print("Please enter the number of line you want to scroll up:\n");
				inp = readStr();
				inp5 = readnum(inp);
				scrollUp(inp5);
				
			}
			
			else if(strEql(inp,"substr"))
			{
				print("Enter string: ");
				inp = readStr();
				screen_substr(inp);
			}
			else if(strEql(inp,"strlength"))
			{
				print("Enter string: ");
				inp = readStr();
				print_length_of_string(inp);
			}
			else if(strEql(inp,"shutdown"))
			{
					print("Turning off my OS!\n");
					break;
			}
			else
			{
					print("Bad command!\n");
			}
       }
	
	
	
 
	
	
}
