#ifndef USERLIST_H
#define USERLIST_H

//-----------------------------------------------------------
//  Purpose:    Header file for the UserList class.
//  Author:     Edgar Alcocer
//-----------------------------------------------------------
#include "userNode.h"
#include <time.h>
#include <iostream>
using namespace std;

//-----------------------------------------------------------
// Define the UserList class interface
//-----------------------------------------------------------
class UserList
{
public:
    // Constructors
    UserList();
    UserList(const UserList &list);
    ~UserList();

    // Methods
    void addUser();
    void incrementCount(string phoneNumber);
    void largestCount(); // sort the list then start the search to make it eaier
    void groupCount();
    void insertHead(string firstName, string lastName, string userName, string phoneNumber, int messageCount);
    void insertTail(string firstName, string lastName, string userName, string phoneNumber, int messageCount);
    void print() const;

private:
    UserNode *Head;
};

#endif