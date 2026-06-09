#include "doctor_data.h"
#include <string>

heaven::Vessel::Vessel(std::string name, int num) {
    name_ = name;
    generation = num;
}

heaven::Vessel::Vessel(std::string name, int num, star_map::System system) {
    name_ = name;
    generation = num;
    current_system = system;
}

heaven::Vessel heaven::Vessel::replicate(std::string name) {
    int new_generation = generation + 1;  // fixed: was generation_ (typo)
    Vessel new_vessel{name, new_generation, current_system};
    return new_vessel;
}

void heaven::Vessel::make_buster() {
    busters += 1;
}

bool heaven::Vessel::shoot_buster() {
    if (busters == 0) {
        return false;
    }
    busters -= 1;
    return true;
}

std::string heaven::get_older_bob(heaven::Vessel a, heaven::Vessel b) {
    if (a.generation <= b.generation) {
        return a.name_;
    }
    return b.name_;
}

bool heaven::in_the_same_system(heaven::Vessel a, heaven::Vessel b) {
    return a.current_system == b.current_system;
}