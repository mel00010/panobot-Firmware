/******************************************************************************
 * Task.hpp
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
#ifndef SRC_CORE_TASK_HPP_
#define SRC_CORE_TASK_HPP_

#include "Deadline.hpp"
#include "PID.hpp"
#include "Priority.hpp"
#include "TaskState.hpp"

namespace Core {

/**
 * Represents a task
 */
class Task {
	public:
		Task(); //TODO Add arguments


	public:
		const PID& getPID() const {
			return const_cast<const PID&>(pid);
		}
		const Priority& getPriority() const {
			return const_cast<const Priority&>(priority);
		}
		const Deadline& getDeadline() const {
			return const_cast<const Deadline&>(deadline);
		}
		const TaskState& getTaskState() const {
			return const_cast<const TaskState&>(state);
		}

		bool setPID(const PID& new_pid) {
			pid = new_pid;
			return true;
		}
		bool setPriority(const Priority& new_priority) {
			priority = new_priority;
			return true;
		}
		bool setDeadline(const Deadline& new_deadline) {
			deadline = new_deadline;
			return true;
		}
		bool setTaskState(const TaskState& new_state) {
			state = new_state;
			return true;
		}

	public:
		bool operator==(const Task& rhs) const {
			return getPID() == rhs.getPID();
		}
		bool operator!=(const Task& rhs) const {
			return getPID() != rhs.getPID();
		}
		bool operator<(const Task& rhs) const {
			return getPID() < rhs.getPID();
		}
		bool operator>(const Task& rhs) const {
			return getPID() > rhs.getPID();
		}
		bool operator<=(const Task& rhs) const {
			return getPID() <= rhs.getPID();
		}
		bool operator>=(const Task& rhs) const {
			return getPID() >= rhs.getPID();
		}

	protected:
		PID pid;

		Priority priority;
		Deadline deadline;

		TaskState state;
		bool interrruptable;
		bool recurring;

};

} /* namespace Core */



#endif /* SRC_CORE_TASK_HPP_ */
