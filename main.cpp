#include <iostream>
#include <string>

int main()
{
    // collect user choice
    std::cout << "1. Gross profit margin " << std::endl;
    std::cout << "2. Net profit margin" << std::endl;
    std::cout << "Option 1 or 2: ";
    int choice;
    std::cin >> choice;
    double cost_of_goods, revenue, operating_costs, interest, taxes;
    int margin;

    // if choice is 1 calculate gross profit margin
    if (choice == 1)
    {
        std::cout << "\nRevenue: ";
        std::cin >> revenue;
        std::cout << "Cost of goods sold: ";
        std::cin >> cost_of_goods;
        margin = (revenue - cost_of_goods) / revenue * 100;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Gross profit margin: " << margin << "%\n";
        std::cout << "--------------------------" << std::endl;
    }
    else if (choice == 2)
    { // if choice is 2 calculate net profit margin
        std::cout << "\nRevenue: ";
        std::cin >> revenue;
        std::cout << "Cost of goods sold: ";
        std::cin >> cost_of_goods;
        std::cout << "Operating costs: ";
        std::cin >> operating_costs;
        std::cout << "Interest: ";
        std::cin >> interest;
        std::cout << "Taxes: ";
        std::cin >> taxes;
        margin = (revenue - cost_of_goods - operating_costs - interest - taxes) / revenue * 100;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Net profit margin: " << margin << "%\n";
        std::cout << "--------------------------" << std::endl;
    }
    else
    {
        std::cout << "Please choose a listed option" << std::endl;
    }
    return 0;
}