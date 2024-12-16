#ifndef ZACHETKA_H
#define ZACHETKA_H

#include "Documents.h"

class Zachetka : public Documents {
private:
    int semester_count;

public:
    Zachetka(const std::string& owner, const std::string& issue_date, int semesters);
    void display() const override; // ��������������� ������������ ������
    bool isValid() const override; // ���������� �������� ����������������
    void addSemester(); // ����������� �����
};

#endif // ZACHETKA_H
