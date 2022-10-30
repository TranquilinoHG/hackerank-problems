/*


[7:00,14:00]
[7:00,8:00],[9:30,10:30],[11:00,12:00]
[9:00,15:00]
[9:00,10:00],[10:30,13:00],[14:00,15:00]

h1- >9:00 
h2 ->14:00
[9:00,13:00] horario compartido disponible para la reunion

[8:00,9:30],[10:30,11:00],[12:00,14:00]
[10:00,10:30],[13:00,14:00]


h1=8:00
h2=10:00  

quien es mayor? 10:00
9:30-10:00 > 30min ? 
no
eliminanos [8:00,9:30]

[10:30,11:00],[12:00,14:00]
[10:00,10:30],[13:00,14:00]

h1=10:30
h2=10:00

Quien es mayor? 10:30
10:30-10:30 > 30 min?
no
Eliminamos [10:00,10:30]

[10:30,11:00],[12:00,14:00]
[13:00,14:00]
h1=10:30
h2=13:00

quien es mayor? 13:00
11:00-13:00 > 30 min ?
no
Eliminamos [10:30,11:00]
[12:00,14:00]
[13:00,14:00]
h1= 12:00
h2=13:00
Quien es mayor? 13:00
14:00-13:00> 30min? 
Si
agregamos al nuevo horario
    [13:00,14:00]
*/
#include <string>
#include <vector>
#include <iostream>
using namespace std;    
int hoursToMins(string hour){
    int m=0;
    int h=0;
    bool band=false;
    for(unsigned i=0;i<hour.capacity();i++){
        if(hour.at(i)==':')
            band=1;
        if(!band){
            //hours
            h=(hour.at(i)-48)+(h*10);
        }
        else{
            //minutes
            h=(hour.at(i)-48)+(m*10);
        }
    }
    return (h*60)+m;
}
void pruebaHoursTomins(){
    cout<<"entro";
    vector<string> prueba {"12:30",
                "18:30","00:30","00:01"
                  ,"7:00","1:30"};
    for (int i = 0; i < prueba.capacity(); i++)
    {
        cout<<prueba.at(0)<<" a minutos "<< hoursToMins(prueba.at(0))<<endl;     
    }
    
    
}

vector<string> nuevoHorario(vector<vector<string>> horario1,vector<string> horario1B,vector<vector<string>> horario2,vector<vector<string>> horario2B)
{

    // Vector para almacenar el nuevo horario
    vector<string> nuevoHorario; 
    // calcula el horario compartido disponible

    // calcula el horario libre de h1
    // calcula el horrio libre de h2
    /// repetimos hasta que este vector h1 o vector h2 esten vacio
        //comparamos h1.a con h2.a y se asignara a mayor
        //mayor se restara a h(contrario).b
        // si la resta es mayor que 30min 
             // se crea el horario [mayor,h(contrario).b]
             // se agrega al vector del nuevo horario
        // si no es mayor 
            // se elimina del vector el menor 
    // retornamos el vector del uevo horariodisponible
    return nuevoHorario;


}
int main(){
    pruebaHoursTomins();
    return 0;
}