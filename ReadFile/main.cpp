#include <iostream>
#include <fstream>


int main()
{
    std::ifstream infile("pac.txt");
    std::string line;
    while (std::getline(infile, line))
    {
        std::cout << line << std::endl;
    }

    return 0;
}
