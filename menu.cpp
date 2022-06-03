#include<iostream>
using namespace std;

int main ()                                           {                                                             int op,flag;
                                                              do{
                cout<<"1. Suma varios numero \n";
                cout<<"2. Compara \n";                                cout<<"3. Salir\n\n";
                cin>>op;                                      switch(op)
        {
                case 1:                                                       cout<<"Aqui va la suma de varios numero";
                        flag=cin.ignore().get();
                        break;                                        case 2:                               
                        cout<<"Aqui va el programa compara ";                                                                       flag=cin.ignore().get();                              break;
                default:
                        cout<<"Esta opcion no es computable ";
                        flag=cin.ignore().get();
        }
        }while(op !=3);
        return 0;
}
