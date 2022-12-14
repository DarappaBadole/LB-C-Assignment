/*
 writet a program which accept string from user and toggle the case.

 Input : "Marvellous Multi Os"

 Output : mARVELLOUS mULTI os


*/

/*
 write a program which accept string from user and display only 
 digit from tha string

 Input : "
  MARVELLOUS MULTImarve89llous121"
  
 output : 89121

*/


#include<stdio.h>
 

void DisplayDigit(char *str)
 {
    int iCnt =0;
    while(*str!='\0')
    {
      if((*str>='0') &&(*str<='9'))
     {
     printf("%c",*str);
     
    
     }
   
     str++;
    }

 }
int main()
{

 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",&arr);

 DisplayDigit(arr);



    return 0;

}