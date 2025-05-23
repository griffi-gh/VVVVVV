#pragma once
#ifdef __PSP__
#include <stdint.h>

class SoundTrack {
    public:
        static void Init(uint32_t sample_rate);
        static void Destroy();

        static void Pause();
        static void Resume();
        static bool IsPaused();
        static void SetVolume(int soundVolume);

        SoundTrack(const char* filePath);

        void Dispose();
        void Play();
};

class MusicTrack {
    public:
        static void Pause();
        static void Resume();
        static bool IsPaused();
        static void SetVolume(int soundVolume);

        MusicTrack(const char* filePath);

        void Dispose();
        bool Play(bool loop);
};

#endif
