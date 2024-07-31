#include <vector>

/// The definition of a buy or a sell order targeting a particular stock in the market.
/// @member timestamp The time at which the order request was made.
/// @member stockID The ID of the stock to either buy or sell.
/// @member buy Whether the order is to buy ('true') or sell ('false') shares of the stock.
/// @member quantity The number of shares of the stock to buy or sell.
struct Order { int timestamp; int stockId; bool buy; int quantity; };

/// The definition of an update to the price of a stock.
/// @member timestamp The time at which the change in price took effect.
/// @member stockID The ID of the stock whose price changed.
/// @member delta The amount that the stock's price increased (if positive) or decreased (if negative).
struct PriceUpdate { int timestamp; int stockId; int delta; };


/// @param initialPrice The price of all stocks at the beginning of the day, before any price updates are published.
/// @param orders The sequence of buy and sell orders to be executed.
/// @param feed The exchange feed of price updates to various stocks.
/// @pre @p initialPrice >= 1.
/// @pre @p orders is not empty.
/// @pre @p feed is not empty, and is sorted in ascending order by timestamp.
/// @pre @p The set of all timestamps among orders in @p orders and price updates in @p feed contains no duplicates.
/// @returns A collection [see below] with the end-of-day profits and losses of each stock for which at least one order
///   was executed. Stocks for which a price update was published but no orders were executed should be excluded from the
///   return value.
auto profitsAndLosses(int initialPrice, const std::vector<Order> &orders, const std::vector<PriceUpdate> &feed) {
    // implement me!
}

#include <algorithm>
#include <fstream>
#include <iostream>

int readInteger(bool wholeLine);


/*int main() {
    // read in test case
    int initialPrice = readInteger(true);
    std::vector<PriceUpdate> feed{};
    const int numPriceUpdates = readInteger(true);
    for (int i = 0; i < numPriceUpdates; ++i) {
        int ts = readInteger(false);
        int id = readInteger(false);
        int delta = readInteger(true);
        feed.push_back({ ts, id, delta });
    }
    std::vector<Order> orders{};
    const int numOrders = readInteger(true);
    for (int i = 0; i < numOrders; ++i) {
        int ts = readInteger(false);
        int id = readInteger(false);
        bool buy = readInteger(false) == 1 ? true : false;
        int qty = readInteger(true);
        orders.push_back({ ts, id, buy, qty });
    }
    
    // execute function
    const auto result = profitsAndLosses(initialPrice, orders, feed);
    
    // organize result
    std::vector<std::pair<int, int>> pairs{};
    for (auto &&element : result) {
        auto [a, b] = element;
        int stockId = a;
        int pnl = b;
        pairs.emplace_back(stockId, pnl);
    }
    auto comp = [](const auto &lhs, const auto &rhs) { return lhs.first < rhs.first; };
    std::sort(pairs.begin(), pairs.end(), comp);
    
    // write output to file
    constexpr auto PATH_ENV_VAR = "OUTPUT_PATH";
    const auto outputPath = getenv(PATH_ENV_VAR);
    std::ofstream outfile(outputPath);
    for (auto &&pair : pairs) {
        outfile << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    
    // clean up
    outfile.close();
    
    // return
    return 0;
}*/


int readInteger(bool wholeLine) {
    int value{};
    std::cin >> value;
    if (wholeLine) { std::cin >> std::ws; }
    return value;
}