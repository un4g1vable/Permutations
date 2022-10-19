#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    setlocale(0, "");
    string digit;
    cout << "Введите число: ";
    cin >> digit;
    sort(digit.begin(), digit.end());
    for (int i = digit.length() - 1; i != -1; --i) {
        cout << digit[i];
    }
    cout << " <--- полученное максимальное цисло путём перестановок(сортировки)";
}