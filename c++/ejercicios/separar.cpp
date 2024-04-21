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
list<string> split(string cadena, char caracter){
    list<string> procesado;
    int capacidad = cadena.capacity();
    for(int i=0,p=0;i<cadena.capacity();i++)
    {
        if(cadena[i]==caracter)
        {
            if((i-p)>0)
                procesado.push_back(cadena.substr(p,i-p));
            p=i+1;
        }
        else if(i==cadena.capacity()-1)
        {
            procesado.push_back(cadena.substr(p,i-p+1));
        }
    }
    return  procesado;
}
vector<string> missingWords(string s, string t) {
    list<string> list_s;
    list<string> list_t;
    vector<string> palabras_perdidas;

    // separar los string 
    list_s = split(s,' ');
    list_t = split(t,' ');

    for(string palabra_t : list_t){
        for(list<string>::iterator palabra_s = list_s.begin(); palabra_s!=list_s.end() ;palabra_s++){
            if(palabra_t.compare(*palabra_s)==0){
                list_s.erase(palabra_s);
                break;
            }
           
             
           
        }
    }
    for (string palabra: list_s)
       palabras_perdidas.push_back(palabra);

/// maria lava la lava dora
///       lava         dora
/// maria lava         dora
    return palabras_perdidas;
}

int main(){
    string s="I am using HackerRank to improve programming";
    string t ="am HackerRank to      improve";
    vector<string> result;
    result=missingWords(s,t);   
    for(string palabra : result){
        cout<<palabra<<endl;
    }
    return 0;
}