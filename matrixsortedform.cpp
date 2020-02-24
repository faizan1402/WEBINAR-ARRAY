/* Find a number in 2-D array which is sorted Along the rows and coloumns.
    1 2 3  4
    5 8 10 11






*/

#include<iostream>
using namespace std;
 int main(){

 	int a[10][10],Row ,Coloumn;
 	int j=Coloumn-1;
 	int i=0;
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
   	  		int key;
   	  		cout<<"Enter the element to search :";
   	  		 cin >>key;

   	  	 // Matrix sorted form and searching the element
   	  		
   	  		while(i<Row &&j>=0){
   	  			if(a[i][j] ==key){

   	  				cout<<"Found at position"<<i<<j<<endl;
   	  				
   	  			}
   	  			else if(a[i][j]>key){
   	  				j--;
   	  			}
   	  			else{
   	  				i++;
   	  			}

   	  			}
   	  			cout<<"Element not found !";
   	  			

      	  	return 0;
      	  }

      









