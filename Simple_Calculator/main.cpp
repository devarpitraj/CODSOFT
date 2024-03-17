#include<iostream>
#include<iomanip>

int main() {
    double operand1{};
    double operand2{};
    double result{};
    char op{};
    char out{};

    std::cout << std::setfill('/') << std::setw(35) << std::right << "Task 2" 
                    << std::setfill('/') << std::setw(32) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('#') << std::setw(42) << std::right << "Simple Calculator"
                << std::setfill('#') << std::setw(25) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('-') << std::setw(69) << std::endl;

    std::cout << "\n" << std::endl;

    do {
        std::cout << "Enter 1st operand: ";
        std::cin >> operand1;

        std::cout << "Enter operator: ";
        std::cin >> op;

        std::cout << "Enter 2nd operand: ";
        std::cin >> operand2;

        switch (op) {
            case '+' : 
                result = operand1 + operand2;
                break;
            case '*' :
                result = operand1 * operand2;
                break;
            case '/' :
                result = operand1 / operand2;
                break;
            case '-' :
                result = operand1 - operand2;
                break;
            case '^' :
                result = 1;
                for(auto i = 0; i < operand2; i++)
                    result *= operand1;
                break;
            default :
                std::cout << "Enter a valid operator";
                continue;
        }

        std::cout << "Result of " << operand1 << " " << op << " " << operand2 << " : " << result << std::endl;

        std::cout << "Compute another operation (N for No):";
        std::cin >> out;
        out = toupper(out);
    }while(out != 'N');

    return 0;
}