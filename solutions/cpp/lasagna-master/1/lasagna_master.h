#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, const int avg_preparation_time=2);

amount quantities(const std::vector<std::string>& layers);

void addSecretIngredient(std::vector<std::string>& yourRecipe, const std::vector<std::string>& friendsRecipe);

std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions);

void addSecretIngredient(std::vector<std::string>& yourRecipe, std::string secretIngredient);

}  // namespace lasagna_master
