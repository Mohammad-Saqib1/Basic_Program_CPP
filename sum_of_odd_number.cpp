#include<iostream>
using namespace std;
void sumOfNOdd(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==1){
        sum=sum+i;}
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of Odd Number Betweem :"<<num<<endl;
    sumOfNOdd(num);
    return 0;
}