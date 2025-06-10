#include <iostream>
#include <string>
using namespace std;

void sorting(){
	int x, temp, i, n, var, data[20];
	data[1]=9;
	data[2]=2;
	data[3]=1;
	data[4]=4;
	data[5]=11;
	data[6]=10;
	data[7]=18;
	data[8]=6;
	i=1;
	while(!(i>8)){
		x=1;
		while(!(x>i)){
			if(x>9) {
				if(data[x]>data[i]){
					temp=data[x];
					var=data[x];
					data[x]=temp;
					data[i]=var;
				}
				else{
					
				}
			}
			else{
			}
			x=x+1;
		}
		i=i+1;
	}
	i=1;
	while(!(i>8)){
		cout<<data[i]<<endl;
		i=i+1;
	}
}

int main(){
	int i;
	int n;
	int data[20];
	data[1]=9;	
	data[2]=2;
	data[3]=1;
	data[4]=4;
	data[5]=11;
	data[6]=10;
	data[7]=18;
	data[8]=6;
	n=8;
	i=1;
	cout<<"Sebelum disorting"<<endl;
	while(!(i>n)){
		cout<<data[i]<<endl;
		i=i+1;

	}
	cout<<"Sesudah disorting" <<endl;
	sorting();
	return 0;	
}
