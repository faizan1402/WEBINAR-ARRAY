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
  // Print wave form matrix is print  :
      void waveMatrix(int a[][10],int Row,int coloumn){
      	// Iterate over coloumns
      	   for(int j=0;j<coloumn;j++){
      	   	if(j&1){
      	   	// if can for odd and even coloumn
      	   	for(int i=Row-1;i>=0;i--){ // Odd Row-1 to '0'

      	   		cout<<a[i][j] <<endl;

      	   	}
      	   	
      	   }
      	   	else{
      	   		// Evem coloumn
      	   		for(int i=0;i<Row;i++){ //'0' to  Row
      	   			cout<<a[i][j]<<endl;
      	   		
      	   		}
      	  	}

      }

} 
   void staircaseSearch(int a[][10],int Row,int coloumn,int key){
   	   // You can start from 0 ,c-1;
   	int  i=0,j=coloumn-1; //column is less time of because maximum coloumn is less time

   	       while(i<Row && j>=0){ // means matrix of row less than of coloumn of matrix is greater than equal to
   	       	 if(a[i][j]==key){ //if row and coloumn index is equal to key or item
   	       	 	cout<<"Found at position "<<i<<" and" <<j<<" "<<endl;
   	       	 	return ;

   	       	 }
   	       	 else if(a[i][j]>key){ // means array of greater value then coloumn value decreament
   	       	 	j--;
   	       	 }
   	       	 else{ // or array less time then row value in increase
   	       	 	i++;

   	       	 }
   	       }

   	       cout<<"Element is not found :"<<endl;
   	       return;
   } 

  int main(){
  	  int a[10][10];

  	  int Row,coloumn;//Declared Row ,Colomn
  	     cin>>Row>>coloumn;
  	     //readMatrix (input  matrix)
  	  readMatrix(a,Row,coloumn);// Function call 
  	  // printMatrix (output print)
  	  printMatrix(a,Row,coloumn);// Function call
  	  // WaveMatrix
  	  waveMatrix(a,Row,coloumn);

  	  int key;
  	     cout<<"Enter the element to search :"<<endl;
  	     cin>>key;

  	  staircaseSearch(a,Row,coloumn,key);
  	  

  	  return 0;
  	      
  }