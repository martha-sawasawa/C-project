#include <iostream>
#include <ctime>
using namespace std;

int main () {
    int number;
    while (true) {
        cout <<"Enter number between 5 and 10 :" <<endl;
        cin >> number;
        if (number>5 && number<10){
            cout <<"your input value " << number <<" has been accepted" <<endl;
        } 
        else if (number<5 || number>10){
            cout <<"you entered an invalid number, please try again" <<endl;
        }    
    
            
       
        
    }
    
}