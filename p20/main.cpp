//This is code to solve problem 20 on Project Euler
/*
 * n! means n  (n  1)  ...  3  2  1
 *
 * For example, 10! = 10  9  ...  3  2  1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 *
 * Find the sum of the digits in the number 100!
 *
*/

#include <iostream>;
#include "lib/digits.h";

using namespace std;

int main () {
    long factoral=1;
    for(int i=2; i<10; i++){
        factoral*=i;
    }
    int answer=sumdigits(factoral);
    cout << "The answer is " << answer <<"\n";
    return 0;

}
/*
*/
