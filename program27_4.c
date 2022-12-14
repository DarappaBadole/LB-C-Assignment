/*
 write a program which accept string from user  and accept one
 character. return index of last  occurence of that character

 Input : "Marvellous Multi Os"
          M

  Output : 11        

Input : "Marvellous Multi OS"
          W
 Output : -1         



*/


#include<stdio.h>
#include<string.h>

int LastChar(char *str, char ch)
{

 int iCnt=0;
 int flag =-1;
 
 for(iCnt=-1;str[iCnt];iCnt++)

 {
    if(str[iCnt]==ch)
    {
        flag=iCnt;
        
    }
    iCnt++;
 }
 return iCnt;
 }
 
 

int main()
{
 char arr[20];
 char cValue;
 int  iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",&arr);

 printf("Enter the character\n");
 scanf(" %c",&cValue);

 iRet = LastChar(arr,cValue);

 printf("character location  is %d",iRet);

    return 0;
}