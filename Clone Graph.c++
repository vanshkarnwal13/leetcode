class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) {
            return NULL;
        }
        unordered_map<Node*, Node*> m;
        queue<Node*> q;
        q.push(node);
        m[node] = new Node(node->val);
        while (!q.empty()) {
            Node* n = q.front();
            q.pop();
            for (Node* neighbor : n->neighbors) {
                if (m.find(neighbor) == m.end()) {
                    m[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                m[n]->neighbors.push_back(m[neighbor]);
            }
        }
        return m[node];
    }
};