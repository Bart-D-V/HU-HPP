#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    std::string output;

    std::ofstream out_stream;
    out_stream.open("text.txt");
    out_stream << input;
    out_stream.close();

    std::ifstream in_stream;
    in_stream.open("text.txt");
    in_stream >> output;
    in_stream.close();

    std::cout << output << std::endl;
    return 0;
}