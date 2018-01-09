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
