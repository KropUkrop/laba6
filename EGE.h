#ifndef EGE_H
#define EGE_H

#include "Documents.h"

class EGE : public Documents {
private:
    int exam_score;

public:
    EGE(const std::string& owner, const std::string& issue_date, int score);
    void display() const override; // ��������������� ������������ ������
    bool isValid() const override; // ���������� �������� ����������������
    void updateScore(int newScore); // ����������� �����
};

#endif // EGE_H
