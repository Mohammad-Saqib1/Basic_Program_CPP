#include<iostream>
using namespace std;
int main(){
    //Left Shift means paste 0 at right side 
    cout<<"---Left Shift Operator---"<<endl;
    int x=10;
    int y=x<<2;/* 1010(10) Left shift by 2 value
                  101000(40)

                            */
    cout<<y<<endl;
    //Right Shift means select right side value and paste left side as 0
    cout<<"---Right Shift Operator---"<<endl;
    int w=10;
    int z=w>>2;/* 1010(10) Right shift by 2 value
                  0010(2)

                            */
    cout<<z;
    return 0;
}