#include <iostream>
#include <ctime>
using namespace std;

int main () {
     srand(time(0));
    int randomNumber;
    if (randomNumber<0 || randomNumber>11){
        cout <<"Error: the generated random integer is not within the range of 0 to 11"<<endl;
        switch (randomNumber){
            case 0:
            randomNumber<=10;
            cout <<"your subscription will expire soon. Renew now!" <<endl;
            break;
            case 1:
            randomNumber<=5;
            cout <<"your subscription will expire in" << randomNumber <<endl;
            cout << "Renew now and save 10%" << endl;
            break;
            case 2:
            randomNumber=1;
            cout <<"your subscription expires within a day" <<endl;
            cout <<"Renew now and save 20%" <<endl;
            break;
            case 3:
            randomNumber=0;
            cout <<"your subscription has expired" <<endl;
            break;
            case 4:
            cout <<"you have an active subscription" <<endl;
            break;
        
        return 0;
        }
        }
      
           

        
}
   