#pragma once

#include "AudioTools/CoreAudio/AudioTypes.h"
#include "AudioTools/CoreAudio/Buffers.h"
#include "AudioTools/CoreAudio/BaseConverter.h"
#include "AudioTools/CoreAudio/AudioLogger.h"
#include "AudioTools/CoreAudio/AudioStreams.h"
#include "AudioTools/CoreAudio/AudioStreamsConverter.h"
#include "AudioTools/CoreAudio/AudioOutput.h"
#include "AudioTools/CoreAudio/VolumeStream.h"
#include "AudioTools/CoreAudio/AudioIO.h"
#include "AudioTools/CoreAudio/ResampleStream.h"
#include "AudioTools/CoreAudio/ResampleStreamT.h"
#include "AudioTools/CoreAudio/StreamCopy.h"

#ifdef FULL_LIBRARY
    #include "AudioTools/CoreAudio/MusicalNotes.h"
#endif

#include "AudioTools/CoreAudio/Fade.h"
#include "AudioTools/CoreAudio/Pipeline.h"
#include "AudioTools/CoreAudio/AudioPlayer.h"
#include "AudioTools/CoreAudio/AudioTimer.h"
#include "AudioTools/CoreAudio/AudioFilter.h"
#include "AudioTools/CoreAudio/I2SStream.h"

#ifdef FULL_LIBRARY
    #include "AudioTools/CoreAudio/AudioPWM.h"
#endif

#include "AudioTools/CoreAudio/AnalogAudioStream.h"

#ifdef FULL_LIBRARY
    #include "AudioTools/CoreAudio/AudioEffects.h"
#endif

#include "AudioTools/CoreAudio/AudioMetaData.h"

#ifdef FULL_LIBRARY
    #include "AudioTools/CoreAudio/AudioHttp.h"
#endif

#include "AudioTools/CoreAudio/FrequencyDetector.h"

#ifdef FULL_LIBRARY
    #include "AudioTools/CoreAudio/GoerzelStream.h"
#endif
