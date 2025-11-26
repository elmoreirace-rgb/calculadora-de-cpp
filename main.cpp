#include <iostream>

struct calculadora
{
    void soma(int x, int y)
    {
        std::cout << x + y;
    }

    void subs(int x , int y)
    {
        std::cout << x - y;
    }

    void multi(int x , int y)
    {
        std::cout << x * y;
    }

    void div(int x , int y)
    {
        std::cout << x / y;
    }
};

int main()
{
    calculadora cal;
    while (true)
    {
        std::cout << "qual o primeiro nomero: ";
        int x;
        std::cin >> x;


        int y;
        std::cout << "qual o segundo numero: ";
        std::cin >> y;
        std::cout << "\n" << "1 para soma" << "\n" << "2 para substração" << "\n" << "3 para mutliplicação" << "\n" << "4 para multiplicação";
        std::cout << "\n" << "qual o operador: ";
        int w;
        std::cin >> w;

        if(w == 1)
        {
            cal.soma(x, y);
        }
        else if (w == 2)
        {
            cal.subs(x, y);
        }
        else if (w == 3)
        {
            cal.multi(x, y);
        }
        else if (w == 4)
        {
            cal.div(x, y);
        }
        else
        {
            std::cout << "erro";
            break;
        }

        std::cout << "\n";
    }
    return 0;
}