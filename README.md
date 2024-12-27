# ChemQuest

Welcome to the ChemQuest Game!
This game includes quizzes on four topics: the Periodic Table of Elements, Polyatomic Ions, Amino Acids, and VSEPR Theory.
Each quiz comes with multiple game modes to test your knowledge.
This guide will walk you through the steps to set up and play the game.

## Features

- **Quiz 1: Periodic Table of Elements Quiz**

  - **Mode 1:** Guess the element symbol from the element name.
  - **Mode 2:** Guess the element name from the element symbol.

- **Quiz 2: Polyatomic Ions Quiz**

  - **Mode 1:** Guess the formula from the ion name.
  - **Mode 2:** Guess the ion name from the formula.

- **Quiz 3: Amino Acids Quiz**

  - **Mode 1:** Identify the side chain chemical nature of an amino acid.
  - **Mode 2:** Identify the nutritional classification of an amino acid.
  - **Mode 3:** Identify the metabolic fate of an amino acid (Glucogenic vs. Ketogenic).
  - **Mode 4:** Identify the functional group of an amino acid.
  - **Mode 5:** Identify the biological role of an amino acid.
  - **Mode 6:** Identify the stereochemistry of an amino acid.
  - **Mode 7:** Identify the pKa classification of an amino acid.

- **Quiz 4: VSEPR Theory Quiz**

  - **Mode 1:** Identify the molecular geometry based on steric number and lone pairs.
  - **Mode 2:** Identify the electron geometry based on steric number and lone pairs.
  - **Mode 3:** Identify the bond angles based on steric number and lone pairs.

## Prerequisites

- **Operating System:** macOS, Linux, or Windows (via WSL)
- **Compiler:** `g++` (GNU Compiler Collection) that supports C++17 or later
- **CMake** (optional for building, if you want to use it)

## Setting Up the Project

Follow these steps to run the quiz game on your local machine:

### Step 1: Clone the Repository

Open a terminal and clone the repository to your local machine:

```bash
git clone https://github.com/your-username/chemistry-quiz-game.git
cd chemistry-quiz-game
```

### Step 2: Compile the Code

Make sure you have `g++` installed. To compile the code using the provided `Makefile`, run the following command:

```bash
make
```

This will compile all the necessary `.cpp` files and produce an executable called `quiz_game`.

### Step 3: Run the Game

To start the game, simply run the executable:

```bash
./quiz_game
```

This will start the game, and you'll be prompted with a welcome screen where you can select which quiz to play and which mode you want to use.

### Step 4: Playing the Game

Once the game starts, you can select a quiz and a mode. Here's how the game modes work:

#### Quiz 1: Periodic Table of Elements

- **Mode 1**: Guess the element symbol from the element name.

  - Example: If the question is "What is the symbol for Hydrogen?", the user should answer "H".

- **Mode 2**: Guess the element name from the element symbol.

  - Example: If the question is "What is the name of the element with the symbol 'He'?", the user should answer "Helium".

#### Quiz 2: Polyatomic Ions

- **Mode 1**: Guess the formula from the ion name.

  - Example: If the question is "What is the formula for sulfate?", the user should answer "SO4^2-".

- **Mode 2**: Guess the ion name from the formula.

  - Example: If the question is "What is the name of the ion with the formula 'NO3^-'?", the user should answer "Nitrate".

#### Quiz 3: Amino Acids

- **Mode 1**: Identify the side chain chemical nature of the amino acid.

  - Example: Given the amino acid “Alanine”, choose the correct answer: Polar.

- **Mode 2**: Identify the nutritional classification (Essential or Non-essential).

  - Example: Given “Leucine”, choose the correct answer: Essential.

- **Mode 3**: Identify the metabolic fate (Glucogenic vs. Ketogenic).

  - Example: Given “Phenylalanine”, choose the correct answer: Glucogenic.

- **Mode 4**: Identify the functional group of the amino acid.

  - Example: Given “Cysteine”, choose the correct functional group: Thiol group.

- **Mode 5**: Identify the biological role of the amino acid.

  - Example: Given “Serine”, choose the biological role: Phosphorylation.

- **Mode 6**: Identify the stereochemistry (L or D).

  - Example: Given “Lysine”, choose the correct stereochemistry: L.

- **Mode 7**: Identify the pKa classification of the amino acid.

  - Example: Given “Aspartic acid”, choose the correct pKa classification: Acidic.

#### Quiz 4: VSEPR Theory

- **Mode 1**: Identify the molecular geometry.

  - Example: Given steric number 4 and 0 lone pairs (e.g., CH4), the correct answer is “Tetrahedral”.

- **Mode 2**: Identify the electron geometry.

  - Example: Given steric number 3 and 0 lone pairs (e.g., BF3), the correct answer is “Trigonal Planar”.

- **Mode 3**: Identify the bond angles.

  - Example: Given steric number 4 and 2 lone pairs (e.g., H2O), choose the correct bond angles: 104.5 degrees.

### Project Structure

Here is the structure of the project directory:

```bash
chemistry-quiz-game/
├── Makefile                # Makefile for compiling the code
├── main.cpp                # Main game driver
├── common_functions.cpp    # Helper functions used across the quizzes
├── common_functions.h      # Header for common functions
├── elements.cpp            # Periodic Table Quiz code
├── elements.h              # Header for periodic table functions
├── polyatomic_ions.cpp     # Polyatomic Ions Quiz code
├── polyatomic_ions.h       # Header for polyatomic ion functions
├── amino_acids.cpp         # Amino Acids Quiz code
├── amino_acids.h           # Header for amino acids functions
├── vsepr.cpp               # VSEPR Theory Quiz code
├── vsepr.h                 # Header for VSEPR theory functions
└── README.md               # Project documentation
```

### Troubleshooting

#### Issue: Compliation Errors

Ensure that you have `g++` installed and are using `C++`17 or later. If using `make`, ensure the `Makefile` is correctly set up. If needed, run `make clean` before recompiling.
