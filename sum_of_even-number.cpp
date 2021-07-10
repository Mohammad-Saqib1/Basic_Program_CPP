#include<iostream>
using namespace std;
void sumOfNeven(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
        sum=sum+i;}
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of Even Number Betweem :"<<num<<endl;
    sumOfNeven(num);
    return 0;
}