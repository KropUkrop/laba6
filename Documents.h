#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <iostream>
#include <string>

class Documents {
protected:
    std::string owner;
    std::string issue_date;

public:
    Documents(const std::string& owner, const std::string& issue_date);
    virtual ~Documents() {}

    virtual void display() const; // ����������� ����� ��� ����������� ����������
    const std::string& getOwner() const;
    void setOwner(const std::string& newOwner);

    virtual bool isValid() const = 0; // ����� ����������� �������
};

#endif // DOCUMENTS_H
