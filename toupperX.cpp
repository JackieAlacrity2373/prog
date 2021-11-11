#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std; 

int main()
{

int i=0; 
char c;
char strI[5000];

cout << "give me some lowercase text to convert pls" << '\n' << "Input  ";
cin >> strI ; 
cout << "Output  "; 
	for(int x =0; x<strlen(strI); x++)
	{
		c = strI[x];
		putchar (toupper(c));
			
	}
	cout << '\n' << '\n';
	return 0;
}