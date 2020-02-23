#include<iostream>
using namespace std;
   int main(){
   	 int a[10][10],Row ,Coloumn;
   	     cout<<"Enter a number :"<<endl;
   	     cin>>Row>>Coloumn;
   	
   	  for(int i=0;i<Row;i++){
   	  	for(int j=0;j<Coloumn;j++){
   	  		cin>>a[i][j];
   	  	}
   	  }


   	  		for(int i=0;i<Row;i++){
   	  			for(int j=0;j<Coloumn;j++){

   	  				cout<<a[i][j]<<"  ";
   	  			}
   	  			cout<<endl;
   	  		}
   	  		return 0;
   	  	}
   	  
   
