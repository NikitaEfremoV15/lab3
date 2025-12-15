#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void writeRandomNumbers(const string& filename) {
    ofstream fout(filename);
    if (!fout) {
        cerr << "Не удалось открыть файл: " << filename << endl;
        return;
    }

 for (int i = 0; i < 10; i++) {
    char letter = 'A' + rand() % 26; // случайная буква от 'A' до 'Z'
    fout << letter;
    if (i < 9) fout << " ";
}
    fout.close();
}

int main() {
    srand(time(0)); // инициализация генератора случайных чисел

    writeRandomNumbers("file1.txt");
    writeRandomNumbers("file2.txt");
    writeRandomNumbers("file3.txt");

    cout << "Файлы успешно созданы!" << endl;
    return 0;
}
