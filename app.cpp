#include <bits/stdc++.h>
using namespace std;
// class Admin
// {
// private:
//     string name;
//     string password;
//     string email;
//     string phone;
//     string address;

// public:
//     void setName(string name)
//     {
//         this->name = name;
//     }
//     void setPassword(string password)
//     {
//         this->password = password;
//     }
//     void setEmail(string email)
//     {
//         this->email = email;
//     }
//     void setPhone(string phone)
//     {
//         this->phone = phone;
//     }
//     void setAddress(string address)
//     {
//         this->address = address;
//     }
//     string getName()
//     {
//         return name;
//     }
//     string getPassword()
//     {
//         return password;
//     }
//     string getEmail()
//     {
//         return email;
//     }
//     string getPhone()
//     {
//         return phone;
//     }
//     string getAddress()
//     {
//         return address;
//     }
//     void addBus(string busName, string busNumber, string busType, string route, string time, string price, string seat, string seatAvailable, string seatBooked, string seatReserved, string seatCancelled, string seatSold, string seatCancelled)
//     {
//         ofstream file;
//         file.open("bus.txt", ios::app);
//         file << busName << " " << busNumber << " " << busType << " " << route << " " << time << " " << price << " " << seat << " " << seatAvailable << " " << seatBooked << " " << seatReserved << " " << seatCancelled << " " << seatSold << " " << seatCancelled << endl;
//         file.close();
//     }
//     void addBusRoute(string routeName, string routeNumber, string routeType, string start, string end, string time, string price, string seat)
//     {
//         ofstream file;
//         file.open("busRoute.txt", ios::app);
//         file << routeName << " " << routeNumber << " " << routeType << " " << start << " " << end << " " << time << " " << price << " " << seat << endl;
//         file.close();
//     }
//     void addBusPath(string busId, string startRoute, string endRoute, string totalStation, string stations, string totalFair)
//     {
//         ofstream file;
//         file.open("busPath.txt", ios::app);
//         file << busId << " " << startRoute << " " << endRoute << " " << totalStation << " " << stations << " " << totalFair << endl;
//         file.close();
//     }
//     void addBusSchedule(string busId, string startTime, string endTime)
//     {
//         ofstream file;
//         file.open("busSchedule.txt", ios::app);
//         file << busId << " " << startTime << " " << endTime << endl;
//         file.close();
//     }

//     void addBusSeatBooking(string busId, string seatNumber, string seatPrice, string seatStatus, string seatBooked, string seatReserved, string seatCancelled, string seatSold, string seatCancelled, string passengerId)
//     {
//         ofstream file;
//         file.open("busSeatBooking.txt", ios::app);
//         file << busId << " " << seatNumber << " " << seatPrice << " " << seatStatus << " " << seatBooked << " " << seatReserved << " " << seatCancelled << " " << seatSold << " " << seatCancelled << " " << passengerId << endl;
//         file.close();
//     }
//     void addUser(string name, string password, string email, string phone, string address)
//     {
//         ofstream file;
//         file.open("user.txt", ios::app);
//         file << name << " " << password << " " << email << " " << phone << " " << address << endl;
//         file.close();
//     }
//     void addPassenger(string name, string password, string email, string phone, string address)
//     {
//         ofstream file;
//         file.open("passenger.txt", ios::app);
//         file << name << " " << password << " " << email << " " << phone << " " << address << endl;
//         file.close();
//     }
//     void addAdmin(string name, string password, string email, string phone, string address)
//     {
//         ofstream file;
//         file.open("admin.txt", ios::app);
//         file << name << " " << password << " " << email << " " << phone << " " << address << endl;
//         file.close();
//     }
// };

class User
{
    string uName;
    string pass;

public:
    int choice;
    string line;
    User()
    {
        cout << "Enter choice:" << endl;
        cout << "1.Register\t\t2.Login" << endl;
        cin >> choice;
    }
    void registration(string uName, string pass)
    {
        ofstream output;
        output.open("user.txt", ios_base::app);
        output << uName << " " << pass << endl;
        output.close();
        cout << "===================================Registration successful======================================" << endl;
    }

    string login(string logName, string logPass)
    {
        ifstream input("user.txt");

        if (!input)
        {
            cout << "Error creating file!";
        }

        while (getline(input, line))
        {
            istringstream iss(line);
            if (iss >> uName >> pass && uName == logName && pass == logPass)
            {
                cout << "==========================================Login successful============================" << endl;
                input.close();
                return uName;
            }
        }
        cout << "Login failed!" << endl;

        input.close();
        return "";
    }

    // test
    //struct busroot
    //{
        //char root_name[MAX_LIMIT];
        //char from[MAX_LIMIT];
        //char to[MAX_LIMIT];
        //char distance[MAX_LIMIT];
    // };

    
};

int main()
{
    string uName, pass;

    User user1;

    cout << "Enter username:" << endl;
    cin >> uName;
    cout << "Enter password:" << endl;
    cin >> pass;

    if (user1.choice == 1)
    {
        user1.registration(uName, pass);
    }
    else if (user1.choice == 2)
    {
        user1.login(uName, pass);
    }
    else
    {
        cout << "No more option";
    }
    return 0;
}
