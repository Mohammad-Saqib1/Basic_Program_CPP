/*-----Calculate Factorial a given number-----*/

#include<iostream>
using namespace std;

int factorial(int num){
    if(num==0 || num==1){

        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter your number :"<<endl;
    cin>>num;
    int result=factorial(num);
    cout<<"Factorial of "<<num<<" is: "<<result;
    return 0;
}