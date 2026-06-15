#include "lasagna_master.h"
#include <string>
#include <vector>
#include <cstddef>

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(const std::vector<std::string>& layers, const int avg_preparation_time) {
        return layers.size() * avg_preparation_time;
    }

    amount quantities(const std::vector<std::string>& layers) {
        amount result {0, 0.0};

        for (std::string layer : layers) {
            if (layer == "noodles") {
                result.noodles += 50;
            } else if (layer == "sauce") {
                result.sauce += 0.2;
            }
        }

        return result;
    }

    void addSecretIngredient(std::vector<std::string>& yourRecipe, const std::vector<std::string>& friendsRecipe) {
        yourRecipe[yourRecipe.size() - 1] = friendsRecipe[friendsRecipe.size() - 1];
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions) {
        double multiplier = portions / 2.0;
        std::vector<double> res {};

        for (std::size_t i = 0; i < quantities.size(); ++i) {
            res.emplace_back(quantities[i] * multiplier);
        }

        return res;
    }

    void addSecretIngredient(std::vector<std::string>& yourRecipe, std::string secretIngredient) {
        yourRecipe[yourRecipe.size() - 1] = secretIngredient;
    }
}  // namespace lasagna_master
