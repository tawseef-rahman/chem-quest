#include "elements.h"
#include "polyatomic_ions.h"
#include "amino_acids.h"
#include "vsepr.h"
#include <iostream>

int main()
{
    int choice;
    bool continueGame = true;

    while (continueGame)
    {
        std::cout << "Welcome to the ChemQuest Game!\n";
        std::cout << "1. Periodic Table of Elements\n";
        std::cout << "2. Polyatomic Ions\n";
        std::cout << "3. Amino Acids\n";
        std::cout << "4. VSEPR Theory\n";
        std::cout << "5. Exit\n";
        std::cout << "Please choose a quiz: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "1. Guess the symbol from the element name\n";
            std::cout << "2. Guess the element name from the symbol\n";
            int mode1Choice;
            std::cout << "Choose a mode: ";
            std::cin >> mode1Choice;
            if (mode1Choice == 1)
            {
                elementsMode1();
            }
            else if (mode1Choice == 2)
            {
                elementsMode2();
            }
            break;

        case 2:
            std::cout << "1. Guess the formula from the ion name\n";
            std::cout << "2. Guess the ion name from the formula\n";
            int mode2Choice;
            std::cout << "Choose a mode: ";
            std::cin >> mode2Choice;
            if (mode2Choice == 1)
            {
                polyatomicIonsMode1();
            }
            else if (mode2Choice == 2)
            {
                polyatomicIonsMode2();
            }
            break;

        case 3:
            std::cout << "1. Identify side chain chemical nature\n";
            std::cout << "2. Identify nutritional classification\n";
            std::cout << "3. Identify metabolic fate\n";
            std::cout << "4. Identify functional group\n";
            std::cout << "5. Identify biological role\n";
            std::cout << "6. Identify stereochemistry\n";
            std::cout << "7. Identify pKa classification\n";
            int mode3Choice;
            std::cout << "Choose a mode: ";
            std::cin >> mode3Choice;
            switch (mode3Choice)
            {
            case 1:
                aminoAcidsMode1();
                break;
            case 2:
                aminoAcidsMode2();
                break;
            case 3:
                aminoAcidsMode3();
                break;
            case 4:
                aminoAcidsMode4();
                break;
            case 5:
                aminoAcidsMode5();
                break;
            case 6:
                aminoAcidsMode6();
                break;
            case 7:
                aminoAcidsMode7();
                break;
            default:
                break;
            }
            break;

        case 4:
            std::cout << "1. Identify molecular geometry\n";
            std::cout << "2. Identify electron geometry\n";
            std::cout << "3. Identify bond angles\n";
            int mode4Choice;
            std::cout << "Choose a mode: ";
            std::cin >> mode4Choice;
            switch (mode4Choice)
            {
            case 1:
                vseprMode1();
                break;
            case 2:
                vseprMode2();
                break;
            case 3:
                vseprMode3();
                break;
            default:
                break;
            }
            break;

        case 5:
            continueGame = false;
            std::cout << "Thank you for playing!\n";
            break;

        default:
            std::cout << "Invalid choice, try again.\n";
            break;
        }
    }
    return 0;
}