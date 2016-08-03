#ifndef _LTIMER_
#define _LTIMER_

#include <cstdint>

class LTimer
{
    uint32_t mStartTicks;
    uint32_t mPausedTicks;
    bool mPaused;
    bool mStarted;
public:
    LTimer();

    void start();
    void stop();
    void pause();
    void unpause();
    void reset();
    
    uint32_t getTicks();
    bool isPaused();
    bool isStarted();
};

#endif
