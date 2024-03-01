// Вариант 19
// Дано бинарное дерево. Найти все поддеревья, структура которых совпадает с заданной.

#include <iostream>
#include <fstream>

using namespace std;

struct Node {
    int value;
    Node* right;
    Node* left;
};

struct BinaryTree {
    Node* root;

    void insert_node(int value, Node* node) {
        if (root == NULL) {
            root = new Node();
            return;
        }


    }
};

int main()
{
    ifstream fs("string.txt", ios::in | ios::binary);
    fs.close();
    std::cout << "Hello World!\n";
}
