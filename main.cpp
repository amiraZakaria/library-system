#include <iostream>
#pragma once
/*#ifndef tree.h
#define tree.h

#include "manager.cpp"
#include "reader.cpp"

#endif*/
#include "manager.cpp"
#include "reader.cpp"
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void adminmenu();
void customermenu();

void mainmenu(){
    cout << "**************************************************************************\n" << endl;
    cout << "                    WELCOME TO RESTAURANT MANAGEMENT SYSTEM\n           \n" << endl;
    cout << "**************************************************************************\n" << endl;
    cout << "\nADMIN SECTION-->1";
    cout << "\nREADER SECTION-->2";
    cout << "\nEXIT-->3\n";
    int num;
    cin>>num;
    manager y;

    if(num==1){
        adminmenu();
        //y.view();



    }
    else if(num==2){
            customermenu();

    }
    else{
        exit(0);
    }



}
void adminmenu(){
    manager amira ;

    while(1){
    cout << "**************************************************************************\n" << endl;
    cout << "                    WELCOME TO ADMIN SECTION \n           \n" << endl;
    cout << "**************************************************************************\n" << endl;
    cout<<"\n1.view all books";
    cout<<"\n2.Delete book from library ";
    cout<<"\n3.add book to library"; // from num to num
    cout<<"\n4.search for book";  // num line + text
    cout<<"\n5.Back to main menu";  //copy paste

    cout<<"\n\nEnter your choice..";

        int choice;
        cin>>choice;

        switch(choice){
      case 1:
           amira.view();

        break;
      case 2:
          amira.delete_book();
        break;
      case 3:
          amira.add_book();
        break;
      case 4:
         amira.search_book();
         break;
     case 5:
         mainmenu();
         break;

}}}

void customermenu(){
    reader x;
    while(1){

    cout << "**************************************************************************\n" << endl;
    cout << "                    WELCOME TO CUSTOMER SECTION \n           \n" << endl;
    cout << "**************************************************************************\n" << endl;
    cout<<"\n1.borrow book";
    cout<<"\n2.view your books you will buy ";
    cout<<"\n3.delete book from your order"; // from num to num
    cout<<"\n4.search for books in library";  // num line + text
    cout<<"\n5.Back to main menu";  //copy paste

    cout<<"\n\nEnter your choice..";



        int choice;
        cin>>choice;
        switch(choice){
      case 1:
          x.add_book();
        break;
      case 2:
          x.view_book();
        break;
      case 3:
          x.delete_book();
        break;
      case 4:
          x.search_book();
         break;
     case 5:
         mainmenu();
         break;

}}}


int main()
{
    while(1){

    mainmenu();


    }





    return 0;
}
