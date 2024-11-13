#include <iostream>
#include <forward_list>

int main() {
    // 1. ��������� ������'������ ������ � ������ ��������
    std::forward_list<int> flist = { 10 };

    // 2. ��������� ����� �������� �� ������� ������
    flist.push_front(20);
    flist.push_front(30);
    flist.push_front(40);

    // 3. ��������� ������� �������� ������
    flist.pop_front();

    // 4. ��������� ��� �������� ������ �� �����
    std::cout << "Elements of list: ";
    for (int value : flist) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
