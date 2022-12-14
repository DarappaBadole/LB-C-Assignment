/*
 Accept division of student from user and depends on the division 
 display exam timimng . there are 4 divisions in school as A,B,C,D
 exam of Division A at 7 AM, B at 8.30 , c at 9.20 AM  and  
 D at 10.30 AM (Application should be case insensensitive)

 Input : C 
 Output : your exam at 9.20

 Input : d
 Output : your exam at 10.30 AM


*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

 typedef int BOOL;

 void DisplaySchedule(char chDiv)
 {
  if((chDiv=='A')||(chDiv=='a'))
   {
    printf("your exam at  7 AM");
    
   }
   else if((chDiv=='B') ||(chDiv=='b'))
   {
    printf("your exam at 8.30 AM");
   
   }
   else if ((chDiv=='C') || (chDiv=='c'))
   {
    printf("your exam at 9.20 AM");
   

   }
   else if ((chDiv=='D') ||(chDiv=='d'))
   {
    printf("your exam at 10.30 AM");
   
   }

 }

int main()
{

 char cValue = '\0';
 BOOL bRet = FALSE;

 printf("Enter our division \n");
 scanf("%c",&cValue);

  DisplaySchedule(cValue);











    return 0;
}