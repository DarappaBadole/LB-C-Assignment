/*
 write a program which accept string from user and accept one
 character . check whether that character is present inmstring or not

 Input : "Marvellous Multi OS"
             e
           
 Output : TRUE

 Input : "Marvellous Multi OS"

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

 BOOL ChkChar(char *str, char ch)
 {
    int iCnt;
   while(*str!='\0')
   {
     if(*str==ch)
     {
        iCnt =  TRUE;
     }
     str++;

   }
   return iCnt;




 }

int main()
{
 char arr[20];
 char cValue ;
 BOOL bRet = FALSE;

 printf("Enter string\n");
 scanf("%[^'\n']s",&arr);

 printf("Enter the character\n");
 scanf(" %c",&cValue);

 bRet = ChkChar(arr,cValue);

 if(bRet==TRUE)
 {
    printf("Character found");
 }
 else
 {
    printf("Character is not found");
 }










    return 0 ;
}
