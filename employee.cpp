#include <string>
#include "human.cpp"
using namespace std;
class employee : public human
{
private:

  string title;
  string email;
  int salary;
  string Experience;
  int managerId;
  int departmentId;

public:
    employee(){
      title="";
      email="";
      salary=0;
      Experience="";
      managerId=0;
      departmentId=0;
    }

    employee(  string title,string email,int salary,string Experience,int managerId,int departmentId){
      this->title = title;
      this->email = email;
      this->salary = salary;
      this->Experience = Experience;
      this->departmentId = departmentId;
      this->managerId = managerId;
    }



  string getTitle() {
  	return this->title;
  }
  void setTitle(string title) {
  	this->title = title;
  }

  string getEmail() {
  	return this->email;
  }
  void setEmail(string email) {
  	this->email = email;
  }

  int getSalary() {
  	return this->salary;
  }
  void setSalary(int salary) {
  	this->salary = salary;
  }

  string getExperience() {
  	return this->Experience;
  }
  void setExperience(string Experience) {
  	this->Experience = Experience;
  }

  int getManagerId() {
  	return this->managerId;
  }
  void setManagerId(int managerId) {
  	this->managerId = managerId;
  }

  int getDepartmentId() {
  	return this->departmentId;
  }
  void setDepartmentId(int departmentId) {
  	this->departmentId = departmentId;
  }
};



