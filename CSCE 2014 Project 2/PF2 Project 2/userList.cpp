//----------------------------------------------
// Purpose: Implement User linked list
// Author:  Edgar Alcocer
//----------------------------------------------

#include "userList.h"

//----------------------------------------------
UserList::UserList()
{
    Head = NULL;
}

//----------------------------------------------
UserList::UserList(const UserList &list)
{
    // Create first node
    UserNode *copy = new UserNode();
    Head = copy;

    // Walk list to copy nodes
    UserNode *ptr = list.Head;
    while (ptr != NULL)
    {
        copy->setNext(new UserNode());
        copy = copy->getNext();
        copy->setFirstName(ptr->getFirstName());
        copy->setLastName(ptr->getLastName());
        copy->setUserName(ptr->getUserName());
        copy->setPhoneNumber(ptr->getPhoneNumber());
        copy->setMessageCount(ptr->getMessageCount());
        copy->setNext(NULL);
        ptr = ptr->getNext();
    }

    // Tidy first node
    copy = Head;
    Head = copy->getNext();
    delete copy;
}

//----------------------------------------------
UserList::~UserList()
{
}

//----------------------------------------------
void UserList::insertHead(string firstName, string lastName, string userName, string phoneNumber, int messageCount)
{
    // Insert new node
    UserNode *ptr = new UserNode(firstName, lastName, userName, phoneNumber, messageCount);
    ptr->setNext(Head);
    Head = ptr;
}

//----------------------------------------------
void UserList::insertTail(string firstName, string lastName, string userName, string phoneNumber, int messageCount)
{
    // Find tail node
    UserNode *ptr = Head;
    while ((ptr != NULL) && (ptr->getNext() != NULL))
        ptr = ptr->getNext();

    // Insert new node
    if (ptr != NULL)
        ptr->setNext(new UserNode(firstName, lastName, userName, phoneNumber, messageCount));
    else
        Head = new UserNode(firstName, lastName, userName, phoneNumber, messageCount);
}

// //----------------------------------------------
void UserList::addUser()
{
    cout << "Please add a user by First name, last name, user name, phone number, and message count" << endl;
    // Find tail node
    UserNode *ptr = Head;
    while ((ptr != NULL) && (ptr->getNext() != NULL))
        ptr = ptr->getNext();

    // Insert new node
    if (ptr != NULL)
        ptr->setNext(new UserNode());
    else
        Head = new UserNode();
}

//----------------------------------------------
void UserList::incrementCount(string phoneNumber)
{
    // Find matching node
    UserNode *ptr = Head;
    while ((ptr != NULL) && (ptr->getPhoneNumber() != phoneNumber))
        ptr = ptr->getNext();

    // Add to current score
    int messageCount;
    if (ptr != NULL)
    {
        messageCount = ptr->getMessageCount();
        ptr->setMessageCount(messageCount + 1);
    }
}

//----------------------------------------------
void UserList::largestCount()
{
    // Walk list to find node
    string userName;
    int messageCount = 0;
    UserNode *ptr = Head;
    while (ptr != NULL)
    {
        // if current message count is greater than the previous message count then get their name and message count
        if (ptr->getMessageCount() >= messageCount)
        {
            messageCount = ptr->getMessageCount();
            userName = ptr->getUserName();
        }
        ptr = ptr->getNext();
    }
    cout << endl;
    cout << "The user with the highest message count is " << userName << endl;
    cout << "With a total of " << messageCount << " messages" << endl;
}

//----------------------------------------------
void UserList::groupCount()
{
    int groupCount;
    int messageCount;
    string userName;
    UserNode *ptr = Head;
    while (ptr != NULL)
    {
        messageCount = ptr->getMessageCount();
        groupCount = groupCount + messageCount;
        ptr = ptr->getNext();
    }
    cout << "The group message count is " << groupCount - 1 << endl;
    cout << endl;
}
//----------------------------------------------
void UserList::print() const
{
    UserNode *ptr = Head;
    while (ptr != NULL)
    {
        ptr->print();
        ptr = ptr->getNext();
    }
}