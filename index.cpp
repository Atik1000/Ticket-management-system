#include <bits/stdc++.h>
#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#define ROWV 4
#define MAX_LIMIT 100
#define COLMNV 10
using namespace std;

void admin();
void user();
void admin_login();
void user_login();
void registration(string text, string fileName, void (*login)());
void admin_panel(string username);
void user_panel(string username);
void busAdd();
void busRootAdd();
void busRootView();
string header = "********************************************************";

int main()
{
    int choice;
    cout << "*********************Welcome to Ticket management System*************************\n";
    cout << "\nDashboard \n\n";
    for (int i = 0; i <= 84; i++)
        cout << "-";
    cout << "\n\n\t\t\t1. Admin \n";
    cout << "\t\t\t2. User\n";
    cout << "\t\t\t3. Choose an option to continue: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        admin();
        break;
    case 2:
        user();
        break;
    default:
        cout << "Invalid choice";
        main();
    }

    return 0;
}

void admin()
{
    int choice;
    cout << "*********************************Admin Panel*************************************\n";
    cout << "\nOptions \n\n";
    for (int i = 0; i <= 84; i++)
        cout << "-";
    cout << "\n\n\t\t\t1. Login \n";
    // cout << "\t\t\t2. Register \n";
    cout << "\t\t\t2. Go back \n";
    cout << "\t\t\t3. Choose an option to continue: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        admin_login();
        break;
    // case 2:
    //     registration("Admin", "admin.txt", admin_login);
    //     break;
    case 2:
        main();
        break;
    default:
        cout << "Invalid choice";
        admin();
    }
}

void user()
{
    int choice;
    cout << "********************************User Panel************************************\n";
    cout << "\nOptions \n\n";
    for (int i = 0; i <= 84; i++)
        cout << "-";
    cout << "\n\n\t\t\t1. Login \n";
    cout << "\t\t\t2. Register \n";
    cout << "\t\t\t3. Go back \n";
    cout << "\t\t\t4. Choose an option to continue: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        user_login();
        break;
    case 2:
        registration("User", "users.txt", user_login);
        break;
    case 3:
        main();
        break;
    default:
        cout << "Invalid choice";
        user();
    }
}

void admin_login()
{
    string username, password, uname, pass;
    int is_exists = 0;
    cout << "*********************Admin login*************************\n\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream input("admin.txt");

    while (input >> uname >> pass)
    {
        if (uname == username && pass == password)
        {
            is_exists = 1;
        }
    }
    input.close();

    if (is_exists)
    {
        admin_panel(username);
    }
    else
    {
        cout << "Invalid credentials. Try again !\n";
        cout << "Press enter to continue\n";
        cin.get();
        cin.get();
        admin_login();
    }
}

void user_login()
{
    string username, password, uname, pass;
    int is_exists = 0;
    cout << "*********************User login*************************\n\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream input("users.txt");

    while (input >> uname >> pass)
    {
        if (uname == username && pass == password)
        {
            is_exists = 1;
        }
    }
    input.close();

    if (is_exists)
    {
        user_panel(username);
    }
    else
    {
        cout << "Invalid credentials. Try again !\n";
        cout << "Press enter to continue\n";
        cin.get();
        cin.get();
        user_login();
    }
}

void registration(string text, string fileName, void (*login)())
{
    string username, password, email,f_name,l_name,phone;
    cout << "********************************" << text << " "
         << "Panel************************************\n";
    cout << "\nChoose a username and password combination \n\n";
    for (int i = 0; i <= 84; i++)
        cout << "-";

    cout << "\n\n\t\t\tEnter username: ";
    cin >> username;
    cout << "\t\t\tEnter Email: ";
    cin >> email;
    cout << "\t\t\tEnter First Name: ";
    cin >> f_name;
    cout << "\t\t\tEnter Last Name: ";
    cin >> l_name;
    cout << "\t\t\tEnter password: ";
    cin >> password;
    ofstream reg(fileName, ios::app);
    reg << username << " " << password << " " << email << endl;
    reg.close();
    cout << "********************************" << text << " "
         << "Panel************************************\n";
    cout << "\nRegistration Successfull\n";
    cout << "Press enter to login";
    cin.get();
    cin.get();
    (*login)();
}

