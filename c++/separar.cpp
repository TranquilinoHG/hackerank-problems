#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'missingWords' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 */

vector<string> missingWords(string s, string t) {
    vector<string> result;
    //cout<<s<<endl<<t<<endl;

    return result;
}

int main(){
    string s="I am using HackerRank to improve programming";
    string t ="am HackerRank to improve";
    vector<string> result;
    result=missingWords(s,t);   
    for(int i=0;i<result.capacity();i++){
        cout<<result[i];
    }
    return 0;
}