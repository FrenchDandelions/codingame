#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
    try
    {
        if(argc < 3)
            throw std::logic_error("missing an argument");
        char *str = argv[1];
        std::vector<std::string> vec_string;
        char *token = strtok(str, argv[2]);
        while(token != NULL)
        {
            vec_string.push_back(token);
            token = strtok(NULL, argv[2]);
        }
        for (size_t i = 0; i < vec_string.size(); i++)
        {
            std::cout << vec_string[i] << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
