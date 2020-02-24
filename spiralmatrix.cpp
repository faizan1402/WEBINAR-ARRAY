/*
    1 2 3  4
    5 6 7  8
    9 10 11 12
    13 14 15 16
And want to 4 loop and 
-1234 -starting row  and 481216 is ending coloumn and then print bottom of row (end row ) print and 59 ending coloumn


 Out put -print
   
            1 2 3 4 5 8 12 16 15 14 13 9 5 6 7 11 10            
           
    */
#include<iostream>
using namespace std;

void readMatrix(int a[10][10],int row,int coloumn){

	for(int i =0;i<row;i++){
		for(int j=0;j<coloumn;j++){
			cin >>a[i][j];
		}
	}

			
}
  void printMatrix(int a[10][10],int row,int coloumn){

  	     for(int i=0;i<row;i++){
  	     	for(int j=0;j<coloumn;j++){
  	     		cout<<a[i][j]<<" ";
  	     	}
  	     	cout<<endl;//beacause next line print the matrix
  	     }
  }
  void spiralMatrix(int a,int row,int coloumn){

  	    int startrow  =0,endrow =R-1,startcoloumn =0,endcoloumn =c-1;

  	    while(startrow<=endrow && startcoloumn<=endcoloumn){
  	    	// Print start row first (print 1,2,3,4)
  	    	for(int j=startcoloumn;j<=endcoloumn;j++){
  	    		cout<<a[startrow][j] <<" ";
  	    	}
  	    	      startrow++;


  	    	// print endcol means (print 8,12,16) (start row and end col )
  	    	      for(int i=startrow;i<=endrow;i++){

  	    	      	cout<<a[i][endcoloumn];
  	    	      }
  	    	      endcoloumn--;



  	    	//printendrow

  	    	      for(int j=endcoloumn;j>=startcoloumn;j--){
  	    	      	cout<<a[endrow][j]<<" ";
  	    	      }
  	    	      endrow --;
  	    	      // print startcol
  	    	      for(int endrow;i>=startrow;i--){
  	    	      	cout<<a[i][startcoloumn]
  	    	      }


  	    startcoloumn++;
  	    
  	    }

  }
  
       int main(){
   	   int row,coloumn;
   	   int a[10][10];

   	    cin >>row>>coloumn;

   	    readMatrix(a,row,coloumn);
   	    printMatrix(a,row,coloumn);
        spiralMatrix(a,row,coloumn);
   	    return 0;
   	}
   