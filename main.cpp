#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibas valtozo
    std::cout << "1-100 ertekek duplazasa"; //nincs ';' & karakterkent volt megadva a szoveg ''
    for (int i = 0;i<100;i++) //hianyos for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<100; i++) //egyszer lefuto ciklus
    {
        std::cout << "Ertek:"<<b[i]<<std::endl; //nincs valtozo megadva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // ',' helyett ';'
    {
        atlag += b[i]; //sorzárás
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Hazi feladat "  << std::endl; //:)
    return 0;
}
