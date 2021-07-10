#include<iostream>
using namespace std;
void sumOfNnatural(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"The Sum Of "<<num<<" Natural Number Is : "<<endl;
    sumOfNnatural(num);
    return 0;
}