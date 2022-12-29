#include <iostream>

using namespace::std;
constexpr auto SPACE = 10;


class tree_element {
    public:
        int value;
        struct tree_element* left;
        struct tree_element* right;
    tree_element* create_tree_element(int i);
    void insert_into_tree(tree_element* root, tree_element* elem);
    void print_tree(tree_element* cur_elem);
    tree_element* del_elem(tree_element* root, int aData);
    void print2D(tree_element* root, int space);
};


tree_element* create_tree_element(int i) {
    tree_element* elem = new tree_element;
    elem->value = i;
    elem->left = nullptr;
    elem->right = nullptr;
    return elem;
}


//Добавление элемента в дерево
void insert_into_tree(tree_element* root, tree_element* elem) {
    if (elem->value < root->value) {
        if (root->left == nullptr) {
            root->left = elem;
        }
        else {
            insert_into_tree(root->left, elem);
        };
    }
    else {
        if (root->right == nullptr) {
            root->right = elem;
        }
        else {
            insert_into_tree(root->right, elem);
        }
    }
}

//стандартная печать дерева
void print_tree(tree_element* cur_elem) {
    if (cur_elem->left != nullptr) {
        print_tree(cur_elem->left);
    }
    std::cout << "Value " << cur_elem->value << std::endl;
    if (cur_elem->right != nullptr) {
        print_tree(cur_elem->right);
    }
}


//удаление элемента
tree_element* del_elem(tree_element* root, int aData) {
    if (root == NULL)
        return root;
    if (aData == root->value) {
        tree_element* tmp;
        if (root->right == NULL)
            tmp = root->left;
        else {
            tree_element* ptr = root->right;
            if (ptr->left == NULL) {
                ptr->left = root->left;
                tmp = ptr;
            }
            else {
                tree_element* pmin = ptr->left;
                while (pmin->left != NULL) {
                    ptr = pmin;
                    pmin = ptr->left;
                }
                ptr->left = pmin->right;
                pmin->left = root->left;
                pmin->right = root->right;
                tmp = pmin;
            }
        }
        delete root;
        return tmp;
    }
    else if (aData < root->value)
        root->left = del_elem(root->left, aData);
    else
        root->right = del_elem(root->right, aData);
    return root;
}


void print2D(tree_element* root, int space) {
    if (root == nullptr)
        return;
    space += SPACE;
    print2D(root->right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++)
        cout << " ";
    cout << root->value << "\n";
    print2D(root->left, space);
};



int main() {
    //корень
    tree_element* root = create_tree_element(0);
    //добавляем элементы,то что при создании - и есть часть шаблонного программирования

    tree_element* el = create_tree_element(5);
    insert_into_tree(root, el);

    tree_element* el1 = create_tree_element(8);
    insert_into_tree(root, el1);

    tree_element* el2 = create_tree_element(112);
    insert_into_tree(root, el2);

    tree_element* el3 = create_tree_element(255);
    insert_into_tree(root, el3);

    del_elem(root, 255);
    print_tree(root);
    print2D(root, 1);
}
