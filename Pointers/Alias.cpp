#include<iostream> // 8
using namespace std;

void swap(int &a,int &b){  // Pass by reference
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){ 

    int a,b;
    cout<<"Enter the two numbers:- ";
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b;

}    