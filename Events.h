#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Event.h"


class Events {
public:
	void loadFromFile(std::string fileName);
	std::vector<Event> getEvents();
private:
	std::vector<Event> events;
};