#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
sample
input
2
4 3
-1 -3 4 2
4 2
0 -1 2 1
output
YES
NO
function need return a string 

*/
string angryProfessor(int k, vector<int> a) {
    //k save the value of the limined
    
    string classState="YES";
    int studentsCounts = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=0)
            studentsCounts++;     
    } 
    if (studentsCounts>=k)
        classState="NO";
    
    return classState;
}
int main(){
    int k1 = 3;
    vector<int> array1 {-1, -3, 4, 2};

    int k2=2;
    vector<int> array2{0, -1, 2, 1};
    for(int i=0;i<array2.size();i++)
    {
        cout<<array2[i]<<endl;
    }
    
    cout<<angryProfessor(k1,array1)<<endl;
    cout<<angryProfessor(k2,array2)<<endl;

    return 0;
}