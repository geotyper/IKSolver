/*
 *     IKSolve.h
 *
 *     Copyright (C) 2013-2014  Kevin Balke
 *
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License along
 *     with this program; if not, write to the Free Software Foundation, Inc.,
 *     51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _IK_SOLVE_H_
#define _IK_SOLVE_H_

#include "VectorLib/Vector.h"

//#define LUT_SIZE 128
//#define LUT_HALF_WAVE 64
//#define LUT_QUARTER_WAVE 32
//
//extern int16_t sin_lookup_table[];
//
//#define wrapToRange(_a_, _b_, _v_) (                        \
//                        ((_v_)<(_a_))?                      \
//                        ((_v_)+((_b_)-(_a_))):              \
//                        (                                   \
//                            ((_v_)<(_a_))?                  \
//                            ((_v_)+((_b_)-(_a_))):          \
//                            (_v_)                           \
//                        )                                   \
//                    )
//
//#define sinLUT(__theta__) (sin_lookup_table[wrapToRange(0, LUT_SIZE, LUT_HALF_WAVE+(__theta__))])
//#define cosLUT(__theta__) (sinLUT(LUT_QUARTER_WAVE+(__theta__)))
//
//#define TrigLUTMagnitude 32767
//#define TrigLUTHalfPi 63
//#define TrigLUTPi 127
//#define TrigLUTTwoPi 255
//#define TrigLUTTwoPiRatio 41
//
//struct vector_int_2d_t
//{
//    int_fast32_t x, y;
//};

int solve(float* angles, const float ranges[][2], const float* radii, const int& nJoints, Vector2d (*forwardSolve)(float*), const Vector2d& target, const float& reqError);

//int_fast32_t solve(int_fast32_t* angles,
//          const int_fast32_t* radii,
//          const int_fast8_t& nJoints,
//          void (*forwardSolve)(int_fast32_t*, vector_int_2d_t&),
//          vector_int_2d_t target,
//          const int_fast32_t& reqError);

#endif // _IK_SOLVE_H_
