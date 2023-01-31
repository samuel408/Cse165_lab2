#include <iostream>
#include <cmath>

using namespace std ;

int primeNumbers(int n){
    
     if (n <= 1) return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
    
}

int main (){
    int number = 0;
    cout << "input a number to find the prime numbers before it: ";
    cin >> number ;
    cout << "the numbers are : ";
    int prime = 0;
      for (int i = 2; i < number; i++) {// start at 2 because thats the first prime number
         prime = primeNumbers(i);
        if (prime == 1){
            cout << i << endl;
        }

      }




    return 0; 
}