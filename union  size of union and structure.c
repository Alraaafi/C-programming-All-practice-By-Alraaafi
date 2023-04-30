#include<stdio.h>

struct stcTest1{
    int a;
    double b;
    //structure so SIZE = 4+8 =12
};

union uniTest1{
    int c;
    double d;
    //Union so SIZE = 8 ;double(max data size)
};

struct stcTest2{
    float e;
    char f;
    //tructure so SIZE = 4+1 =5
};

union uniTest2{
    float g;
    char h;
    //Union so SIZE = 4 ;float(max data size)
};

int main(){
    struct stcTest1 stcSize1;
    struct stcTest2 stcSize2;
    union uniTest1 uniSize1;
    union uniTest2 uniSize2;

    printf("the Size of Structure1:\t%d\n",sizeof(stcSize1));
    printf("the Size of Union1:\t%d\n",sizeof(uniSize1));
    printf("the Size of Structure2:\t%d\n",sizeof(stcSize2));
    printf("the Size of Union2:\t%d\n",sizeof(uniSize2));
}
