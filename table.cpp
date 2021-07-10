#include<iostream>
using namespace std;
void table(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<'X'<<i<<" = "<<num*i<<endl;
    }

}
int main(){
    int num;
    cout<<"Enter Your Number: "<<endl;
    cin>>num;
    cout<<"Table Of The "<<num<<" Is :"<<endl;
    table(num);
    return 0;
}