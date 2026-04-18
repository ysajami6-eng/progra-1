#include <iostream>
using namespace std;
int main(){
int a, b, c, mayor, menor;
cout <<"ingrese el primer numero :";
cin >>a;
mayor = a;
menor = a;
cout <<"ingres el  segundo numero :";
cin>>b;
cout<<"ingrese el tercer numero : ";
cin>>c;
if(a == b && b == c)
cout<<"los numeros son iguales\n";
else{

 if(a<b && b>c)
 mayor = b;
 if(a<c && c>b)
 mayor = c;
 if(a>b && a>c)
 mayor = a;
cout <<"el mayor es " <<mayor<<"\n";
 if(a>b && b<c)
 menor = b;
 if(a>c && c<b)
 menor= c;
 if(a<b && a<c)
 menor= a;
 cout <<"el menor es " <<menor;
 }

}