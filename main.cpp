#include <iostream>
#include <string>

using namespace std;

int RomanToInt(string& input)
{
    bool toContinue = false;
    int finalNumber = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (toContinue == false) {
            //if it there is an I
            if (input[i] == 'I') {
                finalNumber++;
                if (i + 1 < input.size() && input[i + 1] == 'V') {
                    finalNumber = finalNumber + 3;
                    toContinue = true;
                } else if (i + 1 < input.size() && input[i + 1] == 'X'){
                    finalNumber = finalNumber + 8;
                    toContinue = true;
                }
        //next gotta check V
            } else if (input[i] == 'V') {
                finalNumber = finalNumber + 5;
                //next to check X
            } else if (input[i] == 'X') {
                finalNumber = finalNumber + 10;
                if (i + 1 < input.size() && input[i + 1] == 'L') {
                        finalNumber = finalNumber + 20;
                        toContinue = true;
                } else if (i + 1 < input.size() && input[i + 1] == 'C') {
                    finalNumber = finalNumber + 80;
                    toContinue = true;
                }
                //now check L
            } else if (input[i] == 'L') {
                finalNumber = finalNumber + 50;
            }
            //now check C
            else if (input[i] == 'C') {
                if (i + 1 < input.size() && input[i + 1] == 'D') {
                    finalNumber = finalNumber + 300;
                    toContinue = true;
                } else if (i+1 < input.size() && input[i + 1] == 'M'){
                    finalNumber = finalNumber + 800;
                    toContinue = true;
                }
                finalNumber = finalNumber + 100;
                //check D
            } else if (input[i] == 'D') {
                finalNumber = finalNumber + 500;
                //check M
            } else if (input[i] == 'M') {
                finalNumber = finalNumber + 1000;
            }
        } else {
            toContinue = false;
        }
    }
    return finalNumber;
}

int main()
{
    string romanNumber;
    cout << "Welcome to the Roman Number Converter!" << endl;
    cout << "Please type in your roman number: ";
    cin >> romanNumber;
    if (romanNumber.size() > 0) {
        int result = RomanToInt(romanNumber);
        cout << "Your converted roman number is " << result << endl;
    }
    cout << "Press Enter to continue...";
    cin.get(); // Waits for the user to press Enter
    cin.get();
    return 0;
}
