#include <iostream>
//Nama: Arzil Fauzan Nofriansyah
//Nim: 2100018307
using namespace std;
int main(){
	int ar1[3][3], ar2[3][3], ar3[18];
	int i,j,p, k,n=18;
	
	cout<<"========================================================"<<endl;
	cout<<"Program sorting 2 Array setelah diubah menjadi 1 dimensi"<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Masukkan isi array:"<<endl;
	for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     cout<<"masukan data array ke-["<<i<<"],["<<j<<"] : ";
                     cin>>ar1[i][j];}}
                     
    for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     cout<<"masukan data array ke-["<<i<<"],["<<j<<"] : ";
                     cin>>ar2[i][j];}}
                     
    k=0;
    cout<<"menggabungkan 2 array 2 dimensi menjadi array 1 dimensi"<<endl;
     for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     ar3[k]=ar1[i][j];
					 k++;
                     }
                     }
     for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                     ar3[k]=ar2[i][j];
					 k++;
                     }
                     }  
                     
	cout<<endl;
	//cout<<"Proses sorting data array:"<<endl;
	for(i= 1; i < n; i++){
	for(j = 1; j < n; j++){
	if(ar3[j] > ar3[j+1]){
	p = ar3[j];
	ar3[j] = ar3[j+1];
	ar3[j+1] = p;
}
}
}
	cout<<"Data Array ar3 Hasil Penggabungan  :"<<endl<<endl;;
	for (k=0; k<n; k++){
    cout<<"ar3["<<k<<"]="<<ar3[k]<<endl;}	
    
    cout<<endl;
    cout<<"Array setelah di sorting: "<<endl;
	for( j=0; j < n; j++){
	cout << "Bilangan ke – " << j << " : " << ar3[j] << endl;
}			                   
}
