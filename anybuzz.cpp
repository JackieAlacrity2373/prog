#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    //prompt user 
    cout<<"Select a number\n";
    
     //get the number from the user
    int N;
    int f=0;
    int b=0;
    int fcount=0,bcount=0,fbcount=0;
    std::cin >> N;
    std::cout << "select a fizz value and hit enter (default is 3)" << '\n';
    std::cin >> f;
    std::cout << "select a buzz value and hit enter (default is 5)" << '\n';
    std::cin >> b;
    //iterate through all values until reaching the maximum value of N
    for(int i=0; i < N; i++)
        {
	//checks for zero and places lets play fizzbuzz in its place
        if (i == 0)
        {
            cout << "lets play fizzbuzz to " << N-- << '\n';
            N = N +2;
        }
        else
        //checks for fizzbuzz case 
        if (i % b == 0 && i % f == 0)
        {
            std::cout << "fizzbuzz" << '\n';
		fcount++;
		bcount++;
		fbcount++;
        }
        else
        //checks for fizz case
        if (i % f == 0)
        {
            std::cout << "fizz" << '\n';
             fcount++;
        }
        else
        //checks for buzz case 
        if (i % b == 0)
        {
            std::cout << "buzz" << '\n';
	     bcount++;
        }
        else
        //if no case is met output number
        std::cout << i << '\n';
	 
	}
     std::cout << "fizzes: " << fcount << '\n' << "buzzes: " << bcount << '\n' << "fizzbuzzes: " << fbcount;
    return 0;
}
