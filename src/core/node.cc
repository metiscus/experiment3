#include "node.h"

Node::Node()
{

}

Node::~Node()
{

}

void Node::AddChild(NodePtr child)
{
    children_.push_back(child);
    bound_.ExpandBy(child->GetBound());
}

void Node::RemoveChild(NodePtr child)
{
    children_.erase(std::remove(children_.begin(), children_.end(), child), children_.end());
    bound_.Reset();
    for(auto child : children_)
    {
        bound_.ExpandBy(child->GetBound());
    }
}

uint32_t Node::GetNumChildren() const
{
    return children_.size();
}

NodePtr Node::GetChild(uint32_t idx)
{
    return children_.at(idx);
}

const Rectangle& Node::GetBound() const
{
    return bound_;
}

void Node::SetBound(const Rectangle& bound)
{
    bound_ = bound;
}

Transform& Node::GetTransform()
{
    return transform_;
}

const Transform& Node::GetTransform() const
{
    return transform_;
}

void Node::SetTransform(const Transform& transform)
{
    transform_ = transform;
}

