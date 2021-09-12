#include <string>
using namespace std;
class borrowing
{
private:
  int reader_id;
  int time;
  int price;
  int time_of_reurn;

public:

    borrowing(){
        reader_id=0;
        time=0;
        price=0;
        time_of_reurn=0;

}
    borrowing(int reader_id, int time,int price,int time_of_reurn){
        this->time = time;
   	    this->reader_id = reader_id;
        this->price = price;
        this->time_of_reurn = time_of_reurn;
    }

    ~borrowing();

   int getReader_id() {
   	return this->reader_id;
   }
   void setReader_id(int reader_id) {
   	this->reader_id = reader_id;
   }

  int getTime() {
  	return this->time;
  }
  void setTime(int time) {
  	this->time = time;
  }

  int getPrice() {
  	return this->price;
  }
  void setPrice(int price) {
  	this->price = price;
  }

  int getTime_of_reurn() {
  	return this->time_of_reurn;
  }
  void setTime_of_reurn(int time_of_reurn) {
  	this->time_of_reurn = time_of_reurn;
  }

};

