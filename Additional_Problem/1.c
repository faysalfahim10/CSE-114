#include<stdio.h>
int main(){
    int num, r, reversed = 0;
    scanf("%d",&num);
    for( ; num != 0 ; num = num/10){
        r = num%10;
        reversed = reversed*10 + r;
    }
    printf("%d\n",reversed);

    return 0;

}
