#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:  ";
    cin>>n;
    if(n < 0){
        n = -n;
    }
      cout<<n;
return 0;
}
