#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> res {};

    for (int i = 0; i < student_scores.size(); ++i) {
        int score = static_cast<int>(student_scores[i]);
        res.emplace_back(score);
    }

    return res;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;

    for (int i = 0; i < student_scores.size(); ++i) {
        if (student_scores[i] <= 40) {
            count += 1;
        }
    }

    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> res {41};

    int range_size = highest_score - 40;
    double quad_size = range_size / 4;

    for (int i = 1; i < 4; ++i) {
        int new_threshold = static_cast<int>(res[i - 1] + quad_size);
        res[i] = new_threshold;
    }

    return res;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> res {};

    for (int i = 0; i < student_scores.size(); ++i) {
        std::string rank = std::to_string(i + 1);
        std::string name = student_names[i];
        std::string score = std::to_string(student_scores[i]);

        std::string row = rank + ". " + name + ": " + score;
        res.emplace_back(row);
    }

    return res;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); ++i) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
