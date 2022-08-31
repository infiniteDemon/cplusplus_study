//
// Created by joker on 22-8-31.
//
#include "iostream"
#include <unistd.h>

using namespace std;

union mynum
{
    struct {
        int x;
        int y;
        int z;
    }u;
    int k;
    int m;
}a;

int  main()
{
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;

    a.k = 0; //覆盖掉第一个int空间值
    a.m = 0;

    printf("%d %d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k, a.m);

    pause();
    return 0;
};