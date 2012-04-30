//This header file contains routines related to prime numbers

#include <stdio.h>;
#include <math.h>;

using namespace std;

bool isprime(int number){
    bool prime=true;
    int max= sqrt(number);
    for(int i=max; i>1; i--){
        if(number%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}
