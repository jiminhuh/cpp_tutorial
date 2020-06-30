#include <iostream>

using namespace std;

int main() {
    string name; 
    int age;
    cout << "Hello What is your name?   ";
    cin >> name;
    cout << "Hello " << name << ". How old are you?   ";
    cin >> age;

    if (age > 25) {
        cout << "Wow you are older than me!";
    } else if (age == 25) {
        cout << "We are the same age";
    } else {
        cout << "Haha you are younger than me " << name << "!";
    }

}