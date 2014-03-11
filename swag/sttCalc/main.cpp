/************************
Super simple yet cleaned up version of the swaggregator.
As you can see it simply asks for input and subtracts them while validatine the
numbers to be in a valid freq range for Ku band.
*************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;
//initiate functoion to insure user inputs 10 digit number
bool numValidation(double);

int main()
{
    //declares and initiates variables
    double input1 = 0;
    double input2= 0;
    double testFreq = 0;
    bool numVal;
    
    //asks and stores input from user
    cout << "STT Frequency Translator v.2\n\n";
    cout << "Please enter the Translation Frequency in :\n";
    
    //gets input and validates it to be a number in the accpeted range.
    cin  >> input1;
    numVal = numValidation(input1);
    
    //keeps looping until valid freq number is entered
    while (numVal == false){
          cout << "\nThat input is not accepted. \nYour input must be between 99999999 and 999999999. Please try again: \n";
          cin  >> input1;
          numVal = numValidation(input1);
          }
    
    cout << "\nPlease enter the Frequency given by the SCS Operator:\n";
    
    //gets input and validates it to be a number in the accpeted range.
    cin  >> input2;
    numVal = numValidation(input2);
    
    //keeps looping until valid freq number is entered
    while (numVal == false){
          cout << "\nThat input is not accepted. \nYour input must be between 99999999 and 999999999. Please try again: \n";
          cin  >> input2;
          numVal = numValidation(input2);
          }
    //if you don't understand... I dont even...    
    testFreq = input1 - input2;
    
    //ensures output isn't printed in scientific format
    cout << fixed << setprecision(0);
    //outputs to uset
    cout << "\nYour test frequency is: " << testFreq
         << "\nUse this exact number in the test transmit command on you router."<< endl;
    //ends program     
    system("PAUSE");
    return 0;
}

/***********************************************************************
If the freq's aren't between these two numbers, modem wont take it
     so in order for it to work, this funcition checks for valid input.
***********************************************************************/     
bool numValidation(double testNum)
{
     //correct range
     double max = 9999999999.0;           
     double min = 99999999.0;
     
     //test case
     if (testNum < max && testNum > min)
     {
         return true;
     }
     else
     {
         return false;
     }
     
}








