#ifndef ATOM_H
#define ATOM_H

#include <string>

class Atom {
public:
    Atom();
    Atom(const std::string& symbol, int atomicNumber, int neutrons); // Параметрический конструктор

    const std::string& getSymbol() const;
    int getAtomicNumber() const;
    int getNeutrons() const;

    void printInfo() const;

private:
    std::string symbol;       
    int atomicNumber;         
    int neutrons;             
};

#endif