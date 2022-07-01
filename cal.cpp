
#include <iostream>
#include <string>
#include <math.h>
#include <vector>


int numOne;
int numTwo;

int op;


int main()
{

    std::cout << "Welcome To A c++ Made Calculator..\n";
    std::cout << "Please Enter Your First Number\n";
    std::cin >> numOne;
    std::cout << "Your First Number is = " << numOne << " \n";
    std::cout << "Please Enter Your Second Number\n";
    std::cin >> numTwo;
    std::cout << "Your Second Number is = " << numTwo << " \n";
    std::cout << "What Would You Like to Do?\n [1] Add \n [2] Sub \n [3] Multiply \n [4] Divide\n";
    std::cin >> op; 

    if(op == 1)
    {
        std::cout << "\n\n\n So Let Add these Cunts\n";
        std::cout << "Answer = " << numOne + numTwo << " \n";
        return 0;
    }
    if(op == 2)
    {
        std::cout << "\n\n\n So Let Sub these Cunts\n";
        std::cout << "Answer = " << numOne - numTwo << " \n";
        return 0;
    }
    if(op == 3)
    {
        std::cout << "\n\n\n So Let Multiply these Cunts\n";
        std::cout << "Answer = " << numOne * numTwo << " \n";
        return 0;
    }
    if(op == 4)
    {
        std::cout << "\n\n\n So Let Divide these Cunts\n";
        std::cout << "Answer = " << numOne / numTwo << " \n";
        return 0;
    }

}
