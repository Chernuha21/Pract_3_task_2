#include <iostream>
#include <forward_list>

int main() {
    // 1. Створення однозв'язного списку з одного елемента
    std::forward_list<int> flist = { 10 };

    // 2. Додавання нових елементів на початок списку
    flist.push_front(20);
    flist.push_front(30);
    flist.push_front(40);

    // 3. Видалення першого елемента списку
    flist.pop_front();

    // 4. Виведення всіх елементів списку на екран
    std::cout << "Elements of list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
