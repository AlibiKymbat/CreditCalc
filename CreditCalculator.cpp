#include <iostream>
#include <math.h>
using namespace std;

int main() {

    bool playing = true;
    while (playing == true)
    {
        float price = 0, dur = 0, paym = 0, perc = 0, monthp, stav, overpay, fpay;
        cout << "Enter the full price: (To exit enter '0')" << endl;
        while (price <= 0)   // getting values from user, and removing the possibility of the errorus arguments
        {
            cin >> price;
            if (price > 0)
            {
                break;
            }
            else if (price < 0)
            {
                cout << "Please enter a valid cost!" << endl;
            }
            else if (price == 0)
            {
                playing == false;
                return 0;
            }
        }
        cout << "Enter the percentage that ur bank gives you: " << endl;
        while (perc <= 0)
        {
            cin >> perc;
            if (perc > 0 || perc >= 100)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid percentage!" << endl;
            }
        }
        cout << "Enter the in months the duration of the credit: " << endl;
        while (dur <= 0)
        {
            cin >> dur;
            if (dur > 0)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid downpayment!" << endl;
            }
        }
        stav = (perc / 100) / 12; //counting the monthly percentage
        float x, d, r;
        r = 1 + stav;       //calculationg monthly payment
        x = pow(r, dur);
        d = stav + (stav / (x - 1));
        monthp = price * d;
        fpay = monthp * dur;
        overpay = fpay - price;
        cout << "Your monthly payment is: " << endl;  //Showing the results to user
        cout << monthp << endl;
        cout << "Your total payment is: " << endl;
        cout << fpay << endl;
        cout << "You overpay: " << endl;
        cout << overpay << endl;
    }
    return 0;
}