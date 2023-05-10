#include <iostream>

using namespace std;

double power(int exponent, double base){
    double result = 1;
    for (int i = 0; i < exponent; i++){
        result = result * base;
    }
    cout<<"The exponention "<<base<<" to power "<<exponent<<" is "<<result<<endl;
}

int main(){
    cout<<"Enter the exponent: ";
    int exponent;
    cin>>exponent;
    cout<<"Enter the base: ";
    double base;
    cin>>base;
    power(exponent, base);
    return 0;
}