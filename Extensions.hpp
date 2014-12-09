#pragma once

#include "Utility/package.hpp"

//---------------------------------------------------------------------------------
// Written by Terence J. Grant - tjgrant [at] tatewake [dot] com
// Find the full tutorial at: http://gamedev.tutsplus.com/series/
//----------------------------------------------------------------------------------

class Extensions
{
public:
    static float        toAngle(const tVector2f& vector);
    static tVector2f    scaleTo(const tVector2f& vector, float length);
    static tPoint2f     toPoint(const tVector2f& vector);
    static float        nextFloat(float minValue, float maxValue);
    static tVector2f    nextVector2(float minLength, float maxLength);

    static tColor4f     colorLerp(const tColor4f& a, const tColor4f& b, float alpha);
};