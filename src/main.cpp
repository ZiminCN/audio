#include <unistd.h>

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

#include "basic_audio_driver.hpp"

int main(int argc, char ** argv)
{
  std::cout << "Hello World!" << std::endl;

  std::shared_ptr<tita::audio::BASIC_AUDIO_DRIVER> audio_driver_api =
    std::make_shared<tita::audio::BASIC_AUDIO_DRIVER>();

  while (1) {
    audio_driver_api->test();
    sleep(2);
  }

  return 0;
}