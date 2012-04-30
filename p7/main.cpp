//This is code to solve problem 7 on Project Euler
/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
*/

#include <iostream>;
#include "lib/prime.h";

using namespace std;

int main () {
    int number=0;
    int primecount=0;
    do {
        number++;
        if(isprime(number)==true){
            primecount++;
        }

    } while(primecount<10002);
    cout << "The answer is " << number <<"\n";
    return 0;

}
/*
 * 
*/
