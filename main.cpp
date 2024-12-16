#include <iostream>
#include <vector>
#include "EGE.h"
#include "Zachetka.h"

int main() {
    std::vector<Documents*> documents; // ������ ���������� �� ������� �����
    int choice;

    while (true) {
        std::cout << "\n����:\n";
        std::cout << "1. �������� ������������� ���\n";
        std::cout << "2. �������� �������� ������\n";
        std::cout << "3. ���������� ��� ���������\n";
        std::cout << "4. �������� ��������\n";
        std::cout << "5. ��������� ���������� �������������� ����������\n";
        std::cout << "6. �����\n";
        std::cout << "�������� ��������: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string owner, date;
            int score;
            std::cout << "������� ��� ���������: ";
            std::cin >> owner;
            std::cout << "������� ���� ������: ";
            std::cin >> date;
            std::cout << "������� ����� ���: ";
            std::cin >> score;
            documents.push_back(new EGE(owner, date, score));
        }
        else if (choice == 2) {
            std::string owner, date;
            int semesters;
            std::cout << "������� ��� ���������: ";
            std::cin >> owner;
            std::cout << "������� ���� ������: ";
            std::cin >> date;
            std::cout << "������� ���������� ���������: ";
            std::cin >> semesters;
            documents.push_back(new Zachetka(owner, date, semesters));
        }
        else if (choice == 3) {
            for (size_t i = 0; i < documents.size(); ++i) {
                std::cout << "\n�������� #" << i + 1 << ":\n";
                documents[i]->display();
            }
        }
        else if (choice == 4) {
            int index;
            std::cout << "������� ����� ���������: ";
            std::cin >> index;
            if (index > 0 && index <= static_cast<int>(documents.size())) {
                documents[index - 1]->setOwner("����� ��������");
                std::cout << "�������� ������.\n";
            }
            else {
                std::cout << "�������� �����!\n";
            }
        }
        else if (choice == 5) {
            int valid_count = 0;
            for (const auto& doc : documents) {
                if (doc->isValid())
                    valid_count++;
            }
            std::cout << "���������� �������������� ����������: " << valid_count << std::endl;
        }
        else if (choice == 6) {
            break;
        }
        else {
            std::cout << "�������� �����!\n";
        }
    }

    for (auto doc : documents)
        delete doc; // ������������ ������

    return 0;
}
