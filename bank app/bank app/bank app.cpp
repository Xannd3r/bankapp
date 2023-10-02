#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables here 
    float initInv, monDep, AnuInt, months, years;
    float totalAm, intAmt, yearTotInt;


    // Prints out for the user to input their financial info
    cout << "=================================================================================\n";
    cout << "Input the following info listed below, press enter when you are ready to continue.\n";
    cout << "=================================================================================\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";


    // Waits for the user to press enter to continue to the next section
    system("PAUSE");


    // Allows the user to input their information
    cout << "===============================================\n";
    cout << "Input your info now, press enter when prompted.\n";
    cout << "===============================================\n";
    cout << "Initial Investment Amount: $";
    cin >> initInv;
    cout << "Monthly Deposit: $";
    cin >> monDep;
    cout << "Annual Interest: %";
    cin >> AnuInt;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;


    // Waits for the user to press enter to continue to the next section
    system("PAUSE");


    // Sets the total amount to be updated from initial investment
    totalAm = initInv;


    // Displays the year data without  deposits
    cout << "===============================================\n";
    cout << "Balance and interest with no monthly deposits\n";
    cout << "===============================================\n";
    cout << "\n";
    cout << "=============================================\n";
    cout << "Year end balance and year end earned interest\n";
    cout << "=============================================\n";



    // Math that Calculates the data for each year, then displays it
    for (int i = 0; i < years; i++) {

        // Yearly interest math
        intAmt = (totalAm) * ((AnuInt / 100));

        // Year end total math
        totalAm = totalAm + intAmt;

        // Print to table
        cout << (i + 1) << "$" << fixed << setprecision(2) << totalAm << "$" << intAmt << "\n";
    }

    // Updatess again
    totalAm = initInv;

    // Display year WITH the monthly deposits
    cout << "=========================================================\n";
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=========================================================\n";
    cout << "\n";
    cout << "==================================================\n";
    cout << "Year end balance and earned interest\n";
    cout << "==================================================\n";

    // more year math
    for (int i = 0; i < years; i++) {

        // Sets the interest to zero at the beginning of the year
        yearTotInt = 0;

        // Math for the built-up interest
        for (int j = 0; j < 12; j++) {

            // Monthly math
            intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

            // end of the month interst
            yearTotInt = yearTotInt + intAmt;

            // End total
            totalAm = totalAm + monDep + intAmt;
        }

        // Print to the table
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";
    }


    return 0;
}