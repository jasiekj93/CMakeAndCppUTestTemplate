#include "Application.hpp"

#include <iostream>

#include <libFoo/Core/Core.hpp>

using namespace std;

int Foo::Application::Run(int argc, const char *argv[])
{
    if(argc != 2)
    {
        cout << "Podaj liczbę całkowita lub rzeczywista!" << endl;
        return 1;
    }

    double inputValue = 0;

    try
    {
        inputValue = std::stod(argv[1]);
            
        cout << inputValue << "do potegi 5 wynosi " << Core::Power(inputValue, 5) << endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        cout << "Podaj liczbę całkowita lub rzeczywista!" << endl;
        return 1;
    }
}