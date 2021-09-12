#include <string>
#include "F:\FCI-CB Training\OOP\projects\Library\employee.cpp"
using namespace std;

class department
{
private:
    int maxEmployees=100;
    string name;
    int managerId;
    int* employeesID;



public:

  department(){
    employeesID =new int[maxEmployees];
    name="";
    managerId =0;
  }
   department(string name , int managerId , int* employeesID){
    this->employeesID = employeesID;
    this->name = name;
    this->managerId = managerId;
  }


 ~department();

 int* getEmployeesID() {
 	return this->employeesID;
 }
 void setEmployeesID(int* employeesID) {
 	this->employeesID = employeesID;
 }


  string getName() {
	return this->name;
  }
  void setName(string name) {
	this->name = name;
  }

  int getManagerId() {
  	return this->managerId;
  }
  void setManagerId(int managerId) {
  	this->managerId = managerId;
  }



};

