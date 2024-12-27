#include "amino_acids.h"
#include "common_functions.h"
#include <iostream>
#include <vector>

bool aminoAcidsMode1()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> sideChainTypes = {
        "Nonpolar", "Polar", "Polar", "Acidic", "Polar", "Polar", "Acidic", "Nonpolar", "Basic", "Nonpolar", "Nonpolar", "Basic",
        "Nonpolar", "Nonpolar", "Nonpolar", "Polar", "Polar", "Nonpolar", "Nonpolar", "Nonpolar"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the chemical nature of the side chain (R-group) of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the chemical nature of the side chain of " + aminoAcid, sideChainTypes, "Nonpolar"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode2()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> nutritionalClassifications = {
        "Nonessential", "Essential", "Essential", "Essential", "Nonessential", "Nonessential", "Nonessential", "Nonessential",
        "Essential", "Essential", "Essential", "Essential", "Nonessential", "Nonessential", "Nonessential", "Nonessential",
        "Nonessential", "Nonessential", "Essential", "Essential"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the nutritional classification of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the nutritional classification of " + aminoAcid, nutritionalClassifications, "Nonessential"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode3()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> metabolicFates = {
        "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic",
        "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic",
        "Glucogenic", "Glucogenic", "Glucogenic", "Glucogenic"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the metabolic fate (Glucogenic vs. Ketogenic) of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the metabolic fate of " + aminoAcid, metabolicFates, "Glucogenic"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode4()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> functionalGroups = {
        "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group",
        "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group", "Amino group",
        "Amino group", "Amino group", "Amino group", "Amino group"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the functional group of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the functional group of " + aminoAcid, functionalGroups, "Amino group"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode5()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> biologicalRoles = {
        "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis",
        "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis",
        "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis", "Protein synthesis",
        "Protein synthesis", "Protein synthesis"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the biological role of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the biological role of " + aminoAcid, biologicalRoles, "Protein synthesis"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode6()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> stereochemistries = {
        "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration",
        "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration",
        "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration", "L-configuration",
        "L-configuration", "L-configuration"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the stereochemistry of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the stereochemistry of " + aminoAcid, stereochemistries, "L-configuration"))
        {
            return false;
        }
    }
    return true;
}

bool aminoAcidsMode7()
{
    std::vector<std::string> aminoAcids = {
        "Alanine", "Arginine", "Asparagine", "Aspartic acid", "Cysteine", "Glutamine", "Glutamic acid", "Glycine",
        "Histidine", "Isoleucine", "Leucine", "Lysine", "Methionine", "Phenylalanine", "Proline", "Serine", "Threonine",
        "Tryptophan", "Tyrosine", "Valine"};

    std::vector<std::string> pKaClassifications = {
        "Neutral", "Basic", "Neutral", "Acidic", "Neutral", "Neutral", "Acidic", "Neutral", "Basic", "Neutral", "Neutral", "Basic",
        "Neutral", "Nonpolar", "Neutral", "Polar", "Neutral", "Neutral", "Neutral", "Neutral"};

    shuffleQuestions(aminoAcids);

    for (const auto &aminoAcid : aminoAcids)
    {
        std::cout << "What is the pKa classification of " << aminoAcid << "?\n";
        if (!askMultipleChoiceQuestion("What is the pKa classification of " + aminoAcid, pKaClassifications, "Neutral"))
        {
            return false;
        }
    }
    return true;
}