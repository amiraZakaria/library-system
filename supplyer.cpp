#include <string>
using namespace std;
class supplyer
{
private:
    int maxBooks=100;
    int* bookID;
    int price;

public:
    supplyer (){
        bookID =new int[maxBooks];
        price=0;
    }
    supplyer (int* bookID , int price){
	    this->bookID = bookID;
    	this->price = price;
    }
    ~supplyer ();

    int* getProductID() {
    	return this->bookID;
    }
    void setProductID(int* bookID) {
    	this->bookID = bookID;
    }

    int getPrice() {
    	return this->price;
    }
    void setPrice(int price) {
    	this->price = price;
    }

};
