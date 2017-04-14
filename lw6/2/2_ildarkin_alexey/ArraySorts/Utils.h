#pragma once

namespace utils
{

std::vector<int> ReadVectorFromFile(const std::string &fileName);
void PrintVector(const std::vector<int> &vec);
double NotifyExecutionTime(const std::function<void()> &fn);

}