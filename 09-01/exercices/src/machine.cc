#include "machine.h"

Machine::Machine ()
: size (0) {

}

void Machine::addTask (Task task) {
	this->tasks.push_back (task);
	size += task.size;
}

int Machine::getTasksSize () const {
	return this->size;
}

std::string Machine::toString () const {
	std::string result;

	for (const Task& task : this->tasks) {
		result += "[";
		for (int i = 0; i < task.size; i++)
			result += std::to_string (task.id);
		result += "]";
	}

	result += "<" + std::to_string (this->size) + ">";

	return result;
}
