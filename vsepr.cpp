#include "vsepr.h"
#include "common_functions.h"
#include <iostream>
#include <vector>

bool vseprMode1()
{
    std::vector<std::string> molecules = {
        "BeCl2", "BF3", "CH4", "NH3", "H2O", "CO2", "SO2", "SF6", "XeF2"};

    std::vector<std::string> molecularGeometries = {
        "Linear", "Trigonal Planar", "Tetrahedral", "Trigonal Pyramidal", "Bent",
        "Linear", "Bent", "Octahedral", "Linear"};

    shuffleQuestions(molecules);

    for (const auto &molecule : molecules)
    {
        std::cout << "What is the molecular geometry of " << molecule << "?\n";
        if (!askMultipleChoiceQuestion("What is the molecular geometry of " + molecule, molecularGeometries, "Linear"))
        {
            return false;
        }
    }
    return true;
}

bool vseprMode2()
{
    std::vector<std::string> molecules = {
        "BeCl2", "BF3", "CH4", "NH3", "H2O", "CO2", "SO2", "SF6", "XeF2"};

    std::vector<std::string> electronGeometries = {
        "Linear", "Trigonal Planar", "Tetrahedral", "Tetrahedral", "Tetrahedral",
        "Linear", "Trigonal Planar", "Octahedral", "Linear"};

    shuffleQuestions(molecules);

    for (const auto &molecule : molecules)
    {
        std::cout << "What is the electron geometry of " << molecule << "?\n";
        if (!askMultipleChoiceQuestion("What is the electron geometry of " + molecule, electronGeometries, "Linear"))
        {
            return false;
        }
    }
    return true;
}

bool vseprMode3()
{
    std::vector<std::string> molecules = {
        "BeCl2", "BF3", "CH4", "NH3", "H2O", "CO2", "SO2", "SF6", "XeF2"};

    std::vector<std::string> bondAngles = {
        "180", "120", "109.5", "107", "104.5", "180", "120", "90", "180"};

    shuffleQuestions(molecules);

    for (const auto &molecule : molecules)
    {
        std::cout << "What is the bond angle in " << molecule << "?\n";
        if (!askMultipleChoiceQuestion("What is the bond angle in " + molecule, bondAngles, "180"))
        {
            return false;
        }
    }
    return true;
}