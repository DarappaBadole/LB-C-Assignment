/*
 writet a program which accept string from user and toggle the case.

 Input : "Marvellous Multi Os"

 Output : mARVELLOUS mULTI os


*/

/*
 write a program which accept string from user and convert it
 into upper  case

 Input : "Marvellous Multi OS"

 Output : MARVELLOUS MULTI OS

*/


#include<stdio.h>
 

void strtogglex(char *str)
 {
  while(*str!='\0')
  {
   if((*str>='a') &&(*str<='z'))
   {
    printf("%c", * str-32);
    
   }
   else if((*str>='A') &&(* str<='Z'))
   {

    printf("% c", * str+32);
   }
   str++;
   if(*str==' ')
  {
    printf(" ");
  }

  }
  

  
  

 }


int main()
{

 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",&arr);

 strtogglex(arr);



    return 0;

}