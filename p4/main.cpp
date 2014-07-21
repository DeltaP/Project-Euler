//This is code to solve problem 4 on Project Euler
/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>;
#include <string>;
#include <sstream>;

using namespace std;

int main () {
  int num1;
  int num2;
  int product;
  int answer;
  for(num1=999; num1>99; num1--){
    for(num2=num1; num2>99; num2--){
      product=num1*num2;
      string String = static_cast<ostringstream*>( &(ostringstream() << product) )->str();
      for (std::string::size_type l = 0; l < String.length(); ++l) {
        if (String[l]==String[String.length()-l) {

      }
    }
  }
  cout << "The answer is " << s <<"\n";
  return 0;
}
/*
*/
