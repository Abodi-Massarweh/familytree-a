//
// Created by abodi on 06/04/2020.
//

#ifndef FAMILYTREE_A_FAMILYTREE_HPP
#define FAMILYTREE_A_FAMILYTREE_HPP

#include <iostream>
#include <string>

using namespace std;
class Node {
    Node* m_left;
    Node* m_right;
    std::string name;
/* yada yada yada ..............*/
};
class FamilyTree {
private:
Node root;

public:
    Node start;
    void addNew(const string str="abodi",const char ch1='a',const char ch2='m',const string str3="msarwi");
    void display(Node node);
    string findRelation(const string str, const char i);

    string find(const string str1, const string str2);
};


#endif //FAMILYTREE_A_FAMILYTREE_HPP
