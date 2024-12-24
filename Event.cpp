#include "Event.h"

Event::Event(const std::string& date, const std::string& description) 
    : date(date), description(description) {}

std::string Event::getDescription() const {
    return description;
}

std::string Event::getDate() const {
    return date;
}