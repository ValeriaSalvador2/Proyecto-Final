#include<iostream>
using namespace std;
int main()
{
int Articulos;
int dinero,precio,unidad;
int a;
char descripcion[50];

cout<<"introduzca cantidad de Articulos a comprar:";
cin>>Articulos;
cout<<"\n";
for(int i=0;i<Articulos;i++)
{

cout<<"introduzca nombre del producto";
cout<<" \n";
cin>>descripcion;
cout<<" \n";
cout<<"introduzca la cantidad del producto a comprar";
cout<<" \n";
cin>>unidad;
cout<<" \n";
cout<<"introduzca el precio";
cout<<" \n";
cin>>precio;
cout<<" \n";
a=unidad*precio*Articulos;
cout<<" \n";
}

cout<<unidad;
cout<<" \n";
cout<<"Precio por unidad";
cout<<"\n";
cout<<precio;
cout<<" \n";
cout<<"Total a pagar";
cout<<" \n";
cout<<" \n";
cout<<a;
cout<<"  Dolares";

return 0;
system("pause>null");}




