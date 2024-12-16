#include <iostream>
#include <vector>
#include "EGE.h"
#include "Zachetka.h"

int main() {
    std::vector<Documents*> documents; // Массив указателей на базовый класс
    int choice;

    while (true) {
        std::cout << "\nМеню:\n";
        std::cout << "1. Добавить свидетельство ЕГЭ\n";
        std::cout << "2. Добавить зачётную книжку\n";
        std::cout << "3. Отобразить все документы\n";
        std::cout << "4. Изменить документ\n";
        std::cout << "5. Вычислить количество действительных документов\n";
        std::cout << "6. Выход\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string owner, date;
            int score;
            std::cout << "Введите имя владельца: ";
            std::cin >> owner;
            std::cout << "Введите дату выдачи: ";
            std::cin >> date;
            std::cout << "Введите баллы ЕГЭ: ";
            std::cin >> score;
            documents.push_back(new EGE(owner, date, score));
        }
        else if (choice == 2) {
            std::string owner, date;
            int semesters;
            std::cout << "Введите имя владельца: ";
            std::cin >> owner;
            std::cout << "Введите дату выдачи: ";
            std::cin >> date;
            std::cout << "Введите количество семестров: ";
            std::cin >> semesters;
            documents.push_back(new Zachetka(owner, date, semesters));
        }
        else if (choice == 3) {
            for (size_t i = 0; i < documents.size(); ++i) {
                std::cout << "\nДокумент #" << i + 1 << ":\n";
                documents[i]->display();
            }
        }
        else if (choice == 4) {
            int index;
            std::cout << "Введите номер документа: ";
            std::cin >> index;
            if (index > 0 && index <= static_cast<int>(documents.size())) {
                documents[index - 1]->setOwner("Новый владелец");
                std::cout << "Владелец изменён.\n";
            }
            else {
                std::cout << "Неверный номер!\n";
            }
        }
        else if (choice == 5) {
            int valid_count = 0;
            for (const auto& doc : documents) {
                if (doc->isValid())
                    valid_count++;
            }
            std::cout << "Количество действительных документов: " << valid_count << std::endl;
        }
        else if (choice == 6) {
            break;
        }
        else {
            std::cout << "Неверный выбор!\n";
        }
    }

    for (auto doc : documents)
        delete doc; // Освобождение памяти

    return 0;
}
