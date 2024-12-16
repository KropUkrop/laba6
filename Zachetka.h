#ifndef ZACHETKA_H
#define ZACHETKA_H

#include "Documents.h"

class Zachetka : public Documents {
private:
    int semester_count;

public:
    Zachetka(const std::string& owner, const std::string& issue_date, int semesters);
    void display() const override; // Переопределение виртуального метода
    bool isValid() const override; // Реализация проверки действительности
    void addSemester(); // Собственный метод
};

#endif // ZACHETKA_H
