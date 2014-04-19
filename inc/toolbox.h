/*
 * \file   toolbox.h
 * \brief  Is the main header file, user has to include in order
 *    to use toolbox.
 *
 * This file is part of toolbox
 *
 * Copyright (C) 2014 Houtouridis Christos (http://www.houtouridis.net)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef __toolbox_h__
#define __toolbox_h__

#ifdef __cplusplus
extern "C" {
#endif

#include <toolbox_defs.h>

// Automatic control systems
#include <acs/pid.h>
#include <acs/tne.h>
   
// Cryptography
#include <crypt/aes.h>
#include <crypt/sha2.h>

// Drivers
#include <drv/alcd.h>
#include <drv/buttons.h>
#include <drv/ee_i2c_pol.h>
#include <drv/i2c_pol.h>
//#include <drv/sd_spi_stm32.h>
#include <drv/sensors_lut.h>
//#include <drv/sim_ee.h>
//#include <drv/spi_pol.h>
#include <drv/ss_display.h>

// DSP
#include <dsp/filters.h>

// std library adds and replacements
#include <std/complex.h>
#include <std/printf.h>
#include <std/stime.h>

// System
#include <sys/diskio.h>
#include <sys/fatfs.h>
#include <sys/ffconf.h>
#include <sys/integer.h>
#include <sys/jiffies.h>
#include <sys/semaphore.h>

// User interface
//#include <ui/ui.h>
#include <ui/uid.h>


#ifdef __cplusplus
}
#endif

#endif // #ifndef __toolbox_h__
