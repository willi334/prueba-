#include<iostream>
using namespace std;
int main(){
    float temperatura;
    
    cout<<"ingreso a la camara detectora del segundo sintoma del civid-19: "<<endl;
    cout<<"por favor ingrese su temperatura "<<endl;
    cin>>temperatura;
 
    if (temperatura>=37.0){
      cout<<"necesitas chequeo de un medico "<<endl<<endl;                                                                        
    }
    else{
      cout<<"cuidate y quedate en casa "<<endl<<endl;   
    }
    
system("pause");    
return 0;    
}



   
