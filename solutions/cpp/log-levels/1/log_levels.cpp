#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int start_idx = line.find(" ") + 1;
    return line.substr(start_idx);
}

std::string log_level(std::string line) {
    // return the log level
    int end_idx = line.find("]") - 1;
    return line.substr(1, end_idx);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string log_msg = message(line);
    std::string log_lvl = log_level(line);

    return log_msg + " (" + log_lvl + ")";
}
}  // namespace log_line
