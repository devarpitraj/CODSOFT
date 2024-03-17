#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

int main() {
    std::cout << std::setfill('/') << std::setw(35) << std::right << "Task 3" 
                    << std::setfill('/') << std::setw(32) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('#') << std::setw(38) << std::right << "Word Count"
                << std::setfill('#') << std::setw(29) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('/') << std::setw(67) << "" << std::endl;
    std::cout << std::setfill('-') << std::setw(69) << std::endl;

    std::cout << "\n" << std::endl;

    std::ifstream in_file;
    std::string filename;

    std::cout << "Enter filename:";
    std::cin >> filename;
    in_file.open(filename);

    if(!in_file) {
        std::cerr << "Error in opening file" << std::endl;
        return 1;
    }

    char word{};
    int count{};

    while(in_file >> word) count++;

    std::cout << "Total no. of words in " << filename << " : " << count << std::endl;

    return 0;
}