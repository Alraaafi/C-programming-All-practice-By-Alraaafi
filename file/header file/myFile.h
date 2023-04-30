#define NAME "RAFI"
#define PI 3.1416
int sum(int a, int b){
    int c = a + b;
    return c;
    //printf("%d + %d = %d\n",a,b,c);
}

struct info{
    int year;
    float pin;
};

union myinfo{
    int age;
    float height;
};

//many function so on.....
