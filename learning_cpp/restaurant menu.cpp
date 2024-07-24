#include <iostream>
#include <string>

using namespace std;

const int MENU_SIZE = 5;
string menuItems[MENU_SIZE] = {"Burger", "Pizza", "Pasta", "Salad", "Soda"};
double menuPrices[MENU_SIZE] = {5.99, 8.99, 7.49, 4.99, 1.99};


void displayMenu() {
    cout << "Menu:\n";
    for (int i = 0; i < MENU_SIZE; ++i) {
        cout << menuItems[i] << ": $" << menuPrices[i] << endl;
    }
}


double takeOrder() {
    string item;
    double total = 0.0;

    cout << "Enter your order (type 'done' to finish):\n";
    
    while (true) {
        cout << "Item: ";
        cin >> item;

        if (item == "done") {
            break;
        }

        bool validItem = false;
        for (int i = 0; i < MENU_SIZE; ++i) {
            if (item == menuItems[i]) {
                total += menuPrices[i];
                cout << "Added " << item << " to your order. Current total: $" << total << endl;
                validItem = true;
                break;
            }
        }

        if (!validItem) {
            cout << "Invalid item. Please choose from the menu.\n";
        }
    }

    return total;
}

int main() {

    displayMenu();

    double total = takeOrder();

    cout << "Your total is: $" << total << endl;

    return 0;
}

