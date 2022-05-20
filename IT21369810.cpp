//IT21369810 - Wickramaarachchi J.C.

#include <iostream>
#include <string>
#define SIZE1  10
#define SIZE2  5
#define SIZE3  100
#define SIZE4  7

using namespace std;

class Customer : public User {
private:
    string CustomerID;
    string Email;
    string Address;
    int PhoneN;
    string Gender;
    string ShoppingInfo;
    string PaymentInfo;
    ShoppingCart* cart;
    Order* order[SIZE4];

public:
    Customer();
    Customer( string pUsername, string pPassword, string pLoginStatus,
              string pRegisterDate, string pCustomerID, string pEmail,
              string pAddress, int pPhoneN, string pGender, string pShoppingInfo,
              string pPaymentInfo);
    void UpdateProfileDetails();
    ~Customer();
};

class ShoppingCart {
private:
    string CartID;
    string ProducID[SIZE1];
    string ProductName[SIZE1];
    int Quantity[SIZE1];
    Customer* cus2;
public:
    ShoppingCart();
    ShoppingCart( string CartID, string ProducID[], string ProductName[], 
                  int Quantity[]);
    void ViewCartItems();
    void AddProducts();
    void UpdateQuantity();
    void RemoveProducts();
    ~ShoppingCart();

};