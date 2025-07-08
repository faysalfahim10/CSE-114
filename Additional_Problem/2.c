#include<stdio.h>
int main(){
    int num,r;
    scanf("%d",&num);
    int sum=0;
    while(num!=0)
    {
        r = num%10;
        sum += r;
        num /= 10;
    }
   printf("%d\n",sum);
   return 0;
}
