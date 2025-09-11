#include <iostream>

int main() {
    double cal = 0;
    double centimetre = 0;
    std::cout << "witamy\nna\np\no\nkladzie" << std::endl;
    std::cout << "Podaj liczbe w centymetrach: " << std::endl;
    std::cin >> centimetre;
    cal = centimetre / 2.54;
    std::cout << centimetre << " cm to " << cal << " cali." << std::endl;

    return 0;
}