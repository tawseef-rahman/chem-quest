#include "polyatomic_ions.h"
#include "common_functions.h"
#include <iostream>
#include <vector>

bool polyatomicIonsMode1()
{
    std::vector<std::string> ions = {
        "Ammonium", "Acetate", "Carbonate", "Chlorate", "Chlorite", "Chromate", "Cyanide", "Dichromate", "Hydroxide",
        "Nitrate", "Nitrite", "Perchlorate", "Permanganate", "Phosphate", "Sulfate", "Sulfite", "Hydrogen sulfate", "Hydrogen carbonate",
        "Hypochlorite", "Thiocyanate", "Oxalate", "Peroxide", "Hydronium", "Dihydrogen phosphate", "Arsenate", "Arsenite",
        "Borate", "Perborate", "Bromate", "Hypobromite", "Iodate", "Hypoiodite"};

    std::vector<std::string> formulas = {
        "NH4+", "C2H3O2-", "CO3^2-", "ClO3-", "ClO2-", "CrO4^2-", "CN-", "Cr2O7^2-", "OH-", "NO3-", "NO2-", "ClO4-", "MnO4-",
        "PO4^3-", "SO4^2-", "SO3^2-", "HSO4-", "HCO3-", "ClO-", "SCN-", "C2O4^2-", "O2^2-", "H3O+", "H2PO4-", "AsO4^3-", "AsO3^3-",
        "BO3^3-", "BO4^3-", "BrO3-", "BrO-", "IO3-", "IO-"};

    shuffleQuestions(ions);

    for (const auto &ion : ions)
    {
        std::cout << "What is the formula for " << ion << "?\n";
        if (!askMultipleChoiceQuestion("What is the formula for " + ion, formulas, "NH4+"))
        { // Update with correct answer
            return false;
        }
    }
    return true;
}

bool polyatomicIonsMode2()
{
    std::vector<std::string> ions = {
        "Ammonium", "Acetate", "Carbonate", "Chlorate", "Chlorite", "Chromate", "Cyanide", "Dichromate", "Hydroxide",
        "Nitrate", "Nitrite", "Perchlorate", "Permanganate", "Phosphate", "Sulfate", "Sulfite", "Hydrogen sulfate", "Hydrogen carbonate",
        "Hypochlorite", "Thiocyanate", "Oxalate", "Peroxide", "Hydronium", "Dihydrogen phosphate", "Arsenate", "Arsenite",
        "Borate", "Perborate", "Bromate", "Hypobromite", "Iodate", "Hypoiodite"};

    std::vector<std::string> formulas = {
        "NH4+", "C2H3O2-", "CO3^2-", "ClO3-", "ClO2-", "CrO4^2-", "CN-", "Cr2O7^2-", "OH-", "NO3-", "NO2-", "ClO4-", "MnO4-",
        "PO4^3-", "SO4^2-", "SO3^2-", "HSO4-", "HCO3-", "ClO-", "SCN-", "C2O4^2-", "O2^2-", "H3O+", "H2PO4-", "AsO4^3-", "AsO3^3-",
        "BO3^3-", "BO4^3-", "BrO3-", "BrO-", "IO3-", "IO-"};

    shuffleQuestions(formulas);

    for (const auto &formula : formulas)
    {
        std::cout << "What is the name of the ion with the formula " << formula << "?\n";
        if (!askMultipleChoiceQuestion("What is the name of the ion with the formula " + formula, ions, "Ammonium"))
        { // Update with correct name
            return false;
        }
    }
    return true;
}