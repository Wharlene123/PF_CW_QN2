#include <iostream>
#include <vector>

using namespace std;
//let us use vector for divisors of number
void printDivisors(int number) {//function printDivisors
    
	vector<int> divisors; // Vector to store divisors

    // Find divisors
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i); // Store the divisor
        }
    }

    // Print divisors in decreasing order from the highest to the smallest
    for (int i = divisors.size() - 1; i >= 0; --i) {
        cout << divisors[i] << endl;
    }
}

int main() {//that is actually our main class, so we will need to call the funciton in our main function
    cout << "This program is designed to exhibit the \n" ;
cout<<"positive divisors of positive integers supplied by you. The program will repeatedly prompt you \n";
cout<<"to enter a positive integer. Each time you enter a positive integer, the program will print all the \n";
cout<<"divisors of your integer in a column and in decreasing order" << endl;
   

    while (true) {
        int number;

        // Prompt user for input
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check for termination conditions
        if (number <= 0) {
            cout << number << " is not a positive integer." << endl;
           
            continue; // Prompt again
        }

        // Print divisors.here we call our printDivisors function
        printDivisors(number);

        // Ask if the user wants to continue
        char choice;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Validate user input for continuation
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') 
		{//if the user choose a char that is not y or n just display the message below
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

        // Exit if the user choose N or n
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    cout << "Thank you for using the program." << endl;
    return 0;
}
