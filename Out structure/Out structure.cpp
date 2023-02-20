#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

struct Adress 
{
    string Country;
    string City;
    string Street;
    int HomeNum;
    int ApartmentNum;
    int Index;
};

void print(Adress *A)
{
    cout << "Адрес\n";
    cout << "Страна: " << A->Country << endl;
    cout << "Город: " << A->City << endl;
    cout << "Улица: " << A->Street << endl;
    cout << "Номер дома: " << A->HomeNum << endl;
    cout << "Номер квартиры: " << A->ApartmentNum << endl;
    cout << "Индекс: " << A->Index << endl;
    cout << endl;
}
void fill(Adress *A)
{
    cout << "Введите следующие данные\n";
    cout << "Страна: ";
    cin >> A->Country;
    cout << "Город: ";
    cin >> A->City;
    cout << "Улица: ";
    cin >> A->Street;
    cout << "Номер дома: ";
    cin >> A->HomeNum;
    cout << "Номер квартиры: ";
    cin >> A->ApartmentNum;
    cout << "Индекс: ";
    cin >> A->Index;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Adress Москва;
    Adress Ижевск;
    
    fill(&Москва);
    print(&Москва);
    fill(&Ижевск);
    print(&Ижевск);
}
