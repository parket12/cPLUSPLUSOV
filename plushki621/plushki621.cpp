#include <iostream>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string gab;
    int choice;
    cout << "Введите строчку с которой моя программа будет действовать\n";
    cin >> gab;


        cout << "\nВыберите действие:" << endl;
        cout << "1. Слово выводится задом наперед" << endl;
        cout << "2. Вывести слово без гласных" << endl;
        cout << "3. Вывести слово без согласных" << endl;
        cout << "4. Рандомно раскидывать буквы заданного слова" << endl;
        cout << "5. Выход из программы" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string reversed = gab;
            reverse(reversed.begin(), reversed.end());
            cout << "\n" << reversed;
            break;
        }
        case 2:
        {
            string remvowels = gab;
            remvowels.erase(remove_if(remvowels.begin(), remvowels.end(), [](wchar_t c) { return wstring(L"aeiouyAEIOUY").find(c) != wstring::npos; }), remvowels.end());
            cout << "\n" << remvowels;
            break;
        }
        case 3:
        {
            string remconsonants = gab;
            remconsonants.erase(remove_if(remconsonants.begin(), remconsonants.end(), [](wchar_t c) { return wstring(L"bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ").find(c) != wstring::npos; }), remconsonants.end());
            cout << "\n" << remconsonants;
            break;
        }
        case 4:
        {
            string shuffled = gab;
            random_shuffle(shuffled.begin(), shuffled.end());
            cout << "\n" << shuffled;
            break;
        }
        case 5:
            return 0;
        default:
            cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    

    return 0;
}
