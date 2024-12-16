#include "EGE.h"

EGE::EGE(const std::string& owner, const std::string& issue_date, int score)
    : Documents(owner, issue_date), exam_score(score) {}

void EGE::display() const {
    Documents::display();
    std::cout << "Баллы ЕГЭ: " << exam_score << std::endl;
}

bool EGE::isValid() const {
    return exam_score >= 50; // Условие действительности
}

void EGE::updateScore(int newScore) {
    exam_score = newScore;
}
