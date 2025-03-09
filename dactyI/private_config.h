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

#define C01 11
#define C02 12
#define C03 13
#define C04 14
#define C05 15
#define C06 16
#define C07 NO_PIN
#define C08 NO_PIN

#define R01 3
#define R02 2
#define R03 25
#define R04 24
#define R05 22
#define R06 20
#define R07 NO_PIN
#define R08 NO_PIN

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define C01 11
#define C02 12
#define C03 13
#define C04 14
#define C05 15
#define C06 16
#define C07 NO_PIN
#define C08 NO_PIN

#define R01 3
#define R02 2
#define R03 25
#define R04 24
#define R05 22
#define R06 20
#define R07 NO_PIN
#define R08 NO_PIN

#endif

#define SPI_SCK_PIN     8
#define SPI_MOSI_PIN    7
#define SPI_MISO_PIN    7
#define SPI_CS_PIN      9
#define PMW3610_IRQ_PIN 10

#define DEBOUNCE 20