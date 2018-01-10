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
			std::cout << "(" << task.id << ", " << task.size << ") ";
		std::cout << std::endl;
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

	if (this->verbose)
		std::cout << "Task repartition after scheduling:" << std::endl;

	for (const Machine& m : machines) {
		if (makespan < m.getTasksSize ())
			makespan = m.getTasksSize ();
		if (this->verbose) {
			std::cout << m.toString () << std::endl;
		}
	}

	if (this->verbose)
		std::cout << std::endl;

	return makespan;
}

void Scheduler::setVerbose (bool verbose) {
	this->verbose = verbose;
}

bool Scheduler::getVerbose () {
	return this->verbose;
}
