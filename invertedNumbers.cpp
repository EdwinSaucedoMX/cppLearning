#include<iostream>
using namespace std;

int getNumber();
int getInverted(int number);

int main() {
    int number;
    number = getNumber();
    cout << number << endl;
    number = getInverted(number);
    cout << number;
    return 0;
}

int getNumber(){
    int number;
    cin>>number;
    return number;
}

int getInverted(int number){
    int temp, mod;
    while (number!=0) {
        mod=number%10;
        temp=(temp*10)+mod;
        number=number/10;
    };
    number=temp;
    return number;
}