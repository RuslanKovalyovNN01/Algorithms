template<typename T>
struct Node {
    T value;
    Node<T> *left;
    Node<T> *right;

    Node(int value){
        this->value = value;
        this->left = left;
        this->right = right;
    }

    Node(int value, Node* left, Node* right){
        this->value = value;
        this->left = left;
        this->right = right;
    }
};
