#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
float h,l,b,c,p,t,k;
cout<< "Menghitung Kredit Motor"<<endl;
cout<< "Masukkan Harga Motor: ";
cin>> h;
cout<< "Masukkan Lama Kredit(bulan): ";
cin>> l;
{
p=h/l;
b=p*0,1;
c=p+b;
t=c*l;
k=t-h;
cout<< "Cicilan: "<<c<<endl;
cout<< "Total Harga Motor: "<<t<<endl;
cout<< "Keuntungan Dealer"<<k<<endl;
}
getch;
}
