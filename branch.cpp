#include <string>
using namespace std;
#include "F:\FCI-CB Training\OOP\projects\Library\department.cpp"
#include "F:\FCI-CB Training\OOP\projects\Library\employee.cpp"
#include "F:\FCI-CB Training\OOP\projects\Library\manager.cpp"


class branch
{
private:
  int maxEmployees=100;
  int maxdepartments=10;
  int maxmanagers=10;
  string location;
  int area;
  int* departmentsID;
  int* employeesID;
  int* managersID;

public:

    branch(){
    employeesID =new int[maxEmployees];
    departmentsID =new int[maxdepartments];
    managersID =new int[maxmanagers];
    location="";
    area=0;
    }
    branch(string location, int* departmentsID, int area ,int* employeesID,int* managersID){
    this->employeesID = employeesID;
    this->departmentsID = departmentsID;
    this->managersID = managersID;
    this->location = location;
    this->area = area;
    }
    ~branch();

  int* getDepartmentsID() {
  	return this->departmentsID;
  }
  void setDepartmentsID(int* departmentsID) {
  	this->departmentsID = departmentsID;
  }

  int* getEmployeesID() {
  	return this->employeesID;
  }
  void setEmployeesID(int* employeesID) {
  	this->employeesID = employeesID;
  }

  int* getManagersID() {
  	return this->managersID;
  }
  void setManagersID(int* managersID) {
  	this->managersID = managersID;
  }

  string getLocation() {
  	return this->location;
  }
  void setLocation(string location) {
  	this->location = location;
  }

  int getArea() {
  	return this->area;
  }
  void setArea(int area) {
  	this->area = area;
  }

};


