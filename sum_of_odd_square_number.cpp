#include<iostream>
using namespace std;
void sumOfNoddSquare(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==1){
        sum=sum+i*i;}
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of Odd Square Number Between: "<<num<<endl;
    sumOfNoddSquare(num);
    return 0;
}