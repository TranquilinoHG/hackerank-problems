#include <iostream>
#include <string>
#include <vector>
using namespace std;

void fizz(int n){
    for (int i = 1; i <= n; i++)
    {
        if(i%3==0 || i%5==0){
            if(i%3==0) cout<<"Fizz";
            if(i%5==0) cout<<"Buzz";
            cout<<endl;
        }
        else 
            cout<<i<<endl;
    }
    
}
int main(){

    fizz(15);
    return 0;
}