#include "power_of_troy.h"
#include <utility>

namespace troy {
    void give_new_artifact(human& person, std::string item) {
        artifact new_item {item};
        person.possession = std::make_unique<artifact>(new_item);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& artifact_a, std::unique_ptr<artifact>& artifact_b) {
        std::swap(artifact_a, artifact_b);
    }

    void manifest_power(human& person, std::string ability) {
        power new_power {ability};
        person.own_power = std::make_shared<power>(new_power);
    }

    void use_power(human& caster, human& castee) {
        castee.influenced_by = caster.own_power;
    }

    int power_intensity(human& person) {
        if (person.own_power == nullptr) {
            return 0;
        }

        return person.own_power.use_count();
    }
}  // namespace troy
