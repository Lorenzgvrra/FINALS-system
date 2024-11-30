#include <iostream>
using namespace std;

int main() {
    // VARIABLES
    int choice, payment, totalBill = 0, computedBill = 0, stay, ans;
    string clientName;
    //MAJJ = Marco, Alphonse, Jude, John (first name of the members)
    cout << "***WELCOME TO MAJJ'S Hotel***\n\n";
    //Main Loop
    do {
        cout << "Input your Name: ";
        cin >> clientName;
        system("pause");
        system("cls");
        //Loop for when the input is incorrect
        do
        {
            //List of Room type Choices
            cout << "Select A Room type\n"
                << "1. Level 1 (Standard) :: 50$\n"
                << "2. Level 2 (Premium)  :: 150$\n"
                << "3. Level 3 (Deluxe)   :: 200$\n"
                << ":: ";
            cin >> choice;
            system("pause");
            system("cls");
            
            switch (choice) {
            case 1:


                cout << "You chose a Standard Hotel Room\n";
                totalBill += 50;
                cout << "Total Bill: " << totalBill << endl;
                break;
            case 2:


                cout << "You chose a Premium Hotel Room\n";
                totalBill += 150;
                cout << "Total Bill: " << totalBill << endl;
                break;
            case 3:


                cout << "You chose a Deluxe Hotel Room\n";
                totalBill += 200;
                cout << "Total Bill: " << totalBill << endl;
                break;

            case 0:
                choice = 4;//when the user inputted 0 it will change the value of variable choice to 8 to loop it back since it is an incorrect input
               
            default:

                cout << "Incorrect Input\n";
                system("pause");
                system("cls");
            }

        } while (3 < choice); //Will loop this until the inputted choice is available or correct 
        //Second loop for the duration of stay choices and conditon incase the input is incorrect
        do
        {
            cout << "Select your duration of stay: \n"
                << "1. 1 Day   :: 10$\n"
                << "2. 3 Days  :: 30$\n"
                << "3. 5 Days  :: 50$\n"
                << "4. 1 Week  :: 100$\n"
                << "5. 2 Weeks :: 200$\n"
                << "6. 3 Weeks :: 300$\n"
                << "7. 1 Month :: 400$\n"
                << "::";
            cin >> stay;
            system("pause");
            system("cls");

            switch (stay) {
            case 1:

                cout << "You chose to stay for 1 Day\n";
                totalBill += 10;
                cout << "Total Bill: " << totalBill << endl;
                break;
            case 2:

                cout << "You chose to stay for 3 Days\n";
                totalBill += 30;
                cout << "Total Bill: " << totalBill << endl;
                break;
            case 3:

                cout << "You chose to stay for 5 Days\n";
                totalBill += 50;
                cout << "Total Bill: " << totalBill << endl;
                break;

            case 4:

                cout << "You chose to stay for 1 Week\n";
                totalBill += 100;
                cout << "Total Bill: " << totalBill << endl;
                break;

            case 5:

                cout << "You chose to stay for 2 Weeks\n";
                totalBill += 200;
                cout << "Total Bill: " << totalBill << endl;
                break;

            case 6:

                cout << "You chose to stay for 3 Weeks\n";
                totalBill += 300;
                cout << "Total Bill: " << totalBill << endl;
                break;

            case 7:

                cout << "You chose to stay for 1 Month\n";
                totalBill += 400;
                cout << "Total Bill: " << totalBill << endl;
                break;
            case 0:
                stay = 8;//when the user inputted 0 it will change the value of variable stay to 8 to loop it back since it is an incorrect input

            default:
                cout << "Incorrect Input\n";
            }
        } while (7 < stay); //Will loop this until the inputted choice is available or correct
        //loop until the user inputted the correct number
        do
        {
            //gives the user a choice whether to accomodate for another or bill out
            cout << "\nWhat do you want to do?\n"
                << "1. Continue and accomodate for another person\n"
                << "0. Bill out\n"
                << "::";
            cin >> ans;
            system("pause");
            system("cls");

            switch (ans)
            {
            case 1:
                ans = 1;
                break;
            case 0:
                ans = 0;
                break;
            default:
                cout << "Incorrect Input\n ";
                break;
            }
        } while (2 < ans);//will loop this when the user inputted a number greater than 1

        //checking if the user inputted the correct number from the choices and print out the current bill
        if (0 < choice && 3 >= choice && 0 < stay && 3 >= stay) {
            system("cls");
            cout << "Current Bill: " << totalBill << "\n";
        }


    } while (ans != 0);//(condition of Main loop) will loop this until the user decided to bill out
    //Loop for The Billing transaction
    do {

        cout << "Your bill is " << totalBill << "\n"
            << "Input Payment: ";
        cin >> payment;


        computedBill = totalBill - payment;


        if (0 > computedBill) {
            cout << "You have a change " << computedBill * -1 << "\n";
        }
        else if (0 == computedBill) {
            cout << "Payment Complete\n";
            system("pause");
            system("cls");
        }
        else {
            system("cls");
            cout << "Insufficient pay! PAY UP!!!\n\n";
            system("pause");
            system("cls");
        }

    } while (0 < computedBill);

    cout << "You can take the ticket now\n\n\n";
    cout << "***THANK YOU FOR VISITING MAJJ'S HOTEL";

    system("pause");
    return 0;
}