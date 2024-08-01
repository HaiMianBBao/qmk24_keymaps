/* Copyright 2023 Cheng Liren
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#ifdef COMPILE_LEFT

#define PIPE_NUMBER 0

#define C01 3
#define C02 4
#define C03 5
#define C04 6
#define C05 7
#define C06 9
#define C07 10
#define C08 NO_PIN

#define R01 19
#define R02 18
#define R03 17
#define R04 14
#define R05 13
#define R06 NO_PIN
#define R07 NO_PIN
#define R08 NO_PIN

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define C01 30
#define C02 0
#define C03 2
#define C04 3
#define C05 4
#define C06 5
#define C07 6
#define C08 NO_PIN

#define R01 21
#define R02 22
#define R03 23
#define R04 28
#define R05 29
#define R06 NO_PIN
#define R07 NO_PIN
#define R08 NO_PIN

#endif

#define SPI_SCK_PIN     15
#define SPI_MOSI_PIN    14
#define SPI_MISO_PIN    14
#define SPI_CS_PIN      13
#define PMW3610_IRQ_PIN 16
