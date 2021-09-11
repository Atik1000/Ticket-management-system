// admin panel reg and login 
// user panel reg and login
// user panel logout
// Hi bro how are you ??

#include <bits/stdc++.h>
using namespace std;

class User{
    private:
    string email;
    string password;
    string user_id;
    ifstream user_file("user.txt");

    public:
    string user_name;

    User(){
        email = "";
        password = "";
        user_id = "";
        user_name = "";
    }
    User(string email, string password){
        this->email = email;
        this->password = password;
    }
    string login(){
        if(email == " " && password == " "){
            cout << "Enter email and password" << endl;
    }
        else if(this->email != NULL && this->password != NULL){
            while(!user_file.eof()){
                getline(user_file, email, ',');
                getline(user_file, password, '\n');
                if(email == this->email && password == this->password){
                    cout << "Login Successful" << endl;
                    return user_id;
                }
            }
            cout << "Login Failed" << endl;
            return "";
    }

};

int main(){
    string email, password;
    cout << "Enter email and password" << endl;
    cin >> email >> password;
    User user(email, password);

    user.login();
    return 0;
}
