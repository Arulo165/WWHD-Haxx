#pragma once

class Node_Class
{
private:
    Node_Class*     mpPrevNode;
    void*           mpData;
    Node_Class*     mpNextNode;
};
static_assert((sizeof(Node_Class)  == 0xC), "Node_Class Missmatch");