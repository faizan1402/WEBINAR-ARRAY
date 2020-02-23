#include<iostream>
using namespace std;
  int main(){
  	// It might or might not contain garbage so it better to terminate our null character 
  	   char a[][8] ={{'a','b','c','e','\0'},{'d','e','f','h','\0'}}; // It means print until null character is not come


  	   cout<<a[0][0]<<endl; // print is first row value is 'a'
  	   cout<<a[0]<<endl; // print is first row abce
  	   cout<<a[1]<<endl; //print is 2nd row 'defh'


  	   // Another way to create list of string is 
  	      char words [10][100]= { // so char string not require the null character because already default null character 10 row and 100 coloumn
  	      	"APPLE",
  	      	"MANGO",
  	      	"BANANA SHAKE"
  	      };
  	         cout<<words[0]<<endl;      /* Each rows is a string in itself
  	                                     */

  	         cout<<words[1]<<endl;
  	         cout<<words[2]<<endl;
  	         // Take Input the third row 
  	       //  cin >>words[3];// cin function only first words is print but complete sentence is printed then used cin.getline() 
  	         cin.getline(words[3],100); // coloumn of length (100)
  	         cout<<words[3]<<endl;

  	   return 0;
  }