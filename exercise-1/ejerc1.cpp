#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;
    int suma,mult;

    cout<<"digita 3 numeros: "; cin>>num1>>num2>>num3;

    suma=num1+num2+num3;
    mult=num1*num2*num3;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"El producto es: "<<mult<<endl;

    if(num1>num2 && num1>num3){
        cout<<"El numero mayor es: "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"El numero mayor es: "<<num2<<endl;
    }
    else{
         cout<<"El numero mayor es: "<<num3<<endl;
    }
    if(num1<num2 && num1<num3){
        cout<<"El numero minimo es: "<<num1<<endl;
    }
    else if(num2<num1 && num2<num3){
        cout<<"El numero minimo es: "<<num2<<endl;
    }
    else{
         cout<<"El numero minimo es: "<<num3<<endl;
    }
    
    return 0;
}