#ifndef STOCKWATCH_UTIL_IO_IO_H_
#define STOCKWATCH_UTIL_IO_IO_H_

#include <string>

namespace stockwatch {
namespace util {
namespace io {

bool ReadFromFile(const std::string& filename, std::string* contents);
bool WriteToFile(const std::string& filename, const std::string& contents);

}  // namespace io
}  // namespace util
}  // namespace stockwatch

#endif  // STOCKWATCH_UTIL_IO_IO_H_