#include <iostream>

using namespace std;

string posNeg (int num){

    if( num > 0){
        return "POSITIVE";
    }
    else if(num < 0){
        return "NEGATIVE";
    }

}

string oddEven(int num){

      if( num%2 ==  0){
        return "EVEN";
    }
    else if(num%2 !=  0){
        return "ODD";
    }

}


int main (){
int number = 0;
cout << " input a number: ";
cin >> number ;

string evenOdd = oddEven(number);// checks to see if odd or even and saves results
string negPos = posNeg(number);// checks to see if its negative or positive and saves results

cout << evenOdd << " and " << negPos << endl;
    return 0;
}