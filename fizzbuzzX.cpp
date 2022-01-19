#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    //prompt user
    cout<<"Lets play fizzbuzz"  << '\n';

     //get the number from the user
    int N,a,b;
    std::cout << "Input a Divisor for buzz" << '\n';
    std::cin >> a;
    std::cout << "Input a Divisor for fizz" << '\n';
    std::cin >> b;
    std::cout << "Input the value we will play to" << '\n';
    std::cin >> N;
    //iterate through all values until reaching the maximum value of N
    for(int i=0; i < N; i++)
        //checks for zero and places lets play fizzbuzz in its place
        if (i == 0)
        {
            cout << "lets play fizzbuzz to " << N-- << '\n';
            N = N +2;
        }
        else
        //checks for fizzbuzz case
        if (i % a == 0 && i % b == 0)
        {
            std::cout << "fizzbuzz" << '\n';
        }
        else
        //checks for fizz case
        if (i % b == 0)
        {
            std::cout << "fizz" << '\n';
        }
        else
        //checks for buzz case
        if (i % a == 0)
        {
            std::cout << "buzz" << '\n';
        }
        else
        //if no case is met output number
        std::cout << i << '\n';
    return 0;
}
