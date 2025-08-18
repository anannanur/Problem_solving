#include<stdio.h>
int main(){

    float n,X,P;
    scanf("%f %f",&X,&P);
    n = (P*100)/(100-X);
    printf("%.2f\n",n);
    return 0;
}
