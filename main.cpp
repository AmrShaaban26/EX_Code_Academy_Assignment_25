#include <iostream>

using namespace std;

int main()
{
    // creating an integer variable age
    int age;
    // taking its value from the user
    cout << "Please input your age: ";
    cin >> age;
    // wrapping the safety check
    try
    {
        // entering -1 for task 2
        if (age == -1)
        {
            throw 'X';
        }
        //entering -2 for task 2
        else if (age == -2)
        {
            throw 9.99;
        }
        /*
        this is  the print out due to not having the matching handler for double:
        "Please input your age: -2
        terminate called after throwing an instance of 'double' "
        */
        // adding a safety check for task 1
        else if (age < 0)
        {
            throw "Age cannot be nagative!\n";
        }
        // entering a 0 for task 2
        else if (age == 0)
        {
            throw 404 ;
        }
        
        else
        {
            throw "Age is correct!\n";
        }
    }
    
    // string interceptor block
    catch (const char* checkagefailure)
    {
        // printing the error message safely to the screen
        cout << checkagefailure;
    }
    //character interceptor block
    
    catch(const char checkagefailure1)
    {
        // printing the error message safely to the screen
        cout << checkagefailure1;
    }
    // // universal handler for unhandled exception type before integer handler
    // catch(...)
    // {
    //     cout << "Unknown exception caught!!!" << endl;
    // }
    /*
    The result of having the universal catcher before the integer catcher is an error as follows:
    "Starting build...
        cmd /c chcp 65001>nul && c:\Users\eg12050\Desktop\mingw64\bin\g++.exe -fdiagnostics-color=always -g "C:\Users\eg12050\Desktop\Assignment 25\main.cpp" -o "C:\Users\eg12050\Desktop\Assignment 25\main.exe"
        C:\Users\eg12050\Desktop\Assignment 25\main.cpp: In function 'int main()':
        C:\Users\eg12050\Desktop\Assignment 25\main.cpp:62:5: error: '...' handler must be the last handler for its try block [-fpermissive]
        62 |     catch(...)
            |     ^~~~~

        Build finished with error(s).

        *  The terminal process failed to launch (exit code: -1). 
        *  Terminal will be reused by tasks, press any key to close it. 
        "
    */
    // integer interceptor block
    catch (int checkagefailure2)
    {
        // printing the error message safely to the screen
        cout << checkagefailure2;
    }
    // universal handler for unhandled exception type in its original position
    catch(...)
    {
        cout << "Unknown exception caught!!!" << endl;
    }
    // final print statement
    cout << endl;
    cout << "App finished safely.\n";
}