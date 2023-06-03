//----------------------------------------------
// Purpose: Implement user node
// Author:  Edgar Alcocer
//----------------------------------------------

#include "userNode.h"

//----------------------------------------------
UserNode::UserNode()
{
    FirstName = "";
    cin >> FirstName;
    LastName = "";
    cin >> LastName;
    UserName = "";
    cin >> UserName;
    PhoneNumber = "";
    cin >> PhoneNumber;
    MessageCount = 0;
    cin >> MessageCount;
    Next = NULL;
}

//----------------------------------------------
UserNode::UserNode(string firstName, string lastName, string userName, string phoneNumber, int messageCount)
{
    FirstName = firstName;
    LastName = lastName;
    UserName = userName;
    PhoneNumber = phoneNumber;
    MessageCount = messageCount;
    Next = NULL;
}

//----------------------------------------------
UserNode::UserNode(const UserNode &node)
{
    FirstName = node.FirstName;
    LastName = node.LastName;
    UserName = node.UserName;
    PhoneNumber = node.PhoneNumber;
    MessageCount = node.MessageCount;
    Next = node.Next;
}

//----------------------------------------------
UserNode::~UserNode()
{
}

//----------------------------------------------
string UserNode::getFirstName() const
{
    return FirstName;
}

//----------------------------------------------
string UserNode::getLastName() const
{
    return LastName;
}

//----------------------------------------------
string UserNode::getUserName() const
{
    return UserName;
}

//----------------------------------------------
string UserNode::getPhoneNumber() const
{
    return PhoneNumber;
}

//----------------------------------------------
int UserNode::getMessageCount() const
{
    return MessageCount;
}

//----------------------------------------------
UserNode *UserNode::getNext() const
{
    return Next;
}

//----------------------------------------------
void UserNode::setFirstName(string firstName)
{
    FirstName = firstName;
}

//----------------------------------------------
void UserNode::setLastName(string lastName)
{
    LastName = lastName;
}

//----------------------------------------------
void UserNode::setUserName(string userName)
{
    UserName = userName;
}

//----------------------------------------------
void UserNode::setPhoneNumber(string phoneNumber)
{
    PhoneNumber = phoneNumber;
}

//----------------------------------------------
void UserNode::setMessageCount(int messageCount)
{
    MessageCount = messageCount;
}

//----------------------------------------------
void UserNode::setNext(UserNode *next)
{
    Next = next;
}

//----------------------------------------------
void UserNode::print() const
{
    cout << "First Name: " << FirstName << endl;
    cout << "Last Name: " << LastName << endl;
    cout << "User Name: " << UserName << endl;
    cout << "Phone Number: " << PhoneNumber << endl;
    cout << "Message Count: " << MessageCount << endl;
    cout << endl;
}