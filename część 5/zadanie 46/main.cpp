#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
setlocale(LC_CTYPE, "Polish");

int A[8];
int wieksza=0, mniejsza=0, rowna=0;

for(int i=0; i<=7; i++)
{
	cout<<"podaj A["<<i<<"]=";
	cin>>A[i];
	if(A[i]>0)
	{
		wieksza++;
	}else if(A[i]==0)
	{
		rowna++;
	}else
	{
		mniejsza++;		
	}
}
	cout<<"liczba wyraz�w mniejszych od zera wynosi "<<mniejsza;
	cout<<"\nliczba wyraz�w r�wnych zera wynosi "<<rowna;
	cout<<"\nliczba wyraz�w wi�kszych od zera wynosi "<<wieksza;
return 0;
}

