#include "Atom.h"
#include <iostream>

Atom::Atom() : symbol(" "), atomicNumber(0), neutrons(0) {}

Atom::Atom(const std::string& symbol, int atomicNumber, int neutrons)
    : symbol(symbol), atomicNumber(atomicNumber), neutrons(neutrons) {}

const std::string& Atom::getSymbol() const {
    return symbol;
}

int Atom::getAtomicNumber() const {
    return atomicNumber;
}

int Atom::getNeutrons() const {
    return neutrons;
}

void Atom::printInfo() const {
    std::cout << "Symbol: " << symbol << std::endl;
    std::cout << "Atomic Number: " << atomicNumber << std::endl;
    std::cout << "Neutrons: " << neutrons << std::endl;
}