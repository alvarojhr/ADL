
#include <iostream>

using namespace std;

int main()
{
    string name, gender;
    int age;
    cout<<"Hola mundo";
    cout<<"Bienvenidos a Analisis!";

    cout << "Type your name: ";
    getline(cin, name);

    cout << "Type your age: ";
    cin >> age;

    cout << "Type your gender: ";
    getline(cin, gender);

    return 0;
}
