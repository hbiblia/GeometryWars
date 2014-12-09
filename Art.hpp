#pragma once

#include "Utility/package.hpp"

//---------------------------------------------------------------------------------
// Written by Terence J. Grant - tjgrant [at] tatewake [dot] com
// Find the full tutorial at: http://gamedev.tutsplus.com/series/
//----------------------------------------------------------------------------------

class Art : public tSingleton<Art>
{
protected:
    tTexture* mPlayer;
    tTexture* mSeeker;
    tTexture* mWanderer;
    tTexture* mBullet;
    tTexture* mPointer;

protected:
    Art();

public:
    tTexture* getPlayer() const;
    tTexture* getSeeker() const;
    tTexture* getWanderer() const;
    tTexture* getBullet() const;
    tTexture* getPointer() const;

    friend class tSingleton<Art>;
};
