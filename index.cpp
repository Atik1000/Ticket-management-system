#include<iostream>
#include<bits/stdc++.h>
#include<istream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void admin();
void user();
void admin_login();
void user_login();
void registration(string text, string fileName, void (*login)());
void admin_panel(string username);
void user_panel(string username);

int main() {
    int choice;
    system("cls");
    cout<<"*********************Welcome to Ticket management System*************************\n";
    cout<<"\nDashboard \n\n";
    for(int i=0; i<=84; i++) cout<<"-";
    cout<<"\n\n\t\t\t1. Admin \n";
    cout<<"\t\t\t2. User\n";
    cout<<"\t\t\t3. Choose an option to continue: ";
    cin>>choice;

    switch (choice) {
        case 1:
            admin();
            break;
        case 2:
            user();
            break;
        default:
            cout<<"Invalid choice";
            main();
    }

    return 0;
}

void admin() {
    int choice;
    system("cls");
    cout<<"*********************************Admin Panel*************************************\n";
    cout<<"\nOptions \n\n";
    for(int i=0; i<=84; i++) cout<<"-";
    cout<<"\n\n\t\t\t1. Login \n";
    cout<<"\t\t\t2. Register \n";
    cout<<"\t\t\t3. Go back \n";
    cout<<"\t\t\t4. Choose an option to continue: ";
    cin>>choice;

    switch (choice) {
        case 1:
            admin_login();
            break;
        case 2:
            registration("Admin", "admin.txt", admin_login);
            break;
        case 3:
            main();
            break;
        default:
            cout<<"Invalid choice";
            admin();
    }
}

void user() {
    int choice;
    system("cls");
    cout<<"********************************User Panel************************************\n";
    cout<<"\nOptions \n\n";
    for(int i=0; i<=84; i++) cout<<"-";
    cout<<"\n\n\t\t\t1. Login \n";
    cout<<"\t\t\t2. Register \n";
    cout<<"\t\t\t3. Go back \n";
    cout<<"\t\t\t4. Choose an option to continue: ";
    cin>>choice;

    switch (choice) {
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
            cout<<"Invalid choice";
            user();
    }
}

void admin_login() {
    string username, password, uname, pass;
    int is_exists=0;
    system("cls");
    cout<<"*********************Admin login*************************\n\n";
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    ifstream input("admin.txt");

    while (input>>uname>>pass) {
        if(uname == username && pass == password) {
            is_exists = 1;
        }
    }
    input.close();

    if (is_exists) {
        admin_panel(username);
    } else {
        cout<<"Invalid credentials. Try again !\n";
        cout<<"Press enter to continue\n";
        cin.get();
        cin.get();
        admin_login();
    }
}

void user_login() {
    string username, password, uname, pass;
    int is_exists=0;
    system("cls");
    cout<<"*********************User login*************************\n\n";
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    ifstream input("users.txt");

    while (input>>uname>>pass) {
        if(uname == username && pass == password) {
            is_exists = 1;
        }
    }
    input.close();

    if (is_exists) {
        user_panel(username);
    } else {
        cout<<"Invalid credentials. Try again !\n";
        cout<<"Press enter to continue\n";
        cin.get();
        cin.get();
        user_login();
    }
}

void registration(string text, string fileName, void (*login)()) {
    string username, password;
    system("cls");
    cout<<"********************************"<< text << " " << "Panel************************************\n";
    cout<<"\nChoose a username and password combination \n\n";
    for(int i=0; i<=84; i++) cout<<"-";
    cout<<"\n\n\t\t\tEnter username: ";
    cin>>username;
    cout<<"\t\t\tEnter password: ";
    cin>>password;

    ofstream reg(fileName, ios::app);
    reg<<username<<" "<<password<<endl;
    reg.close();
    system("cls");
    cout<<"********************************"<< text << " " << "Panel************************************\n";
    cout<<"\nRegistration Successfull\n";
    cout<<"Press enter to login";
    cin.get();
    cin.get();
    (*login)();
}

void admin_panel(string username) {
    int choice;
    system("cls");
    cout<<"*********************Admin panel*************************\n\n";
    cout << "Welcome to the admin portal " << username << ".\n";
    cout << "Options-> \n";
    cout<<"\t1. Category\n";
    cout<<"\t2. Bus Route \n";
    cout<<"\t3. Bus path \n";
    cout<<"\t4. User \n";
    cout << "\t5. Bus Schedule \n";
    cout << "\t6. Bus Seat booking \n";
    cout << "\t7. logout \n";
    cout << "\t8. Choose an option to continue: ";
    cin>>choice;

    switch (choice) {
    case 1:
        cout<<"Coming soon :)";
        break;
    case 2:
        cout<<"Coming soon :)";
        break;
    case 3:
        cout<<"Coming soon :)";
        break;
    case 4:
        cout<<"Coming soon :)";
        break;
    case 5:
        cout<<"Coming soon :)";
        break;
    case 6:
        cout<<"Coming soon :)";
        break;
    case 7:
        main();
        break;
    default:
        cout<<"Invalid choice";
        admin_panel(username);
    }
}

void user_panel(string username) {
    int choice;
    system("cls");
    cout<<"*********************User panel*************************\n\n";
    cout << "Welcome to the user " << username << ".\n";
    cout << "Options-> \n";
    cout<<"\t1. Bus searching \n";
    cout<<"\t2. Bus booking \n";
    cout<<"\t3. Logout \n";
    cout<<"\t9. Choose an option to continue: ";
    cin>>choice;

    switch (choice) {
    case 1:
        cout<<"Coming soon :)";
        break;
    case 2:
        cout<<"Coming soon :)";
        break;
    case 3:
        main();
        break;
    default:
        cout<<"Invalid choice";
        user_panel(username);
    }
}
