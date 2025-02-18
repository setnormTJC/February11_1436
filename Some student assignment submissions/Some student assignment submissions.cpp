#include <iostream>

// Define an enum called 'Day' with days of the week
enum Day {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main() {
    // Declare a variable of type 'Day' and assign it a value
    Day today = Wednesday;

    // Use a switch-case to print the corresponding day
    switch (today) {
    case Sunday:
        std::cout << "Today is Sunday." << std::endl;
        break;
    case Monday:
        std::cout << "Today is Monday." << std::endl;
        break;
    case Tuesday:
        std::cout << "Today is Tuesday." << std::endl;
        break;
    case Wednesday:
        std::cout << "Today is Wednesday." << std::endl;
        break;
    case Thursday:
        std::cout << "Today is Thursday." << std::endl;
        break;
    case Friday:
        std::cout << "Today is Friday." << std::endl;
        break;
    case Saturday:
        std::cout << "Today is Saturday." << std::endl;
        break;
    default:
        std::cout << "Invalid day." << std::endl;
        break;
    }

    return 0;
}
