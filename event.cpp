#include <string>
using namespace std;
class event
{
private:

    int maxReaders=100;
    int maxouthors=100;
    int* outhorsID;
    int* readersID;
    int time ;
    string name;

public:
    event(){
        outhorsID =new int[maxouthors];
        readersID =new int[maxReaders];
        time = 0;
        name="";
    }
    event(int outhors[],int reders[],int time ,string name){
    	this->outhorsID = outhorsID;
    	this->readersID = readersID;
    	this->time = time;
    	this->name = name;
    }
    ~event();

    int* getOuthorsID() {
    	return this->outhorsID;
    }
    void setOuthorsID(int* outhorsID) {
    	this->outhorsID = outhorsID;
    }

    int* getReadersID() {
    	return this->readersID;
    }
    void setReadersID(int* readersID) {
    	this->readersID = readersID;
    }

    int getTime() {
    	return this->time;
    }
    void setTime(int time) {
    	this->time = time;
    }

    string getName() {
    	return this->name;
    }
    void setName(string name) {
    	this->name = name;
    }
};

