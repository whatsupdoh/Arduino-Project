#ifndef MOTIONPATTERN_H
#define MOTIONPATTERN_H

// ==============================
// 전진 (Forward)
int forward_HIP[]   = {  10, -10 };
int forward_KNEE[]  = { -15,  15 };
int forward_ANKLE[] = {  -5,   5 };

// ==============================
// 후진 (Backward)
int backward_HIP[]   = { -10,  10 };
int backward_KNEE[]  = {  15, -15 };
int backward_ANKLE[] = {   5,  -5 };

// ==============================
// 좌회전 (Turn Left)
int turnLeft_HIP[]   = {   8,  -8 };
int turnLeft_KNEE[]  = { -10,  10 };
int turnLeft_ANKLE[] = {  -4,   4 };

// ==============================
// 우회전 (Turn Right)
int turnRight_HIP[]   = {  -8,   8 };
int turnRight_KNEE[]  = {  10, -10 };
int turnRight_ANKLE[] = {   4,  -4 };

// ==============================
// 제자리 일어서기 (Stand)
int stand_HIP[]   = { 0 };
int stand_KNEE[]  = { 0 };
int stand_ANKLE[] = { 0 };

// ==============================
// 앉기 (Crouch)
int crouch_HIP[]   = { 0,  0 };
int crouch_KNEE[]  = { 10, -10 };
int crouch_ANKLE[] = { 10, -10 };

// ==============================
// 우측 전진 (Right Stride)
int rightStride_HIP[]   = {  12,  -8 };
int rightStride_KNEE[]  = { -10,  15 };
int rightStride_ANKLE[] = {  -5,   5 };

// ==============================
// 좌측 전진 (Left Stride)
int leftStride_HIP[]   = {   8, -12 };
int leftStride_KNEE[]  = { -15,  10 };
int leftStride_ANKLE[] = {  -5,   5 };

// ==============================
// 제자리 걷기 (Walk in Place)
int inPlace_HIP[]   = {  5, -5 };
int inPlace_KNEE[]  = { -10, 10 };
int inPlace_ANKLE[] = {  -5,  5 };

#endif
