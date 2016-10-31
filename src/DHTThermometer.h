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

#ifndef _DHTTHERMO_H_
#define _DHTTHERMO_H_

#include "thermometer_common.h"

#ifdef USE_DHT_THERMO

#include <DHT.h>
#include "ThermometerBase.h"


class DHTThermometer: public ThermometerBase {
private:
	//int busPin;
	DHT sensor;

	bool refreshTemperature ();

public:
	DHTThermometer ();

	void begin (byte busPin, byte type);		// Type is either 11, 21 or 22
};

class Thermometer: public DHTThermometer {
};

#endif

#endif
