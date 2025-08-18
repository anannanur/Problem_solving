#include<stdio.h>
int main(){

    int num,digit;
    scanf("%d",&num);
        digit = num%10;
        num = num/10;
        if(digit%num==0 || num%digit==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    return 0;
}
