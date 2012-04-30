//This is code to solve problem 6 on Project Euler
/*
 * The sum of the squares of the first ten natural numbers is,
 *
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * 
*/

#include <iostream>;
using namespace std;

int main () {
    int sumofsquares=0;
    int squareofsums=0;
    for(int i=1; i<101; i++){
        sumofsquares+=i*i;
        squareofsums+=i;
    }
    squareofsums=squareofsums*squareofsums;
    int answer=squareofsums-sumofsquares;
    cout << "The answer is " << answer <<"\n";
    return 0;
}
/*
 *can be done with math 
*/
