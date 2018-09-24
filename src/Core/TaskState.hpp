/******************************************************************************
 * TaskState.hpp
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
#ifndef SRC_CORE_TASKSTATE_HPP_
#define SRC_CORE_TASKSTATE_HPP_

namespace Core {

/**
 * @brief Describes the state of a task
 */
enum class TaskState {
		NULL,		//!< NULL
		RUNNING,	//!< RUNNING
		SUSPENDED,	//!< SUSPENDED
		WAITING,	//!< WAITING
		SUCCESS,	//!< SUCCESS
		FAILURE,	//!< FAILURE
		TERMINATED	//!< TERMINATED
};

} /* namespace Core */



#endif /* SRC_CORE_TASKSTATE_HPP_ */
