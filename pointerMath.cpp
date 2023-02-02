#include <iostream>

using namespace std;

int add(int first,int second){
    return   first + second;

}
int subtract(int first, int second){
    return first - second;
}

int multiply(int first,int second){
    return first * second ;
}

float divide (int first, int second){
    float floatie = first/second ;
    return floatie;
}




int main(){
int num1,num2;
cout << "input two numbers to calculate basic arithmatic" << endl;
cout << "number 1: ";
cin >> num1;
cout << "number 2: ";
cin >> num2;

int *first = &num1;
int *second = &num2; 


// cout << "number are: " << *first <<" and "<< *second << endl;
int sum = add(*first,*second);
int sub = subtract(*first,*second);
float qoutient = divide(float (*first),float (*second));
int product = multiply(*first,*second);

cout <<"the sum = "<< sum << endl;
cout <<"the subtraction = "<< sub << endl;
cout <<"the qoutient = "<< qoutient << endl;
cout <<"the product = "<< product << endl;




    return 0;
}