#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int a[7];
 int i;
 for( i=0;i<=6;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; // tu wprowadzamy liczby do kolejnych kom�rek
 }
 cout<<"w tablicy A jest"<<"\n";
 for(i=0;i<=6;i++)
 {
 cout<<"w komorce A["<<i<<"]="<<a[i]<<"\n"; // tu wypisujemy zawarto�� kom�rek

 }
 system("PAUSE");
 return EXIT_SUCCESS;
}

