#include "Events.h"

void Events::loadFromFile(std::string fileName) {
    std::ifstream inputFile(fileName);
    std::string line;

    while (std::getline(inputFile, line)) {
        std::istringstream lineStream(line);
        std::string date;
        std::string description;

        std::getline(lineStream, date, ' ');

        std::getline(lineStream, description);

        events.push_back(Event(date, description));
    }

    inputFile.close();
}

std::vector<Event> Events::getEvents() {
	return events;
}