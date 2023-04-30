#include<stdio.h>
int main(){
int N[] = {2,4,6,8,10};
int i , num,Nth = 0;
printf("enter a number for posiion:");
scanf("%d",&num);
for(i=0; i<5; i++){
    if(num==N[i]){
            Nth = Nth+i;
            break;
    }
}

if(Nth==-1) printf("not found!\n");
else printf("%d is %d position\n",num,Nth);


}
