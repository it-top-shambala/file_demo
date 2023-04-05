#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ofstream output;
    output.open("k:\\output.dat", ios::trunc);

    if (!output.is_open()) {
        cerr << "Error! File not opened" << endl;
        return 1;
    }

    output << "Test text" << endl;

    output.close();

    return 0;
}
