/******************************************************************************
 * ErrorHandler.cpp
 * Copyright (C) 2018  Mel McCalla <melmccalla@gmail.com>
 *
 * This file is part of panobot-Firmware.
 *
 * panobot-Firmware is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * panobot-Firmware is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with panobot-Firmware.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  file: The file name as string.
 * @param  line: The line in file as a number.
 * @retval None
 */
void _Error_Handler(__attribute__((unused)) char *file, __attribute__((unused)) int line) {
	/* User can add his own implementation to report the HAL error return state */
	for (;;) {

	}
}

