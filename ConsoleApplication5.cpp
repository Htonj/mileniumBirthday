#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Event.h"
#include "Events.h"

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const std::string FILENAME = "Events";
    Events events;

    events.loadFromFile(FILENAME);

    for (const auto& event : events.getEvents()) {
        std::cout << "Дата: " << event.getDate() << ", Описание: " << event.getDescription() << std::endl;
    }
}
