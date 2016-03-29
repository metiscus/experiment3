#include "rectangle.h"

Rectangle::Rectangle()
{
    
}

Rectangle::Rectangle(const Vector2& center, const Vector2& extents)
    : center_(center)
    , extents_(extents)
{
    UpdateMinMax();
}

Rectangle::Rectangle(float x, float y, float w, float h)
    : center_(x, y)
    , extents_(w, h)
{
    UpdateMinMax();
}

void Rectangle::SetCenter(const Vector2& center)
{
    center_ = center;
    UpdateMinMax();
}

void Rectangle::SetExtents(const Vector2& extents)
{
    extents_ = extents;
    UpdateMinMax();
}

const Vector2& Rectangle::GetCenter() const
{
    return center_;
}

const Vector2& Rectangle::GetExtents() const
{
    return extents_;
}

const Vector2& Rectangle::GetMin() const
{
    return min_;
}

const Vector2& Rectangle::GetMax() const
{
    return max_;
}

bool Rectangle::ContainsPoint(const Vector2& point) const
{
    if(point.GetX() < min_.GetX()) return false;
    if(point.GetX() > max_.GetX()) return false;
    if(point.GetY() < min_.GetY()) return false;
    if(point.GetY() > max_.GetY()) return false;
    return true;
}

bool Rectangle::Intersects(const Rectangle& other) const
{
    return !( min_.GetX() > other.min_.GetX()
        || max_.GetX() < other.min_.GetX()
        || max_.GetY() > other.min_.GetY()
        || min_.GetY() < other.max_.GetY()
    );
}

void Rectangle::UpdateMinMax()
{
    min_ = center_ - 0.5f * extents_;
    max_ = center_ + 0.5f * extents_;
}
