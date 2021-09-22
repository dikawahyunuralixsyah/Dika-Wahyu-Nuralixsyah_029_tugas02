#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
float a,t,s,k;
cout<< "Menghitung Sisi Miring dan Keliling Segitiga Siku-Siku"<<endl;
cout<< "Masukkan Alas: ";
cin>> a;
cout<< "Masukkan Tinggi: ";
cin>> t;
{
s=sqrt((a*a)+(t*t));
k=a+t+s;
cout<< "sisi miring : "<<s<<endl;
cout<< "keliling : "<<k<<endl;
}
getch;
}
