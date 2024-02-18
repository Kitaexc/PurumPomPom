#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    const int rows = 3;
    const int cols = 5;
    double array[rows][cols];


    cout << "Введите элементы массива построчно (размером 3x5):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }


    for (int i = 0; i < rows; ++i) {
        double sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
        }
        double average = sum / cols;
        cout << "Среднее арифметическое элементов " << i + 1 << " строки: "
            << fixed << setprecision(2) << average << endl;
    }

    return 0;
}
