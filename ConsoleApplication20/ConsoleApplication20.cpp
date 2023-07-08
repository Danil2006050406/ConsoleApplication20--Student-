// ConsoleApplication20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student {
private:
    string name;
    string birthdate;
    string phone_number;
    string address;
    string group_number;

public:
    
    Student(string name, string birthdate, string phone_number, string address, string group_number) {
        this->name = name;
        this->birthdate = birthdate;
        this->phone_number = phone_number;
        this->address = address;
        this->group_number = group_number;
    }

    
    void input() {
        cout << "Введіть ім'я студента: ";
        cin >> name;
        cout << "Введіть дату народження: ";
        cin >> birthdate;
        cout << "Введіть номер телефону: ";
        cin >> phone_number;
        cout << "Введіть адресу: ";
        cin >> address;
        cout << "Введіть номер навчальної групи: ";
        cin >> group_number;
    }

    
    void display() {
        cout << "Ім'я: " << name << endl;
        cout << "Дата народження: " << birthdate << endl;
        cout << "Номер телефону: " << phone_number << endl;
        cout << "Адреса: " << address << endl;
        cout << "Номер навчальної групи: " << group_number << endl;
    }

    
    void edit() {
        cout << "Виберіть поле, яке потрібно редагувати:" << endl;
        cout << "1. Ім'я" << endl;
        cout << "2. Дата народження" << endl;
        cout << "3. Номер телефону" << endl;
        cout << "4. Адреса" << endl;
        cout << "5. Номер навчальної групи" << endl;

        int choice;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введіть нове ім'я: ";
            cin >> name;
            break;
        case 2:
            cout << "Введіть нову дату народження: ";
            cin >> birthdate;
            break;
        case 3:
            cout << "Введіть новий номер телефону: ";
            cin >> phone_number;
            break;
        case 4:
            cout << "Введіть нову адресу: ";
            cin >> address;
            break;
        case 5:
            cout << "Введіть новий номер навчальної групи: ";
            cin >> group_number;
            break;
        default:
            cout << "Неправильний вибір!" << endl;
            break;
        }
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student("Jonny Dep", "01/01/2000", "1234567890", "Jack Sparrow", "Group A");

    
    cout << "Початкові дані студента:" << endl;
    student.display();
    cout << endl;

    
    cout << "Введіть нові дані студента:" << endl;
    student.input();
    cout << endl;

   
    cout << "Оновлені дані студента:" << endl;
    student.display();
    cout << endl;

    
    student.edit();

   
    cout << "Дані студента після редагування:" << endl;
    student.display();

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
