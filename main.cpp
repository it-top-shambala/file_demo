#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "output.dat";

    // Запись в файл
    ofstream output;
    output.open(path, ios::app);

    if (!output.is_open()) {
        cerr << "Error! File not opened" << endl;
        return 1;
    }

    output << "Test text" << endl;

    output.close();

    // Чтение из файла
    ifstream input;
    input.open(path);

    if (!input.is_open()) {
        cerr << "Error! File not opened" << endl;
        return 1;
    }

    string line;
    string text = "";
    while (getline(input, line)) {
        text += line + "\n";
    }
    cout << text << endl;

    input.close();

    return 0;
}
