#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
setlocale(LC_CTYPE, "Polish");

int A[7];
int suma=0, srednia=0;
for(int i=0; i<=6; i++)
{
	cout<<"podaj A["<<i<<"]= ";
	cin>>A[i];
	suma+=A[i];
}
srednia=suma/7;
cout<<"suma element�w wpisanych do tablicy to: "<<suma<<"\n";
cout<<"srednia element�w wpisanych do tablicy to: "<<srednia;
 
 return 0;
}

