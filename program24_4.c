/*Accept character from user and check whether it is special symbol
 or not (!,@,#,$,%,^,&,*)


 Input : %
 Output : TRUE

 Input : d
Output : False
*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  if((ch>=33) && (ch<=42))

 {
    return TRUE;

 }
 else
 {
    return false;
 }






}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the charcter");
  scanf("%c",&cValue);

  bRet = ChkSpecial(cValue);

 if(bRet==TRUE)
 {
    printf("It is special character");
 }
 else
 {
    printf("It is not a special character");
 }











    return 0;
}