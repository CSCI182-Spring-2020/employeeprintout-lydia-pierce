/// <summary>
/// CSCI 182 - Assignment 1
/// EmployeePrintout.cpp
/// Store employee information using a struct, access the information and print to the screen
/// 
/// 
/// Lydia Pierce
/// v1.0 2/7/2020
/// </summary>

#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// enum type for the employee's position
/// </summary>
enum EMPLOYEE_TYPE { MANAGER, EMPLOYEE, VOLUNTEER };

/// <summary>
/// Converts the enum type to the corresponding string
/// </summary>
/// <param name="type"></param>
/// <returns></returns>
string EMPLOYEEToStr(EMPLOYEE_TYPE type)
{
    switch (type)
    {
    case MANAGER: return "Manager";
    case EMPLOYEE: return "Employee";
    case VOLUNTEER: return "Volunteer";
    default: return "Umemployed";
    };
};


/// <summary>
/// A struct for the employee's address
/// </summary>
struct Address
{
    string City;
    string State;
};

/// <summary>
/// A struct for the employee's general information. Calls to the struct for the employee's address.
/// </summary>
struct Employee
{
    string Name;
    int DivisionNo;
    Address address;   // See how this is nested?
    EMPLOYEE_TYPE position;
} employeeinfo;


int main()
{
    // Access each variable through the struct and input the employee's information into the variables.
    employeeinfo.Name = "Bob Smith";
    employeeinfo.DivisionNo = 36;
    employeeinfo.address.City = "St. Louis";
    employeeinfo.address.State = "MO";
    employeeinfo.position = MANAGER;

    // Pretty print the employee's information to the screen
    cout << "Position: " << EMPLOYEEToStr(employeeinfo.position) << "\nName: " << employeeinfo.Name << "\nDivision Number: " << employeeinfo.DivisionNo
        << "\nAddress: " << employeeinfo.address.City << ", " << employeeinfo.address.State << "\n";
    return 0;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
