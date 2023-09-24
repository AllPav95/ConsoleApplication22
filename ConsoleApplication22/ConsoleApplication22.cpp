#include <iostream>
#include "Atom.h"

int main() {
    
    Atom hydrogen("H", 1, 0);

    Atom defaultAtom;

    std::cout << "Info about the first atom:" << std::endl;
    hydrogen.printInfo();
    std::cout << std::endl;

    std::cout << "Info about the second atom (default atom):" << std::endl;
    defaultAtom.printInfo();
    std::cout << std::endl;

    return 0;
}