//======================================================================
// Project Name    : cofcofc
//
// Copyright © 2016 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef Quinty_h
#define Quinty_h
class Quinty {
   public:
    static float easeIn(float currentTime, float start, float end, float totalTime);
    static float easeOut(float currentTime, float start, float end, float totalTime);
    static float easeInOut(float currentTime, float start, float end, float totalTime);
};
#endif
