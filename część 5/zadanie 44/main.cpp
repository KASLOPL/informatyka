#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
setlocale(LC_CTYPE, "Polish");

int A[5];
int iloczyn=1;

for(int i=0; i<=4; i++)
{
cout<<"podaj A["<<i<<"]= ";
cin>>A[i];
iloczyn*=A[i];	
}
cout<<"iloczyn wczytanego ci¹gu 5 elementów wynosi "<<iloczyn;
return 0;
}

