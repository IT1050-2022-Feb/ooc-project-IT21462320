#include <iostream>
#include <string>
#define SIZE1  10
#define SIZE2  5
#define SIZE3  100
#define SIZE4  7

using namespace std;

class Order {
private:
    string OrderID;
    string CustomerID;
    string DateCreated;
    string DateShipped;
    string Status;
    string ShippingID;
    Customer* cus1;
    Payment* pay1;
    ShippingInfo* shipinfo1;
    OrderDetails* orderinfo1;
public:
    Order();
    Order( string OrderID, string CustomerID, string DateCreated,
           string DateShipped, string Status,
           string ShippingID, Customer* pCus);
    void PlaceOrder();
    void CheckStatus();
    ~Order();

};

class OrderDetails {
private:
    string OrderID;
    string ProductID[SIZE2];
    string ProductName[SIZE2];
    int Quantity[SIZE2];
    float UnitCost[SIZE2];
    float TotalDiscount;
    float TotalTax;
    float SubTotal;
public:
    OrderDetails();
    OrderDetails( string OrderID, string ProductID[], string ProductName[],
                  int Quantity[], float UnitCost[], float TotalDiscount,
                  float TotalTax, float SubTotal);
    float CalcTotal();
    float CalcTotalDiscount();
    float CalcTotalTax();
    float CalcSubTotal();
    ~OrderDetails();
};