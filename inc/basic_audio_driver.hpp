#pragma once
#ifndef __BASIC_AUDIO_DRIVER_HPP__
#define __BASIC_AUDIO_DRIVER_HPP__

#include <alsa/asoundlib.h>

#include <algorithm>
#include <atomic>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <vector>

namespace tita
{
namespace audio
{
class BASIC_AUDIO_DRIVER
{
public:
  BASIC_AUDIO_DRIVER() { this->is_running.store(true); };
  ~BASIC_AUDIO_DRIVER() = default;

  int test();

private:
  std::atomic<bool> is_running{false};
};
}  // namespace audio
}  // namespace tita

#endif  // __BASIC_AUDIO_DRIVER_HPP__