#include <string>
using namespace std;
class room
{
private:
    int maxReaders=100;
    int chairsNo;
    int* readersID;
    int tablesNo;

public:

    room(){
        chairsNo=0;
        readersID =new int[maxReaders];
        tablesNo =0;
    }
    room( int chairsNo , int* readersID , int tablesNo){
    	this->chairsNo = chairsNo;
    	this->tablesNo = tablesNo;
    	this->readersID = readersID;
    }
    ~room();

    int getChairsNo() {
    	return this->chairsNo;
    }
    void setChairsNo(int chairsNo) {
    	this->chairsNo = chairsNo;
    }


    int* getReadersID() {
    	return this->readersID;
    }
    void setReadersID(int* readersID) {
    	this->readersID = readersID;
    }


    int getTablesNo() {
    	return this->tablesNo;
    }
    void setTablesNo(int tablesNo) {
    	this->tablesNo = tablesNo;
    }
};

