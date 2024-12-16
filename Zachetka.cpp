#include "Zachetka.h"

Zachetka::Zachetka(const std::string& owner, const std::string& issue_date, int semesters)
    : Documents(owner, issue_date), semester_count(semesters) {}

void Zachetka::display() const {
    Documents::display();
    std::cout << "Количество семестров: " << semester_count << std::endl;
}

bool Zachetka::isValid() const {
    return semester_count > 0;
}

void Zachetka::addSemester() {
    semester_count++;
}
