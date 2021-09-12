#include <string>
using namespace std;
class book
{
private:

    string title;
    int id;
    string auther ;
    string supplers;
    int price;

public:
    book(){
        title ="";
        id=0;
       auther ="";
       supplers="";
       price=0;
    }
    book(string title,int id,string auther,string supplers ,int price){
    	this->title = title;
    	this->id = id;
    	this->auther = auther;
    	this->supplers = supplers;
    	this->price = price;
    }

    ~book();

    string getTitle() {
    	return this->title;
    }
    void setTitle(string title) {
    	this->title = title;
    }


    int getId() {
    	return this->id;
    }
    void setId(int id) {
    	this->id = id;
    }


    string getAuther() {
    	return this->auther;
    }
    void setAuther(string auther) {
    	this->auther = auther;
    }


    string getSupplers() {
    	return this->supplers;
    }
    void setSupplers(string supplers) {
    	this->supplers = supplers;
    }


    int getPrice() {
    	return this->price;
    }
    void setPrice(int price) {
    	this->price = price;
    }


};
