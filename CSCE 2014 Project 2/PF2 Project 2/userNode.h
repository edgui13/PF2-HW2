#ifndef USERNODE_H
#define USERNODE_H

//-----------------------------------------------------------
//  Purpose:    Header file for the UserNode class.
//  Author:     Edgar ALcocer
//-----------------------------------------------------------
#include <iostream>
using namespace std;

//-----------------------------------------------------------
// Define the UserNODE class interface
//-----------------------------------------------------------
class UserNode
{
public:
    // Constructors
    UserNode();
    UserNode(string firstName, string lastName, string userName, string phoneNumber, int messageCount);
    UserNode(const UserNode &node);
    ~UserNode();

    // Get methods
    string getFirstName() const;
    string getLastName() const;
    string getUserName() const;
    string getPhoneNumber() const;
    int getMessageCount() const;
    UserNode *getNext() const;

    // Set methods
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setUserName(string userName);
    void setPhoneNumber(string phoneNumber);
    void setMessageCount(int messageCount);
    void setNext(UserNode *next);

    // Other methods
    void print() const;

private:
    string FirstName;
    string LastName;
    string UserName;
    string PhoneNumber;
    int MessageCount;
    UserNode *Next;
};

#endif