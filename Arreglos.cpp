#include <iostream>
using namespace std;
int main()
{
  /* int notas[4];
    notas[0]=80;
    notas[1]=65;
    notas[2]=60;
    notas[3]=75;
    for(int i=0; i<4;i++)
    {
        cout<<i<<":"<<notas[i]<<endl;
    }*/
   /*   int tam=0,sum=0,promedio=0;
    cout<<"Cuantas notas desea ingresar?";
    cin>>tam;
    int notas[tam];
    for(int i=0; i<tam;i++){
        cout<<"Ingrese nota"<<i<<":"<<endl;
        cin>>notas[i];
    }
    for(int i=0; i<tam;i++){
        sum+=notas[i];
    }
    promedio=sum/tam;
    cout<<"El promedio es: "<<promedio;
*/
/*  int tam=0,sum=0,promedio=0;
    int notas[tam];
    char res;
    do{
        tam++;
        cout<<"Ingrese nota"<<tam<<":"<<endl;
        cin>>notas[tam-1];
        cout<<"Desea ingresar otra nota (s/n)";
        cin>>res;
    }
    while(res=='s'||res=='S');
    for(int i=0; i<tam;i++){
        sum+=notas[i];
    }
    promedio=sum/tam;
    cout<<"El promedio es:"<<promedio<<endl;
    */
   /* char nombre[30];
    cout<<"Ingrese Nombre:";
    cin>>nombre;
    cout<<nombre<<endl;
    system("pause");
    */
   /*   string nombre;
    cout<<"Ingrese Nombre:";
    getline(cin,nombre);
    cout<<nombre<<endl;
    */
    /*string nombre;
    int dato;
    cout<<"Ingrese dato: ";
    cin>>dato;
    cin.ignore();
    cout<<"Ingrese nombre completo: "<<endl;
    getline(cin,nombre);
    cout<<nombre<<endl;*/
    string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
    semana[3]="Jueves";
    for(int i=0;i<7;i++){
        cout<<semana[i]<<endl;
    }
    system("pause");
}
