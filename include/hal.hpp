/*-----------------------------------------------------------------------------
 **
 ** - Ordinator 2020 -
 **
 ** Copyright 2020 by SwordLord - the coding crew and the contributing authors
 **
 ** This program is free software; you can redistribute it and/or modify it
 ** under the terms of the GNU Affero General Public License as published by the
 ** Free Software Foundation, either version 3 of the License, or (at your option)
 ** any later version.
 **
 ** This program is distributed in the hope that it will be useful, but WITHOUT
 ** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 ** FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License
 ** for more details.
 **
 ** You should have received a copy of the GNU Affero General Public License
 ** along with this program. If not, see <http://www.gnu.org/licenses/>.
 **
 ** -----------------------------------------------------------------------------*/

#ifndef ORDINATOR2020_HAL_H
#define ORDINATOR2020_HAL_H

#define TFT_WIDTH                   240
#define TFT_HEIGHT                  240

#define TWATCH_TFT_MISO             (gpio_num_t)-1
#define TWATCH_TFT_MOSI             (gpio_num_t)19
#define TWATCH_TFT_SCLK             (gpio_num_t)18
#define TWATCH_TFT_CS               (gpio_num_t)5
#define TWATCH_TFT_DC               (gpio_num_t)27
#define TWATCH_TFT_RST              (gpio_num_t)-1
#define TWATCH_TFT_BL               (gpio_num_t)12

#define TOUCH_SDA                   23
#define TOUCH_SCL                   32
#define TP_INT                      38

#define SEN_SDA                     21
#define SEN_SCL                     22

#define RTC_INT                     37
#define AXP202_INT                  35
#define BMA423_INT1                 39

#define IR_PIN          13

#endif //ORDINATOR2020_HAL_H
