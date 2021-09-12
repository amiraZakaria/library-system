#include <bits/stdc++.h>
#include "employee.cpp"
#include "book.cpp"

using namespace std;
class manager : public employee
{


private:

    tree bst;
 void pre_insertion(){
    bst.root=bst.insert_node(bst.root,"science");
    bst.root=bst.insert_node(bst.root,"x");
    bst.root=bst.insert_node(bst.root,"a");
    bst.root=bst.insert_node(bst.root,"e");
    bst.root=bst.insert_node(bst.root,"s");
    bst.root=bst.insert_node(bst.root,"i");
    bst.root=bst.insert_node(bst.root,"k");
    bst.root=bst.insert_node(bst.root,"q");
    }

    int maxEmployees=100;
    int* employeesID;   //pointer ,  int id?
    string teamName ;




public:




    manager(){
      employeesID =new int[maxEmployees];
      teamName = "";
      pre_insertion();



    }
    manager(int* employeesID,string teamName){
      this->employeesID = employeesID;
      this->teamName = teamName;
      pre_insertion();





    }

    /////////////////////////////////////

    void view(){
    bst.preOrder(bst.root);

    }




   /* void view_book() {
	// base case we reach a null node

    bst.inOrder(bst.root);

}*/

   void delete_book(){
   cout<<"please enter the book you wanted to delete :";
   string book;
   cin>>book;
   bst.delete_node(bst.root,book);
   }

    void add_book(){
   cout<<"please enter the name of book and price the book :";
   string name;
   cin>>name;
   bst.insert_node(bst.root,name);

   }
   void search_book(){
   cout<<"\nplease enter the name of book  :";
   string name;
   cin>>name;
   if(bst.search(bst.root,name)){
    cout<<"\nthis book is found\n";
   }
   else{
    cout<<"\nthis book NOT found\n";
   }}





    int* getEmployeesID() {
	    return this->employeesID;
    }
    void setEmployeesID(int* employeesID) {
	    this->employeesID = employeesID;
    }
    string getTeamName() {
    	return this->teamName;
    }
    void setTeamName(string teamName) {
    	this->teamName = teamName;
    }


};











