#include <iostream>
#include <regex>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("genicam.xml");
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo XML\n";
        return 1;
    }

    std::string line;
    std::regex re("^\\s*<pFeature>(.*?)</pFeature>");
    std::smatch match;

    while (std::getline(file, line)) {
        if (std::regex_search(line, match, re)) {
            std::cout << "Encontrado: " << match[1] << std::endl;
        }
    }

    file.close();
    return 0;
}
