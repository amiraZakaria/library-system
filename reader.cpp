#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class reader : public tree
{

// Initialize a global pointer for root

private:



    int bookId;

public:
    tree books;

    reader(){
       bookId=0;



    }

    reader(int bookId){
    	this->bookId = bookId;
    }


    int getBookId() {
    	return this->bookId;
    }

    void setBookId(int bookId) {
    	this->bookId = bookId;
    }

    ///////////////////////////////////////////////////

    void view_book() {
        books.inOrder(books.root);

}



   void delete_book(){
   cout<<"please enter the book you wanted to delete :";
   string book;
   cin>>book;
   delete_node(books.root,book);
   }

    void add_book(){
   cout<<"please enter the name of book you wanted :";
   string name;
   cin>>name;
   books.root = books.insert_node(books.root,name);
   }

   void search_book(){
   cout<<"please enter the name of book  :";
   string book;
   cin>>book;
   if(books.search(books.root,book)){
    cout<<"\nthis book is found\n";
   }
   else{
    cout<<"\nthis book NOT found\n";
   }}

};
