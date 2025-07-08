#include<stdio.h>
int main(){
    long int binarynum;
    long int octalnum=0;
    long int remainder;
    long int j=1;

    scanf("%ld",&binarynum) ;
    while(binarynum!=0){
        remainder = binarynum%10;
        octalnum = octalnum+remainder*j;
        j=j*2;
        binarynum = binarynum/10;
    }

    printf("%lo",octalnum);
    return 0;
}
