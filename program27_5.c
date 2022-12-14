
 

/*
 write a program which accept string from user that reverse that 
 string in place

 Input : "abcd"

 Output : "dcba"

*/


#include<stdio.h>
 

void StrRevx(char *str)
 {
    int iCnt =0;
    for(iCnt=sizeof(str);iCnt>-1;iCnt--)
    {
        printf("%c",str[iCnt-1]);
    }
    printf("\n");
    

 }
int main()
{

 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",&arr);

 StrRevx(arr);



    return 0;

}