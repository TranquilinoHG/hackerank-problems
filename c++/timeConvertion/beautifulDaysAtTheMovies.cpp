#include<iostream>
using namespace std;
int reverse(int n){
    int numReverse=0;
    while (n>0)
    {
        numReverse = (numReverse*10)+(n%10);
        n = n/10;
    }
    return numReverse;
}
int beautifulDays(int i, int j, int k){
    int coutDays=0;
    for (;i <= j; i++)
    {
        
        if(abs(i-reverse(i))%(k)==0)
            coutDays++;
    }
    return coutDays; 
}
int main(){
    cout<<beautifulDays(20,23,2);
    return 0;
}