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

#ifndef THERMOMETERCOMMON_H_
#define THERMOMETERCOMMON_H_

/* DEFINE this to DISABLE debug messages
 */
#define THERMOMETER_NDEBUG

/* Temperature sensor selection: please enable *only one* of the following,
 * corresponding to the sensor you will be using
 */
#define USE_DALLAS_THERMO
//#define USE_DHT_THERMO

// Don't touch :)
#define THERMOMETER_VERSION "0.4git"

#endif
