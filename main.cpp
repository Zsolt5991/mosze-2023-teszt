#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // el van írva
    std::cout << '1-100 ertekek duplazasa' // pontosvessző hiánya és " kell  használni nem '
    for (int i = 0;)  // hiányos for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)   //  i ig megy a ciklus
    {
        std::cout << "Ertek:"     // pontosvessző hiánya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;    
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)     // nem vessző kell hanem ;
    {
        atlag += b[i]    // pontosvessző hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;  
    return 0;
}
