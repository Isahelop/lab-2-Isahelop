#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout<<"***********"<<endl;
    cout<<"x   |   f(x)"<<endl;
    cout<<"***********"<<endl;

    for(int i=0; i<6; i++)
    cout<<   i   <<"   =   "<<(pow(i,3)-pow(i,2)+5)<<endl;
    return 0;
}