#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{

int i=0;
char c;
char strI[5000];

cout << "give me some lowercase text to convert pls" << '\n' << "Input  ";
cin.getline(strI,sizeof(strI));
cout << "Output  ";
        while(strI[i])
        {
                int  x;
                c = strI[i];
                if(c == ' ')
                {
                i++;
                putchar(c);
                }
                else
                {
                        if (x%2 == 0)
                        {
                        putchar(toupper(c));
                        x++;
                        i++;
                        }
                        else
                        {
                        putchar(tolower(c));
                        x++;
                        i++;
                        }
                }
        }
        cout << '\n' << '\n';
        return 0;
}