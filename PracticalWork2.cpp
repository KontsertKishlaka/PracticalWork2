#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Программа \"\x1b[95mВремена года\x1b[0m\"\n\n[1] \x1b[91mЛето\x1b[0m\n[2] \x1b[93mОсень\x1b[0m\n[3] \x1b[94mЗима\x1b[0m\n[4] \x1b[92mВесна\x1b[0m\x1b[0m\n\nВведите значение \x1b[95mвремени года\x1b[0m: ";

    short userInput;
    cin >> userInput;

    if (userInput == 1)
        cout << "\nСейчас \x1b[91mлето\x1b[0m, загараем, отдыхаем и ни о чём не думаем.";
    else if (userInput == 2)
        cout << "\nСейчас \x1b[93mосень\x1b[0m, следует одеться тепло и взять с собой зонт.";
    else if (userInput == 3)
        cout << "\nСейчас \x1b[94mзима\x1b[0m, следует надеть вязанные носочки и налить себе горячий шоколад.";
    else if (userInput == 4)
        cout << "\nСейчас \x1b[92mвесна\x1b[0m, следует прислушаться к прекрасному пению птиц.";

    cout << "\n\n\nВведите что-нибудь для \x1b[91mзавершения программы\x1b[0m.";

    short endProgram; cin >> endProgram;
    return 0;
}