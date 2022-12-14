#include<stdio.h>

int Multiply(int iNo1,int iNo2, int iNo3)
{  
   if (iNo2==0&&iNo3==0)
  {
     if(iNo1==0)
     {
        return 0;
     }
  }
  else if(iNo1==0)
  { 
     iNo1=1;
     if(iNo2==0)
     {
        iNo2=1;
     }
     if(iNo3==0)
     {
        iNo3=1;
     }
    return iNo1*iNo2*iNo3;

  }
  else if(iNo2==0)
  { 
     iNo2=1;
     if(iNo1==0)
     {
        iNo1=1;
     }
     if(iNo3==0)
     {
        iNo3=1;
     }
    return iNo1*iNo2*iNo3;
    
  }
  else if(iNo3==0)
  { 
     iNo3=1;
     if(iNo2==0)
     {
        iNo2=1;
     }
     if(iNo1==0)
     {
        iNo1=1;
     }
    return iNo1*iNo2*iNo3;
    
  }
  
  else
  {
    return iNo1*iNo2*iNo3;

  }
}



int main()
{
  int iValue1 = 0,iValue2 = 0,ivalue3 = 0;
  int iRet= 0;

  printf("Enter three numbers\n");
  scanf("%d%d%d",&iValue1,&iValue2,&ivalue3);

  iRet = Multiply(iValue1,iValue2,ivalue3);

  printf("the multiplication is :%d ",iRet);




    return 0;

}