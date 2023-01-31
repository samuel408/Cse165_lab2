 #include <iostream>
 #include <bitset>
 #include <string>
 #include <sstream>
 #include <cmath>

 using namespace std;

 string binaryTranslation(int n){
       bitset<32> binary(n);
    return binary.to_string();
 }


 string hexTranslation(int n){
       stringstream myString;
    myString << hex << n;
    return myString.str();
 }

 int main (){
     int num = 0;
     string binary,hex;

     while( num >= 0 ){
    
         cout << "type in a number to translate to binary and hex: " ;
         cin >> num ;
              if (num < 0){
             return 0;
         }
        binary = binaryTranslation(num);
        hex = hexTranslation(num);

        cout << "hex : 0x" << hex << " binary: "<< binary << endl;
        

     }
     

     return 0;
 }