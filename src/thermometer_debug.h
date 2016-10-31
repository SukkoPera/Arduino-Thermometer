/***************************************************************************
 *   This file is part of Arduino-Thermometer.                             *
 *                                                                         *
 *   Copyright (C) 2013-2016 by SukkoPera                                  *
 *                                                                         *
 *   Arduino-Thermometer is free software: you can redistribute it and/or  *
 *   modify it under the terms of version 3 of the GNU General Public      *
 *   License as published by the Free Software Foundation.                 *
 *                                                                         *
 *   Arduino-Thermometer is distributed in the hope that it will be        *
 *   useful, but WITHOUT ANY WARRANTY; without even the implied warranty   *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the      *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with Arduino-Thermometer.  If not, see                          *
 *   <http://www.gnu.org/licenses/>.                                       *
 ***************************************************************************/

#ifndef _THERMOMETERDEBUG_H_
#define _THERMOMETERDEBUG_H_

#include "thermometer_common.h"

#ifndef THERMOMETER_NDEBUG
	#ifndef DPRINT
		#define DPRINT(...) Serial.print(__VA_ARGS__)
	#endif

	#ifndef DPRINTLN
		#define DPRINTLN(...) Serial.println(__VA_ARGS__)
	#endif
#else
	#ifndef DPRINT
		#define DPRINT(...) do {} while (0)
	#endif

	#ifndef DPRINTLN
		#define DPRINTLN(...) do {} while (0)
	#endif
#endif

#endif
