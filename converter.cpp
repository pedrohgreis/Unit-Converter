

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iomanip> 

using namespace std;

float cmToMetter(float cm){
    return cm / 100;
}

float cmToft(float cm){
    return cm / 30.48;
}

float cmTokm(float cm){
    return cm / 100000;
}

float area(float cm){
    //cm² to m²
    return cm / 10000;
}

int main(void){

    int option;
    float cm;
    float result;
    vector<string> history; 

    do{
        cout << "-------------------" << endl;
        cout << "|1. cm to m       |" << endl;
        cout << "|2. cm to ft      |" << endl;
        cout << "|3. cm to km      |" << endl;
        cout << "|4.cmArea to mArea|" << endl;
        cout << "|5. View History  |" << endl;
        cout << "|0. Exit          |" << endl;

        cout << "Choose an option: ";
        cin >> option;

        switch (option){

        case 0:
            cout << "Exiting Program...";
            // wait until the user press Enter
            cin.ignore();
            cin.get();
            break;
        case 1:

            cout << "Type a value in cm: ";
            cin >> cm;
            result = cmToMetter(cm);
            history.push_back("\nConverted " + to_string(cm) + " cm to " + to_string(result) + " m");

            cout << fixed << setprecision(2); 
            cout << "Result: " << result << " m"<< endl;
            break;

        case 2:

            cout << "Type a value in cm: ";
            cin >> cm;
            result = cmToft(cm);
            history.push_back("\nConverted " + to_string(cm) + " cm to" + to_string(result) + " ft");

            cout << fixed << setprecision(2); 
            cout << "Result: " << result << " ft" << endl;

            break;

        case 3:

            cout << "Type a value in cm: ";
            cin >> cm;
            result = cmTokm(cm);
            history.push_back("\nConverted " + to_string(cm) + " cm to km" + to_string(result) + " km");

            cout << fixed << setprecision(2); 
            cout << "Result: " << result << " km" << endl;

            break;

        case 4:

            cout << "Type a value in cm²: ";
            cin >> cm;

            result = area(cm);

            history.push_back("\nConverted " + to_string(cm) + " cm² to m²" + to_string(result) + " m² \n");

            cout << fixed << setprecision(2);
            cout << "Result: " << result << " m²" << endl;
            break;

        case 5:
            cout << "Options you chose to convert: ";

            for(const string& entry:history){
                cout << entry << endl;
            }
            break;
        
        default:
            cout << "Invalid Option" << endl;
            break;
        }
    } while (option != 0);
    

    return 0;
}