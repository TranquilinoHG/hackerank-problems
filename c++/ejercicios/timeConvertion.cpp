#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char* funcion2(char* s){
    char *copy;
    strcpy(copy,s);
   
}
string funcion(string horaInicial){
    string HoraFinal = horaInicial.substr(0,8); 
    // hh:mm:ssXM
    // 0123456789
    // 0       8
    // 12:00:00AM - > 00:00:00

    // 01:00:00AM - > 01:00:00
    // 12:00:00PM - > 12:00:00

    // 01:00:00PM - > 13:00:00
    // 11:00:00PM - > 23:00:00
    
    int intHrs = int(horaInicial[0])-48;
    intHrs = (intHrs*10)+int(horaInicial[1])-48;
    cout<<"horas>"<<intHrs<<endl;
    if(intHrs==12 && horaInicial[8]=='A'){
        HoraFinal[0]='0';
        HoraFinal[1]='0';
    }
    else if (horaInicial[8]=='P')
    {
        if(intHrs!=12){
            intHrs+=12;
            HoraFinal[0]=char(intHrs/10)+48;
            HoraFinal[1]=char(intHrs%10)+48;
        }

    }
    return HoraFinal;
}

int main(){
    string inicio1 = "12:00:00AM";
    string inicio2 = "01:00:00AM";
    string inicio3 = "11:00:00AM";
    string inicio4 = "12:12:00PM";
    string inicio5 = "01:00:00PM";
    string inicio6 = "11:12:00PM";
    
    cout<< "resultado"<<funcion(inicio1)<<endl;
    cout<< "resultado"<<funcion(inicio2)<<endl;
    cout<< "resultado"<<funcion(inicio3)<<endl;
    cout<< "resultado"<<funcion(inicio4)<<endl;
    cout<< "resultado"<<funcion(inicio5)<<endl;
    cout<< "resultado"<<funcion(inicio6)<<endl;
    
    return 0;
}