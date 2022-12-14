//Accept one character from user and check weather the character is vovel(a,e,i,o,u) or not;

#include<stdio.h>
#include<stdbool.h>


bool checkVowel (char cNo)
{
int lower= 0;
int upper= 0;

lower = (cNo =='a' || cNo == 'e' || cNo == 'i' || cNo == 'o'|| cNo == 'u');
upper =(cNo =='A' || cNo == 'E' || cNo == 'I' || cNo == 'O'|| cNo == 'U');

    
        if (lower|| upper)
        {

        return true;
    }
    else{


        return false;
    }
}

int main()
{

    char cvalue = '\0';
    bool bRet = false;
printf("Enter Character");
    scanf("%c",&cvalue);

    bRet = checkVowel(cvalue);
    if (bRet == true)
    {

        printf("It Is  Vovel");


    }
    else{

        printf("This is not vovel");
    }
}