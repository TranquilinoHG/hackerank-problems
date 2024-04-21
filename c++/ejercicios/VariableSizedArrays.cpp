/*
    VARIBLE SIZED ARRAYS
    Consider an n-element array a, where each indez  i in the array contains a reference
    to an array of ki, integer(where the value of ki varies from array to array).
    Given a a, you must anwer q queries. Each query is in the format i j,  where i denotes 
    an index in array a and j  denotes an index in the array located at a[i]. For each query,
    find and print the value of element j in the array at location a[i] on a new line.

    */
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    //el resultado se tiene que almacenar en 
    // un vector vector de int 
    vector<vector<int>> resultado;
    //procedemos a leer la cantidad de n
    // y la cantidad de q 
    int n,q;
    cin>>n>>q;

    //hacemos un ciclo para guardar los n arreglos 
    for(int j=0;j<n;j++)
    {
        // el siguiente dado a leer es el largo de arreglo
        int large;
        cin>>large;
        //hacmeos un ciclo de large para almacenas los datos
        //necesitamos un apuntador
        //vector<vector<int>>::iterator x=resultado.begin();
        vector<int> temp;
        int dato;
        for(int i =0;i<large;i++)
        {
            cin>>dato;            
            temp.push_back(dato);            
        }
        resultado.push_back(temp);
    }
    //ya que hayamos termiando de leer los arreglos 
    //toca hacer las consultas q
    //cout<<"toca los consultas"<<endl;
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<int(resultado[x][y])<<endl;
    }
    return 0;
}