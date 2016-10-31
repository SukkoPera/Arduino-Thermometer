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

#ifndef _THERMOMETER_H_
#define _THERMOMETER_H_

// #include "common.h"
#include "thermometer_debug.h"


struct Temperature {
	bool valid;
	float celsius;

	float toFahrenheit () const {
		return (celsius * 1.8) + 32;
	}
};

class ThermometerBase {
protected:
	// function to print the temperature
/*	static void printTemperature (float tempC, bool fahrenheit = false) {
		if (!fahrenheit) {
			DPRINT (F("Temp C: "));
			DPRINTLN (tempC);
		} else {
			DPRINT (F("Temp F: "));
			DPRINTLN (Temperature::toFahrenheit (tempC)); // Converts tempC to Fahrenheit
		}
	}
*/

	virtual bool refreshTemperature () = 0;

public:
	bool available;
	Temperature currentTemp;

	/*ThermometerBase () {
	}*/

	void begin () {
		// Do nothing by default
	}

	Temperature& getTemp () {
		refreshTemperature ();
		return currentTemp;
	}
};

#endif
