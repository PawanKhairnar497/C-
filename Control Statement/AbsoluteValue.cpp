#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:  ";
    cin>>n;
    if(n > 0){
        cout<<n;
    }
    else // n <= 0
    {  
        cout<< -n;
    }
return 0;
}