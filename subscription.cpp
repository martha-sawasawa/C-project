#include <iostream>
#include <ctime>
using namespace std;

int main () {
    srand(time(0));
    int randomNumber;

    int suscription = rand();
    if (randomNumber<0 || randomNumber>11){
        cout <<"Error: the generated random integer is not within the range of 0 to 11"<<endl;
     if (randomNumber <= 10) {
        cout <<"your subscription will expire soon. Renew now!" <<endl;
     }else if (randomNumber <=5){
        cout <<"your subscription will expire in"<<randomNumber<<endl;
        cout << "Renew now and save 10%" <<endl;
     }else if (randomNumber = 1){
        cout <<"your subscription will expire within a day" <<endl;
        cout <<"Renew now and save 20%" <<endl;
     }else if (randomNumber = 0){
        cout <<"your subscription has expired" <<endl;
     }
         }else { 
        cout <<"you have an active subscription" <<endl;

     }

        
     
     return 0;
       
    



    
}


    
   