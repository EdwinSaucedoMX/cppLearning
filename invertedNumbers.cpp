#include<iostream>
using namespace std;

int getNumber();
int getInverted(int number,int *i, bool *flag);

int main() {
    int number, i, j;
    bool flag;
    i=0;
    flag=false;
    number = getNumber();
    cout << number << endl;
    number = getInverted(number, &i, &flag);
    i=i;
    if (flag==true && i!=0) {
        for (j = 0; j < i; j++)
        {
         cout << 0;   
        }
    };
    cout << number;
    return 0;
}

int getNumber(){
    int number;
    cin>>number;
    return number;
}

int getInverted(int number,int *i,bool *flag){
    int temp, mod, mod2;
    temp=0;
    *i=*i;
    while (number!=0) {
        mod=number%10;
        temp=(temp*10)+mod;
        number=number/10;
        mod2=number%10;
        if (mod==0){
            *flag=true;
            *i=*i+1;
            if (mod2!=0){
                *i=*i-1;
            
            }
            else {
                *i=*i+1;
            }
        };
    };
    number=temp;
    return number;
}