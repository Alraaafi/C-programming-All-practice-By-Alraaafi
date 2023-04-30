#include<stdio.h>
int main(){
    //for Series   1-2+3-4+5-6=? (odd-even)

    int i=1,n,even=0,odd=0;

    printf("n=");
    scanf("%d",&n);

    do{
        if(i%2==0)
            even = even + i;
        else
            odd = odd + i;
        i++;
    }
    while(i<=n);

    int sum = odd - even;

    printf("1-2+3-4+5-6...=%d",sum);
}
