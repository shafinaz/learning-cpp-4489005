#include <vector>
/// @param deck The initial ordered sequence of card face values in the game's deck
/// @pre @p deck is not empty
/// @returns The difference between Miriam's and Alejandro's scores at the end of the game, assuming that Miriam draws
///   the first card. A positive return value indicates that Miriam won the game, while a negative return value
///   indicates that Alejandro won the game. A return value of 0 indicates a draw/tie.
int computeDifference(const std::vector<int> &deck) {
    // implement me!
}
#include <fstream>
#include <iostream>

int readInteger2(bool wholeLine);


int main()
{
    // read in test case
    std::vector<int> deck{};
    const int numCards = readInteger2(true);
    for (int i = 0; i < numCards; ++i) {
        deck.push_back(readInteger2(true));
    }
    
    // execute function
    const auto result = computeDifference(deck);
    
    // write output to file
    constexpr auto PATH_ENV_VAR = "OUTPUT_PATH";
    const auto outputPath = getenv(PATH_ENV_VAR);
    std::ofstream outfile(outputPath);
    outfile << result << std::endl;
    
    // clean up
    outfile.close();
    
    // return
    return 0;
}


int readInteger2(bool wholeLine) {
    int value{};
    std::cin >> value;
    if (wholeLine) { std::cin >> std::ws; }
    return value;
}