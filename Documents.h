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

    virtual void display() const; // Виртуальный метод для отображения информации
    const std::string& getOwner() const;
    void setOwner(const std::string& newOwner);

    virtual bool isValid() const = 0; // Чисто виртуальная функция
};

#endif // DOCUMENTS_H
