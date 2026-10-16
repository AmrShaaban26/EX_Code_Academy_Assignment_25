#include <iostream>
#include <stdexcept> // for the 2nd catch block to work

using namespace std;

int main()
{
    // simple program to enter the smart device operaion mode as a charachter
    char OperationMode;
    cout << "Please enter the Operation mode\n";
    cout << "choose ('A' - 'B' - 'C'):";
    cin >> OperationMode;
    //monitored block
    try
    {
        switch(OperationMode)
        {
            case 'A':
            cout << "Operation mode A is selected.\n";
            break;
            case 'B':
            cout << "Operation mode B is selected.\n";
            break;
            case 'C':
            cout << "OPeration mode C is selected.\n";
            default:
            //throw "Invalid Operation Code!\n"; //this statment is to be used with the 1st catch block
            throw runtime_error("Critical Error: invalid charachter entered");//this statment is to be used with the 2nd catch block
        }
    }
    // // matching handler block for the error caught
    // catch(const char* Error) //1st catch block
    // {
    //     cout << Error << endl;
    // }
    // here is what got printed out on removing the try monitoring block and catch
    // handling block
    //Please enter the Operation mode
    // choose ('A' - 'B' - 'C'):f
    // terminate called after throwing an instance of 'char const*'
    catch (const exception& e) //2nd catch block
    {
        cout << "There is an exception caught: " << e.what() << endl;
    }
}