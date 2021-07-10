#include<iostream>
using namespace std;
void sumOfNsquare(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i*i;
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of "<<num<<" Natural Square Number Is : "<<endl;
    sumOfNsquare(num);
    return 0;
}