class Node{
	friend class BinarySearchTree;
	friend bool operator!=(const Node& first, const Node& second);

public:
	int getValue()
	{
		return this->value;
	};
	Node(int value) {
		this->value = value;
		this->right = 0;
		this->left = 0;
	};
private:
	
protected:
	int value;
	int left;
	int right;
};


class BinarySearchTree {
	friend class Node;
public:
	int add(int value) {
		if (this->root != EmptyNode)
		{
			this->root = Node(value);
		}
	};
private:
protected:
	Node root;
	BinarySearchTree() {
		this->root;
	};
};



Node EmptyNode(0);

bool operator!=(const Node& first, const Node& second)
{
	return (not((first.left == second.left)*(first.right == second.right)*(first.value == second.value)));
}
