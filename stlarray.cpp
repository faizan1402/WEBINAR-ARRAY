#include<iostream>
using namespace std;
    void printSubstrings(char *a){

    	  // Use 2 loops for all values of i and j 
    	for(int i=0;a[i]!='\0';i++)}{
    		//For Every i ,j will start from i and go till the end
    		for(int j=i;a[j]!='\0';j++){
    			// cout<<"{"<<i<<","<<j<<"}"<<" ";
    			//print all the chars from i to j
    			for(int k=i;k<=j;k++){
    				cout<<a[k];

    			}
    			cout<<endl;
    			

    		}
    	}
    }