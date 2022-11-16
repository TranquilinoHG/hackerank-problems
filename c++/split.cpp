#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<string> split(string cadena, char caracter){
    vector<string> procesado;
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
int main(){
    vector<string> resultado;
    vector<string> resultado2;

    resultado = split("I hola mu  ndo como   estan",' ');

    resultado2 = split("   hola   mundo como   estan",' ');
    return 0;
}