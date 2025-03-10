/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config/parameter_group.h"
#include "drivers/display.h"

// MSP Display Port commands
#define MSP_DP_RELEASE      1
#define MSP_DP_CLEAR_SCREEN 2
#define MSP_DP_WRITE_STRING 3
#define MSP_DP_DRAW_SCREEN  4

struct displayPort_s;
struct displayPort_s *displayPortMspInit(void);
