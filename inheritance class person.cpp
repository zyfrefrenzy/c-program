/*a c++ code for denostrating inheritance by creating a library management system
NAME Frenzy Gatheru
REG NO BSE-05-0163/2024
*/
#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name; // To represent the name of the person

public:
    Person(string n) : name(n) {}

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

// Derived class LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor that initializes name, memberID, and booksBorrowed
    LibraryMember(string n, int id, int books) 
        : Person(n), memberID(id), booksBorrowed(books) {}

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating object
    PremiumMember member("Frenzy Irimu", 101, 5, 29.99);

    // Display
    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << member.getMembershipFee() << endl;

    return 0;
}