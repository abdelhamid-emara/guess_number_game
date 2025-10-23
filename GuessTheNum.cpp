#include <iostream>
#include <cstdlib>

int main()
{
    for(int i = 0; i < 3; i++)
    {
        int num{rand() % 10};
        int guess{};
        std::cout << "Enter Number 0->9: ";
        std::cin >> guess;
        if(guess == num)
        {
            std::cout << "Right. You Won.\n";
            return 0;
        }
        else
        {
            std::cout << "Wrong. The Number Was " << num << ".\n" ;
        }
    }
    std::cout << "Game Over!!" << std::endl;
    return 0;
}