#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

int main(){
       int size;
       	   cout<<" Type the array limit number: ";
       	   	   cin>>size;
	   unsigned	long long int num1,vet[size],aux,start=0,end=size,i,conf=0;
	   

	srand( time(NULL));
	
	for(i = 1; i <= size; i++){
		vet[i]=i;		
		printf("%lld  ", vet[i]);
	}
	cout<<endl<<endl;
	
	cin>>num1;
	
	aux = (start+end) / 2;
	
	cout<<endl;
	
	for(int j = 1; j <= size; j++){
		aux = (start+end) / 2;
		if( aux == num1 ){
			cout<<"\n\t\a\a  There is in the vector! \n\n";
			conf=1;
			break;
		} if(aux < num1){
			start = aux;
		}if(aux > num1){
			end = aux;
			
		}

	}
	
	if(conf==0)
		cout<<"\n\n\a\a\a So sorry....there is not any "<<num1<<" the vector...\n\n";

	
	
	return 0;
}