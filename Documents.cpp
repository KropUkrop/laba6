#include "Documents.h"

Documents::Documents(const std::string& owner, const std::string& issue_date)
    : owner(owner), issue_date(issue_date) {}

void Documents::display() const {
    std::cout << "Владелец: " << owner << "\nДата выдачи: " << issue_date << std::endl;
}

const std::string& Documents::getOwner() const {
    return owner;
}

void Documents::setOwner(const std::string& newOwner) {
    owner = newOwner;
}
