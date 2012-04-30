//This is code to solve problem 3 on Project Euler
/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>;
using namespace std;

int main () {
    long big=600851475143;
    long little=2;
    int answer=0;
    do {
        if(big%little==0){
            big/=little;
            if(little>answer){
                answer=little;
            }
            little=2;
        }
        else{
            little++;
        }

    } while(big>=little);
    cout << "The answer is " << answer <<"\n";
    return 0;

}
/*
 * what is a sieve method???
*/
