#include <string>
#include "tree.cpp"

using namespace std;


class human
{
private:
    string name;
    int age;
    string gender;
    string nationality;
    int phoneNumber;
    string address;
    int id;

public:



    human(){
     name = "";
     age = 0;
     gender= "";
     nationality= "";
     phoneNumber = 0;
     address = "";
     id = 0;
    }

    human(string name , int age ,string gender,string nationality,int phoneNumber , string address , int id ){
     this->name = name;
     this->age = age;
     this->gender = gender;
     this->nationality = nationality;
     this->phoneNumber = phoneNumber;
     this->address = address;
     this->id = id;
    }


    string getName() {
    	return this->name;
    }
    void setName(string name) {
    	this->name = name;
    }


    int getAge() {
    	return this->age;
    }
    void setAge(int age) {
    	this->age = age;
    }


    string getGender() {
    	return this->gender;
    }
    void setGender(string gender) {
    	this->gender = gender;
    }


    string getNationality() {
    	return this->nationality;
    }
    void setNationality(string nationality) {
    	this->nationality = nationality;
    }


    int getPhoneNumber() {
    	return this->phoneNumber;
    }
    void setPhoneNumber(int phoneNumber) {
    	this->phoneNumber = phoneNumber;
    }


    string getAddress() {
    	return this->address;
    }
    void setAddress(string address) {
    	this->address = address;
    }


    int getId() {
    	return this->id;
    }
    void setId(int id) {
    	this->id = id;
    }

};

