// Problem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>

class Queue 
{
private:
    std::vector<bool> arr;

public:
    Queue() {}

    void worry(int i)
    {
        this->arr.at(i) = true;
    }

    void quiet(int i)
    {
        this->arr.at(i) = false;
    }

    void come(int k)
    {
        if (k >= 0)
            for (int i = 0; i < k; ++i)
                this->arr.push_back(false);
        else
            for (int i = 0; i < -k; ++i)
                this->arr.pop_back();
    }

    int worry_count()
    {
        int ans = 0;
        for (auto arr_i : arr)
            ans += (arr_i ? 1 : 0);
        return ans;
    }
};

int main()
{
    int t;
    std::cin >> t;
    Queue* queue = new Queue();
    while (t--) {
        std::string str;
        std::cin >> str;
        if (str == "WORRY") {
            int i;
            std::cin >> i;
            queue->worry(i);
        } else if (str == "QUIET") {
            int i;
            std::cin >> i;
            queue->worry(i);
        } else if (str == "COME") {
            int k;
            std::cin >> k;
            queue->come(k);
        } else if (str == "WORRY_COUNT") {
            std::cout << queue->worry_count() << '\n';
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
