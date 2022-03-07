# Contests

Данный репозиторий содержит задачи по алгоритмам и структурам данных с 3 источников: [Leetcode](https://leetcode.com/), [Geeksforgeeks](https://practice.geeksforgeeks.org/) и [Sort Me](https://sort-me.org/). 

### Бинарный поиск

```c++
int binary_search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size();
    int mid = 0;
    
    while(left < right)
    {
        mid = left + (right - left) / 2;
        
        if(nums[mid] == target)
        {
            return mid;
        }
        
        if(nums[mid] > target)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    return -1;
}
```



### Обход дерева

![Виды обходов](traversals.png)

#### Рекурсивный DFS для бинарного дерева 

```c++
void visit(Node* cur)
{
    // preorder (обработка вершины)
    
    if(cur->left != nullptr)
    {
        visit(cur->left);
    }
    
    // inorder (обработка вершины)
    
    if(cur->right != nullptr)
    {
        visit(cur->right)
    }
    // postorder (обработка вершины)
}
```



Временная сложность: O(N), где N - число вершин в дереве

Пространственная сложность: O(N) - в худшем случае, если дерево несбалансированное и все вершины на одной "ветке", то в run-time стэке будет лежать все вершины. Для сбалансированного в среднем O(logN).

#### Итеративные DFS для бинарного дерева

#### Итеративные BFS для бинарного дерева

```c++
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

void bintree_bfs(Node* root)
{
    queue<Node*> q;
	q.push(root);
	while(!q.empty())
    {
        auto v = q.front();
        q.pop();
        
        cout << v->data;
        
        if(v->left != nullptr)
        {
            q.push(v->left);
        }
        if(v->right != nullptr)
        {
            q.push(v->right);
        }
    }
}

```





























