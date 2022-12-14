/*
 write a program which accept string from user  and accept one
 character. return index of first occurence of that character

 Input : "Marvellous Multi Os"
          M

  Output : 0        

Input : "Marvellous Multi OS"
          W
 Output : -1         



*/


#include<stdio.h>
#include<string.h>

int FirstChar(char *str, char ch)
{

 int iCnt=0;
 int flag=0;
 
 for(iCnt=0;str[iCnt];iCnt++)

 {
    if(str[iCnt]==ch)
    {
        flag=1;
        break;
    }
 }
 if(flag)
 return iCnt;
 
 
 else
 return -1;
    

    
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

 iRet = FirstChar(arr,cValue);

 printf("character location  is %d",iRet);

    return 0;
}