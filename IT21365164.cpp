// IT21365164 - N.A.S.L.Dissanayake

#include <iostream>
#include <string>
#define SIZE1  10
#define SIZE2  5
#define SIZE3  100
#define SIZE4  7

using namespace std;

class Payment {
private:
    string TransactionID;
    string CustomerID;
    string OrderID;
    float Subtotal;
    string PaymentMethod;
    string PaymentDetails;
    string PaymentDate;
    string Status;
public:
    Payment();
    Payment( string TransactionID, string CustomerID, string OrderID,
             float Subtotal, string PaymentMethod, string PaymentDetails,
             string PaymentDate, string Status);
    void SelectPaymentMethod();
    void UpdatePaymentDetails();
    ~Payment();
};

class ShippingInfo {
private:
    string ShippingID;
    string ShippingMethod;
    float ShippingCost;
    string ShippingAddress;
public:
    ShippingInfo();
    ShippingInfo( string ShippingID, string ShippingMethod, 
                  float ShippingCost, string ShippingAddress);
    void SelectShippingMethod();
    float CalcShippingCost();
    void UpdateShippingDetails();
    ~ShippingInfo();
};