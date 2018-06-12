
template <typename T>
struct Node
{
    Node<T>* left;
    Node<T>* right;
    T data;
    
    Node(T data):data(data), left(nullptr), right(nullptr){} //NODE default c_tor
    
    void set(T data)   //make new node
    {
        this->data = data;
        this->left = nullptr;
        this->right - nullptr;
    }
};

template <typename T>
class BinaryTree
{
public:
    BinaryTree():root(nullptr){}
    void insert(T data)
    {
        if(root == nullptr)
        {
            root = new Node<T>(data);
        }
        else 
        {
            insert(data, root);
        }
    }
    Node<T>* search(T val)
    {
        return search(val, root);
    }
    void postorder_print()
    {
	    postorder_print(root);
	    std::cout << "\n";
    }
    void inorder_print()
    {
        inorder_print(root);
        std::cout << "\n";
    }
    void preorder_print()
    {
        preorder_print(root);
        std::cout << "\n";
    }
private:
    Node<T>* root;
	void insert(T val, Node<T>* temp)
    {
        if( val < temp->data)
        {
            if(temp->left != nullptr)
            {
                insert(val, temp->left);
            }
            else
            {
                temp->left = new Node<T>(val);
            }
        }
        else
        {
            if(temp->right != nullptr)
            {
                insert(val, temp->right);
            }
            else
            {
                temp->right = new Node<T>(val);
            }
        }
    }
    Node<T>* search(T val, Node<T>* temp)
    {
        if(temp != nullptr)
        {
            if(val == temp->data)
            {
                return temp;
            }
            if(val < temp->left->data)
            {
                search(val, temp->left);
            }
            else
            {
                search(val, temp->right);
            }
        }
        return nullptr;
    }
    void postorder_print()
    {
	    postorder_print(root);
	    std::cout << "\n";
    }
    void inorder_print()
    {
        inorder_print(root);
        std::cout << "\n";
    }
    
    void preorder_print()
    {
        preorder_print(root);
        std::cout << "\n";
    }
};
