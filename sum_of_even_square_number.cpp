#include<iostream>
using namespace std;
void sumOfNevenSquare(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
        sum=sum+i*i;}
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of Even Square Number Between: "<<num<<endl;
    sumOfNevenSquare(num);
    return 0;
}