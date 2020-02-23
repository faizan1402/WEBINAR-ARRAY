/*
Lets's write some
- Read a matirx and find a number in it .
-Wave print
-Spiral print


*/
#include<iostream>
using namespace std;
 

 void readMatrix(int a [][10],int Row,int coloumn){
 	    for(int i=0;i<Row;i++){
 	    	for(int j=0;j<coloumn;j++){

 	    		cin>>a[i][j];

 	    	}
 	    }
    }
  void printMatrix(int a[][10],int Row,int coloumn){
  	   for(int i=0;i<Row;i++){
  		// For every row we have iterate over coloumn
  		 for(int j=0;j<coloumn;j++){
  		 	cout<<a[i][j]<<" ";
  		 }
  		 cout<<endl;
  	}
  }

  int main(){
  	  int a[10][10];

  	  int Row,coloumn;//Declared Row ,Colomn
  	     cin>>Row>>coloumn;

  	  readMatrix(a,Row,coloumn);// Function call 
  	  printMatrix(a,Row,coloumn);// Function call

  	  return 0;
  	      
  }