#include<stdio.h>
int main()
{

    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c\n", ch + 32);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("%c\n", ch - 32);
    }
    else
        printf("please enter any small or capital letter\n");
    return 0;
}
