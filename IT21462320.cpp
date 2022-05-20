//IT21462320 - Perera K.R.M.

#include <iostream>
#include <string>
#define SIZE1  10
#define SIZE2  5
#define SIZE3  100
#define SIZE4  7

using namespace std;

class User {
protected:
    string Username;
    string Password;
    string LoginStatus;
    string RegisterDate;

public:
    User();
    User( string pUsername, string pPassword, string pLoginStatus,
          string pRegisterDate);
    void AddUser();
    void DeleteUser();
    void VerifyLogin();
    void ViewUser();
    void ResetPassword();
    ~User();
};

class Administrator : public User {
private:
    string EmployeeID;
    string Email;
public:
    Administrator();
    Administrator( string pUsername, string pPassword, string pLoginStatus,
                   string pRegisterDate, string EmployeeID, string Email);
    void UpdateAdminDetails();
    void AddAdminDetails();
    ~Administrator();

};

int main() {

    Customer* c1 = new Customer();
    Administrator* a1 = new Administrator();
    Seller* s1 = new Seller();
    Product* item1 = new Product();
    Order* order1 = new Order();
    ShoppingCart* SC1 = new ShoppingCart();




    delete c1;
    delete a1;
    delete s1;
    delete item1;
    delete order1;
    delete SC1;

    return 0;
}