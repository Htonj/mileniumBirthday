#pragma once

#include <string>

class Event {
public:
    Event(const std::string& date, const std::string& description);

    std::string getDescription() const;
    std::string getDate() const;

private:
    std::string date;
    std::string description;
};