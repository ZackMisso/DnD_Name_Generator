#pragma once

// any program which uses this random name generator should
// wrap its own random number generator by extending this
// struct.
struct DnDRNG
{
    virtual int rand_int(int end) = 0;
    virtual int rand_int(int start, int end) = 0;
    virtual float rand_float(int start, int end) = 0;
};

struct DnDNameGenerator
{
};