
#include <string>

// Class for Node
class Node {
private:
    std::string m_value;
    Node*       m_next;

public:
    Node();
    Node(std::string value);

    inline Node*       GetNext (){ return m_next;  };
    inline std::string GetValue(){ return m_value; };

    bool               SetNext (Node* next);

    ~Node();
};
