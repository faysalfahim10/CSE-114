#include<stdio.h>
int main(){
    long int decnum;
    long int binarynum=0;
    long int remainder;
    long int j=1;

    scanf("%ld",&decnum) ;
    while(decnum>0){
        remainder = decnum%2;
        binarynum = binarynum+remainder*j;
        j=j*10;
        decnum = decnum/2;
    }

    printf("%ld",binarynum);
    return 0;
}
