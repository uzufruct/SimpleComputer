//
// Created by nicko on 4/12/17.
//

#ifndef ARCHITEC_MYREADKEY_H
#define ARCHITEC_MYREADKEY_H

#include <termios.h>

struct termios current, backup;

enum keys
{
    KEY_S,
    KEY_L,
    KEY_R,
    KEY_T,
    KEY_I,
    KEY_F5,
    KEY_F6 ,
    KEY_UP,
    KEY_DOWN,
    KEY_RIGHT,
    KEY_LEFT,
    KEY_ENTER,
    KEY_ESCAPE,
    KEY_DEFAULT,
};

int rk_readkey(enum keys *key);

int rk_mytermsave(void);

int rk_mytermrestore(void);

int rk_mytermregime(int regime, int vtime, int vmin, int echo, int sigint);

#endif //ARCHITEC_MYREADKEY_H
