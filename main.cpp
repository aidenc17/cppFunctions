#include <iostream>

//reads top to bottom, you have to have at least a skeleton before, and then you can put the rest on the bottom

void happyBirthday(std::string name, int age);

double square(double length);

std::string concatStrings(std::string string1, std::string string2);
int main() {

    happyBirthday("aiden", 20);

    double length = 5.0;
    double area = square(length);

    std::cout << "\nArea: " << area << "cm squared\n\n";


    std::string firstName = "Aiden";
    std::string lastName = "Cox";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << '\n';

    return 0;
}
void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";
}

double square(double length) {
    double result = length * length;
    return result;
}

std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}