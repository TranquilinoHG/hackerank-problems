#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;


int main() {
    int N=0;
    string temp;
    regex patron("^(\d+\.\d+\.\d+\.\d+)");
    cin >> N;
    for (int i=0;i<N;i++) {
        cin>>temp;
        cout<<patron();
        //cout<<"DAto impreso: "+temp;       

    }
    return 0;
}


/*
Objetive

3
This line has junk text.
121.18.19.20
dddd.dddd.dddd.dddd
^(\d+\.\d+\.\d+\.\d+)


2001:0db8:0000:0000:0000:ff00:0042:8329


*/