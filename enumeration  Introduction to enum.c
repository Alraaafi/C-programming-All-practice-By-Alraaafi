#include<stdio.h>
//enumeration is integer constants user variable. seems like others
enum possibility{zero,one};
enum atomNum{H=1,He,Li,Be,B,C,N,O,F,Ne};
enum atomMass{Na = 23,Mg=24,Al=27};

int main(){
    enum possibility p;
    enum atomNum number;
    enum atomMass atomName;

    p = one;
    number = Li;
    atomName = Al;

    printf("possibility is = %d\n",p);
    printf("atom Number is = %d\n",number);
    printf("Atom mass is = %d\n",atomName);

}
