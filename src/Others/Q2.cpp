/*#include <string>
#include <vector>

/// @param names The unordered collection of regnal names. A complete regnal name may appear more than once in the
///   collection.
/// @pre @p names is not empty.
/// @returns A new collection containing the same contents as @p name but in ascending sorted order, first by regnal
///   number and then by regnal name.
std::vector<std::string> sortRegnalNames(const std::vector<std::string> &names) {
    // implement me!
}

#include <fstream>
#include <iostream>

int readInteger1(bool wholeLine);
std::string readString(bool wholeLine);


/*int main()
{
    // read in test case
    std::vector<std::string> names{};
    const int numNames = readInteger1(true);
    for (int i = 0; i < numNames; ++i) {
        names.push_back(readString(true));
    }
    
    // execute function
    const auto result = sortRegnalNames(names);
    
    // write output to file
    constexpr auto PATH_ENV_VAR = "OUTPUT_PATH";
    const auto outputPath = getenv(PATH_ENV_VAR);
    std::ofstream outfile(outputPath);
    for (auto &&name : result) {
        outfile << name << std::endl;
    }
    
    // clean up
    outfile.close();
    
    // return
    return 0;
}


int readInteger1(bool wholeLine) {
    int value{};
    std::cin >> value;
    if (wholeLine) { std::cin >> std::ws; }
    return value;
}

std::string readString(bool wholeLine) {
    std::string value{};
    if (wholeLine) { std::getline(std::cin, value); }
    else { std::cin >> value; }
    return value;
}*/