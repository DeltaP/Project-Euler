//This header file contains routines that manipulate digits of a number
#include <stdio.h>;
using namespace std;

int sumdigits (int number) {
    int digit;
    int sum=0;
    while (number>0){
        digit=number%10;
        number/=10;
        sum+=digit;
    }
    return(sum);
}
