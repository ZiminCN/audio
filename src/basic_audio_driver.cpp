#include "basic_audio_driver.hpp"

namespace tita
{
namespace audio
{

int BASIC_AUDIO_DRIVER::test()
{
  int ret = 0;

  snd_pcm_t * pcm_handle = nullptr;
  std::shared_ptr<snd_pcm_t> test_pcm_handle = nullptr;

  const char PCM_PLAYBACK_DEV[] = "hw:2,0";

  ret = snd_pcm_open(&pcm_handle, PCM_PLAYBACK_DEV, SND_PCM_STREAM_PLAYBACK, 0);

  if (0 > ret) {
    std::cout << "[Debug]: snd_pcm_open error" << std::endl;
    fprintf(stderr, "snd_pcm_open error: %s: %s\n", PCM_PLAYBACK_DEV, snd_strerror(ret));
    return -1;
  } else {
    std::cout << "[Debug]: seems success" << std::endl;
  }

  test_pcm_handle =
    std::shared_ptr<_snd_pcm>(pcm_handle, [](snd_pcm_t * ptr) { snd_pcm_close(ptr); });

  return 0;
}

}  // namespace audio
}  // namespace tita