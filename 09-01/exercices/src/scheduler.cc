#include "scheduler.h"

#include <iostream>

Scheduler::Scheduler ()
: Scheduler (false) {

}

Scheduler::Scheduler (bool verbose) {
	this->verbose = verbose;
}

int Scheduler::schedule (int nbMachines, std::vector<Task> tasks) {
	return schedule (std::vector<Machine> (nbMachines, Machine ()), tasks);
}

/**
 * \param machines The machines to be used
 * \param tasks An array containing tasks
 */
int Scheduler::schedule (std::vector<Machine> machines, std::vector<Task> tasks) {
	int makespan = 0;

	if (this->verbose) {
		std::cout << "Scheduling the following list of tasks on " <<
			machines.size() << " machines:" << std::endl;
		for (const Task& task : tasks)
			std::cout << "(" << task.id << ", " << task.size << "),";
	}
	std::cout << std::endl;

	Machine* lightestMachine = nullptr;
	for (Task task : tasks) {
		// Find lightest machine
		lightestMachine = &(machines.front ());
		for (Machine& machine : machines) {
			if (lightestMachine->getTasksSize () > machine.getTasksSize ())
				lightestMachine = &machine;
		}
		lightestMachine->addTask (task);
	}

	// Get terminal makespan
	makespan = (machines.front ()).getTasksSize ();
	for (const Machine& m : machines) {
		if (makespan < m.getTasksSize ())
			makespan = m.getTasksSize ();
		if (this->verbose) {
			std::cout << "Machine with total task size " << m.getTasksSize () << std::endl;
		}
	}

	return makespan;
}

void Scheduler::setVerbose (bool verbose) {
	this->verbose = verbose;
}

bool Scheduler::getVerbose () {
	return this->verbose;
}
