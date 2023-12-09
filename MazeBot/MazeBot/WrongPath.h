#pragma once

// Class
#include "MazeElement.h"


class WrongPath : public MazeElement {
public:
    string getDescription() const override { return "Wrong path"; } // Description of the Wrong Path element
    char getSymbol() const override { return 'w'; }                      // Character symbol for Wrong Path

private:
};