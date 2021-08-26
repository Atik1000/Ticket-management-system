
// 1.Admin feature:

//     1.1.User module :Admin login/reg and user management

//     1.2.Category module: Admin can add/delete/modify category
//     AC/non Ac/chair 
//     1.3.Bus Type module:Local/Direct/Express
//     1.4.Bus module: Name,Number,Type,Route,Time,Price,Seat,Seat Available,Seat Booked,Seat Reserved,Seat Cancelled,Seat Sold,Seat Cancelled

//     1.5.Bus Route module:
//         1.5.1.Route Name
//         1.5.2.Route Number
//         1.5.3.Route Type
//         1.5.4.Route Start
//         1.5.5.Route End
//         1.5.6.Route Time
//         1.5.7.Route Price
//         1.5.8.Route Seat

//     1.6.Bus path module:
//         1.6.1.Bus id
//         1.6.2.start route
//         1.6.3.end route
//         1.6.4.total station
//         1.6.5.stations
//         1.6.6.Total fair


//     1.7.Bus Schedule module:
//         1.7.1.Bus id
//         1.7.2.start time
//         1.7.3.end time

//     1.8.Bus Seat booking module:
//         1.8.1.Bus id
//         1.8.2.Seat Number
//         1.8.3.Seat Price
//         1.8.4.Seat Status
//         1.8.5.Seat Booked
//         1.8.6.Seat Reserved
//         1.8.7.Seat Cancelled
//         1.8.8.Seat Sold
//         1.8.9.Passenger id


// 2.User feature:
//     2.1.User registration:

//         2.1.1.Reg/login


//     2.1.Bus searching module:
//         2.1.1.Bus Name
//         2.1.2.Bus Number
//         2.1.3.Route Search
//         2.1.4.Schedule Search
    
//     2.2.Bus booking module:
//         2.2.1.Bus Name
//         2.2.2.Bus Number
//         2.2.3.Seat Number
//         2.2.4.Seat Price
//         2.2.5.Seat Status
//         2.2.6.Path


#include<bits/stdc++.h>
using namespace std;
class Admin{
    private:
        string name;
        string password;
        string email;
        string phone;
        string address;
    public:
        void setName(string name){
            this->name = name;
        }
        void setPassword(string password){
            this->password = password;
        }
        void setEmail(string email){
            this->email = email;
        }
        void setPhone(string phone){
            this->phone = phone;
        }
        void setAddress(string address){
            this->address = address;
        }
        string getName(){
            return name;
        }
        string getPassword(){
            return password;
        }
        string getEmail(){
            return email;
        }
        string getPhone(){
            return phone;
        }
        string getAddress(){
            return address;
        }
        void addBus(string busName,string busNumber,string busType,string route,string time,string price,string seat,string seatAvailable,string seatBooked,string seatReserved,string seatCancelled,string seatSold,string seatCancelled){
            ofstream file;
            file.open("bus.txt",ios::app);
            file<<busName<<" "<<busNumber<<" "<<busType<<" "<<route<<" "<<time<<" "<<price<<" "<<seat<<" "<<seatAvailable<<" "<<seatBooked<<" "<<seatReserved<<" "<<seatCancelled<<" "<<seatSold<<" "<<seatCancelled<<endl;
            file.close();
        }
        void addBusRoute(string routeName,string routeNumber,string routeType,string start,string end,string time,string price,string seat){
            ofstream file;
            file.open("busRoute.txt",ios::app);
            file<<routeName<<" "<<routeNumber<<" "<<routeType<<" "<<start<<" "<<end<<" "<<time<<" "<<price<<" "<<seat<<endl;
            file.close();
        }
        void addBusPath(string busId,string startRoute,string endRoute,string totalStation,string stations,string totalFair){
            ofstream file;
            file.open("busPath.txt",ios::app);
            file<<busId<<" "<<startRoute<<" "<<endRoute<<" "<<totalStation<<" "<<stations<<" "<<totalFair<<endl;
            file.close();
        }
        void addBusSchedule(string busId,string startTime,string endTime){
            ofstream file;
            file.open("busSchedule.txt",ios::app);
            file<<busId<<" "<<startTime<<" "<<endTime<<endl;
            file.close();
        }

        void addBusSeatBooking(string busId,string seatNumber,string seatPrice,string seatStatus,string seatBooked,string seatReserved,string seatCancelled,string seatSold,string seatCancelled,string passengerId){
            ofstream file;
            file.open("busSeatBooking.txt",ios::app);
            file<<busId<<" "<<seatNumber<<" "<<seatPrice<<" "<<seatStatus<<" "<<seatBooked<<" "<<seatReserved<<" "<<seatCancelled<<" "<<seatSold<<" "<<seatCancelled<<" "<<passengerId<<endl;
            file.close();
        }
        void addUser(string name,string password,string email,string phone,string address){
            ofstream file;
            file.open("user.txt",ios::app);
            file<<name<<" "<<password<<" "<<email<<" "<<phone<<" "<<address<<endl;
            file.close();
        }
        void addPassenger(string name,string password,string email,string phone,string address){
            ofstream file;
            file.open("passenger.txt",ios::app);
            file<<name<<" "<<password<<" "<<email<<" "<<phone<<" "<<address<<endl;
            file.close();
        }
        void addAdmin(string name,string password,string email,string phone,string address){
            ofstream file;
            file.open("admin.txt",ios::app);
            file<<name<<" "<<password<<" "<<email<<" "<<phone<<" "<<address<<endl;
            file.close();
        }
        
};
