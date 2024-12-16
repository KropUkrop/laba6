#ifndef EGE_H
#define EGE_H

#include "Documents.h"

class EGE : public Documents {
private:
    int exam_score;

public:
    EGE(const std::string& owner, const std::string& issue_date, int score);
    void display() const override; // Переопределение виртуального метода
    bool isValid() const override; // Реализация проверки действительности
    void updateScore(int newScore); // Собственный метод
};

#endif // EGE_H
