//This is code to solve problem 10 on Project Euler
/*
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
*/

#include <iostream>;
#include "lib/prime.h";

using namespace std;

int main () {
    int number=1;
    long answer=0;
    do {
        number++;
        if(isprime(number)==true){
            answer+=number;
        }

    } while(number<2000000);
    cout << "The answer is " << answer <<"\n";
    return 0;

}
/*
 * Really need a faster prime finder in the future...this one may not be the best
*/
