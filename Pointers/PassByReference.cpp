#include<iostream> // 7
using namespace std;

void swap(int *x,int *y){
     int temp = *x;
     *x = *y;
     *y = temp;
     return;
}

int main(){

    int a,b;
    cout<<"Enter the two numbers:- ";
    cin>>a>>b;

    int *x = &a;
    int *y = &b;
    swap(x,y);
    // swap(a,b);

    cout<<a<<" "<<b;
}