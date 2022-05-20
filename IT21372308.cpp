//IT21372308 - Dissanayake W.P.D.B.

#include <iostream>
#include <string>
#define SIZE1  10
#define SIZE2  5
#define SIZE3  100
#define SIZE4  7

using namespace std;

class Seller : public User {
private:
    string SellerID;
    string Email;
    string ShopName;
    int PhoneNo;
    string Gender;
    Product* item[SIZE4];

public:
    Seller();
    Seller( string pUsername, string pPassword, string pLoginStatus,
            string pRegisterDate, string SellerID, string Email, string ShopName,
            int PhoneNo, string Gender);
    void UpdateProfileDetails();
    ~Seller();

};

class Product {
private:
    string ProductID;
    string ProductName;
    string SellerID;
    float Price;
    float Discount;
    string Description;
    Seller* s01;

public:
    Product();
    Product( string ProductID, string ProductName, string SellerID,
             float Price, float Discount, string Description);
    void AddProducts();
    void DeleteProducts();
    void EditProductDetails();
    void SearchProducts();
    ~Product();
};