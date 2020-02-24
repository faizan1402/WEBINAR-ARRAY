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

   	  		// Iterate over coloumns
      	   for(int j=0;j<Coloumn;j++){ // because coloumn wise wave is print
      	   	if(j&1){// j=1 means odd coloumn
      	   	// if can for odd and even coloumn
      	   	for(int i=Row-1;i>=0;i--){ //Odd Row-1 to 0

      	   		cout<<a[i][j] <<" ";

      	   	}
      	   	
      	   }
      	   	else{
      	   		// Evem coloumn 0 to Row
      	   		for(int i=0;i<Row;i++){
      	   			cout<<a[i][j]<<" ";
      	   		
      	   		}
      	  	}
      	  }


      	  	return 0;

      }








