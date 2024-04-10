#include <Smooth.h>
#include <mozzi_analog.h>
#include <RollingAverage.h>
#include <AudioConfigSTM32duino.h>
#include <Stack.h>
#include <teensyPinMap.h>
#include <CapPoll.h>
#include <mozzi_rand.h>
#include <Oscil.h>
#include <CircularBuffer.h>
#include <mozzi_midi.h>
#include <meta.h>
#include <AudioConfigRP2040.h>
#include <WavePacketSample.h>
#include <hardware_defines.h>
#include <Metronome.h>
#include <IntMap.h>
#include <AudioConfigStandard9bitPwm.h>
#include <StateVariable.h>
#include <WavePacket.h>
#include <mult16x8.h>
#include <IntegerType.h>
#include <AudioConfigESP32.h>
#include <Line.h>
#include <RollingStat.h>
#include <EventDelay.h>
#include <WaveShaper.h>
#include <AutoMap.h>
#include <MetaOscil.h>
#include <SampleHuffman.h>
#include <DCfilter.h>
#include <MozziGuts.h>
#include <AudioDelayFeedback.h>
#include <PDResonant.h>
#include <AudioConfigSTM32.h>
#include <ResonantFilter.h>
#include <mozzi_fixmath.h>
#include <AudioConfigStandardPlus.h>
#include <mozzi_utils.h>
#include <RCpoll.h>
#include <AudioConfigRenesas.h>
#include <AudioOutput.h>
#include <mult32x16.h>
#include <OverSample.h>
#include <AudioConfigTeensy3_12bit.h>
#include <LowPassFilter.h>
#include <WaveFolder.h>
#include <Portamento.h>
#include <AutoRange.h>
#include <AudioConfigTeensy4.h>
#include <ControlDelay.h>
#include <AudioDelay.h>
#include <primes.h>
#include <Ead.h>
#include <Phasor.h>
#include <AudioConfigHiSpeed14bitPwm.h>
#include <AudioConfigMBED.h>
#include <ReverbTank.h>
#include <ADSR.h>
#include <mozzi_pgmspace.h>
#include <mult16x16.h>
#include <mozzi_config.h>
#include <twi_nonblock.h>
#include <AudioConfigESP.h>
#include <Sample.h>
#include <AudioConfigSAMD21.h>

/*  Example playing a sinewave at a set frequency,
    using Mozzi sonification library.

    Demonstrates the use of Oscil to play a wavetable.

    Circuit: Audio output on digital pin 9 on a Uno or similar, or
    DAC/A14 on Teensy 3.1, or
    check the README or http://sensorium.github.io/Mozzi/

    Mozzi documentation/API
		https://sensorium.github.io/Mozzi/doc/html/index.html

		Mozzi help/discussion/announcements:
    https://groups.google.com/forum/#!forum/mozzi-users

    Tim Barrass 2012, CC by-nc-sa.
*/

#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/sin2048_int8.h> // sine table for oscillator

// use: Oscil <table_size, update_rate> oscilName (wavetable), look in .h file of table #included above
Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> aSin(SIN2048_DATA);

// use #define for CONTROL_RATE, not a constant
#define CONTROL_RATE 64 // Hz, powers of 2 are most reliable


void setup(){
  startMozzi(CONTROL_RATE); // :)
  aSin.setFreq(440); // set the frequency
}


void updateControl(){
  // put changing controls in here
}


AudioOutput_t updateAudio(){
  return MonoOutput::from8Bit(aSin.next()); // return an int signal centred around 0
}


void loop(){
  audioHook(); // required here
}
