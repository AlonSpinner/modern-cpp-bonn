#pragma once
#include <string>
#include "strategy.h"

namespace igg {

class PpmIoStrategy : public IoStrategy {
  public: bool Write(const std::string& file_name, const ImageData& data) const override;
  public: ImageData Read(const std::string& file_name) const override;
};

}  // namespace igg
