#include <bits/stdc++.h>
#include <vector>
#include <stdbool.h>
using namespace std;
	

int main(){
int A[]={1,3,5,6,7,9,10,14,23},i,j;
int	size = sizeof(A)/sizeof(A[0]), half, start=0, end=size-1, n1;

bool conf = true;	
	half = (start + end)/2;
for(j = 0; j < size; j++){
	cout<<A[j]<<" ";
}
cout<<endl<<"Valor a ser procurado: "<<endl;

cin>>n1;	
  	
	for(i = 0; i < size ; i++){
			half = (start + end)/2;
		if(n1 == A[half] || n1 == A[start] || n1 == A[end]){
			cout<<"\nAchou...\n";
			conf = false;
			break;
		}else if(n1 < A[half]){
				end = half;	
		}else{
				start = half;
		}

	}
	
	if(conf){
		cout<<"\n NOT found!..\n";
	}
    	
	
	cout<<endl;
	return 0;
}