void admin_panel(string username)
{
    int choice;
    cout << "*********************Admin panel*************************\n\n";
    cout << "Welcome to the admin portal " << username << ".\n";
    cout << "Options-> \n";
    cout << "\t1. Add Bus Route \n";
    cout << "\t2. View Bus Route \n";
    cout << "\t3. Add Bus\n";
    cout << "\t4. Register User \n";
    cout << "\t5. Bus Schedule \n";
    cout << "\t6. Bus Seat booking \n";
    cout << "\t7. logout \n";
    cout << "\t8. Choose an option to continue: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        busRootAdd();
        break;
    case 2:
        busRootView();
        break;
    case 3:
        busAdd();
        break;
    case 4:
        registration("Admin", "admin.txt", admin_login);
        break;
    case 5:
        cout << "Coming soon :)";
        break;
    case 6:
        cout << "Coming soon :)";
        break;
    case 7:
        main();
        break;
    default:
        cout << "Invalid choice";
        admin_panel(username);
    }
}

void user_panel(string username)
{
    int choice;
    cout << "*********************User panel*************************\n\n";
    cout << "Welcome to the user " << username << ".\n";
    cout << "Options-> \n";
    cout << "\t1. Bus searching \n";
    cout << "\t2. Bus booking \n";
    cout << "\t3. Logout \n";
    cout << "\t9. Choose an option to continue: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Coming soon :)";
        break;
    case 2:
        cout << "Coming soon :)";
        break;
    case 3:
        main();
        break;
    default:
        cout << "Invalid choice";
        user_panel(username);
    }
}

void busRootAdd()
{
    ofstream rootFile("root.txt", ios::app);
    string root_name, from, to, distance;
    cout << header << endl;
    cout << "Welcome Bus root Add Form" << endl;
    cout << header << endl;
    cout << "  " << endl;
    cout << "Enter Root Name: " << endl;
    cin >> root_name;
    cout << "Enter Root From: " << endl;
    cin >> from;
    cout << "Enter Root To: " << endl;
    cin >> to;
    cout << "Enter Root Distance: " << endl;
    cin >> distance;
    rootFile << root_name << " " << from << " " << to << " " << distance << "\n";

    rootFile.close();

    cout << header << endl;
    cout << "Root Name %s's  Data Saved Successfully !!" << endl
         << root_name << endl;
    cout << header << endl;
}

void busRootView()
{
    ifstream rootFile("root.txt");
    char ch;
    string root_name, from, to, distance;
    if (!rootFile)
    {
        cout << "Data File Not Found !" << endl;
        exit(1);
    }
    cout << "---------------------------------------------------------------------------------------------" << endl;

    while (rootFile >> root_name >> from >> to >> distance)
    {
        if (rootFile >> root_name >> from >> to >> distance)
        {
            cout << "\t\t Name = " << root_name << " \t| From = " << from << " \t| To = " << to
                 << "  \t| Distance = " << distance << endl;
        }
    }
    rootFile.close();
    cout << "\t---------------------------------------------------------------------------------------------" << endl;
}

void busAdd()
{
    ofstream busFile("busdata.txt", ios::app);
    string uRoot_name, root_name, bus_name, from, to, distance;
    int found = 0, total_seat;
    cout << "\t \t **************Welcome Bus Data Add Form****************" << endl;
    cout << "\t \t" << header << endl;
    cout << "\t Enter Root Name: ";
    cin >> uRoot_name;
    ifstream rootFile("root.txt");
    if (!rootFile)
    {
        printf("Error!");
        exit(1);
    }

    while (rootFile >> root_name >> from >> to >> distance)
        if (root_name == uRoot_name)
            found = 1;
    if (found)
    {

        cout << "\t Enter Bus Name: ";
        cin >> bus_name;

        total_seat = ROWV * COLMNV;
        cout << "\t  Bus Total Seat: " << total_seat << endl;

        if (!busFile)
        {
            cout << "Error!";
            exit(1);
        }
        busFile << bus_name << root_name << total_seat << endl;
        busFile.close();
        cout << "\t \t " << header << endl;
        cout << "\t \t \t Bus Name " << bus_name << "'s  Data Saved Successfully !!" << endl;
        cout << "\t \t " << header << endl;
    }
    else
    {
        cout << "\t \t" << header << endl;
        cout << "\t \t \t This Root Data Not Found !!" << endl;
        cout << "\t \t" << header << endl;
    }
}
