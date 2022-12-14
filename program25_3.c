/*
 write a program which accept string from user and return difference
 between frequency of small character and frequency of capital
 characters.

 Input : "Marvellous"

 Output :6   (8-2)

*/
#include<stdio.h>
 
 int Difference(char *str)
 {
    int iCapCnt = 0;
    int iSmaCnt = 0;
    while(*str!='\0')
    {
      if((*str>='A')&&(*str<='Z'))
      {
         iCapCnt++;
         
      }
      
      else
      {
        iSmaCnt++;
        

      }
      str++;
     




    }
    return iCapCnt-iSmaCnt;





 }

int main()
{

 char arr[20];
 int iRet = 0;

 printf("Enter string\n ");
 scanf("%[^'\n']s",&arr);

 iRet = Difference(arr);

 if(iRet<0)
 {
    iRet = -iRet;
 }

 printf("%d",iRet);














    return 0;
}