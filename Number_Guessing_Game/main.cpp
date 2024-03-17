#include<iostream>
#include<iomanip>

int main() {
    std::cout << std::setfill('/') << std::setw(35) << std::right << "Task 1" 
                    << std::setfill('/') << std::setw(32) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('#') << std::setw(42) << std::right << "Number Guessing Game"
                << std::setfill('#') << std::setw(25) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('-') << std::setw(69) << std::endl;

    std::cout << "\n" << std::endl;

    const int number{5000};
    int num{};

    std::cout << "Welcome to the number guessing game." << std::endl;
    std::cout << "To get you started here's a hint for you\n" 
                << "!!HINT!! :- The number is near the cubic value of 17\n"
                << "Good Luck and have a great time while guessing the number" << std::endl;

    std::cout << "\n" << std::endl;

    do {
        std::cout << "Guess a number : ";
        std::cin >> num;

        if(num < number) 
            std::cout << "The number is greater than " << num << std::endl;

        if(num > number) 
            std::cout << "The number is less than " << num << std::endl;
        
        if(num == number) {
            std::cout << "!!CONGRATULATIONS!!\n" 
                        << "Clap Clap Clap!\n"
                        << "You have guessed the number correctly" << std::endl;
            break;
        }
        
    }while(1);

    std::cout << "\n" << std::endl;
    std::cout << "Thankyou for playing the game" << std::endl;

    return 0;
}