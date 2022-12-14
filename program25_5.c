/* incomplete
 write a program which accept string from user and display it inn
 reverse order

 Input: "MarvellouS"

 Output: "SuollevraM"

*/
#include<stdio.h>

void Reverse(char *str)
{

 int iCnt = sizeof(str);
 for(int i=iCnt+1; i>-1;i--)
 {
    printf("%c",str[i]);
 }



}



int main()
{
 char arr[20];
 

 printf("Enter String\n");
 scanf("%[^'\n']s",&arr);

 Reverse(arr);




    return 0;
}