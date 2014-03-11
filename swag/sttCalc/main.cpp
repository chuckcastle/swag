/************************
Super simple yet cleaned up version of the swaggregator.
As you can see it simply asks for input and subtracts them.
*************************/
#include <cstdlib>
#include <iostream>


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
    cout << "Please enter the Translation Frequency in :\n";
    cin  >> input1;
    
    numVal = numValidation(input1);
    
     
    
    cout << "\nPlease enter the Frequency given by the SCS Operator:\n";
    cin  >> input2;
    testFreq = input1 - input2;
    
    cout << "\nYour test frequency is: " << testFreq
         << "\nUse this exact number in the test transmit command on you router."<< endl;
    system("PAUSE");
    return 0;
}

bool numValidation(double testNum)
{
     double max = 9999999999.0;
                 
     double min = 99999999.0;
     
     if (testNum < max && testNum > min)
     {
         return true;
     }
     else
     {
         return false;
     }
     
}







