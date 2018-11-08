#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	int i,j,k,m[50][50];
	
	cout<<"masukan panjang matriks : ";
	cin>>i;
	cout<<"\n\n";
	for (j=0; j<i; j++){
		for (k=0; k<i; k++){
			cout<<"["<<j<<"]["<<k<<"] : ";
			cin>>m[j][k];
			if(j+k==i-1){
				m[j][k]=0;
			
		}
		}
	}
	cout<<endl;
	cout<<endl;
	for (j=0;j<i;j++){
		for (k=0;k<i;k++){
			cout<<m[j][k]<<"  ";
	}
	cout<<"\n";
}
getch();
}
