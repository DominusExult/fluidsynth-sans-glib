#ifndef CONFIG_H
#define CONFIG_H

/* Define to enable ALSA driver */
/* #undef ALSA_SUPPORT */

/* Define to activate sound output to files */


/* whether or not we are supporting CoreAudio */


/* whether or not we are supporting CoreMIDI */


/* whether or not we are supporting DART */
/* #undef DART_SUPPORT */

/* Define if building for Mac OS X Darwin */

/* Define if D-Bus support is enabled */


/* Soundfont to load automatically in some use cases */
#define DEFAULT_SOUNDFONT "default.sf2"

/* Define to enable FPE checks */
/* #undef FPE_CHECK */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* whether or not we are supporting lash */
/* #undef HAVE_LASH */

/* Define if systemd support is enabled */
/* #undef SYSTEMD_SUPPORT */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/soundcard.h> header file. */
/* #undef HAVE_LINUX_SOUNDCARD_H */

/* Define to 1 if you have the <machine/soundcard.h> header file. */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define if compiling the mixer with multi-thread support */
#define ENABLE_MIXER_THREADS 1

/* Define if compiling with openMP to enable parallel audio rendering */
/* #undef HAVE_OPENMP */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the inet_ntop() function. */
#define HAVE_INETNTOP 1

/* Define to enable JACK driver */
/* #undef JACK_SUPPORT */

/* Define to enable PipeWire driver */
/* #undef PIPEWIRE_SUPPORT */

/* Include the LADSPA Fx unit */
/* #undef LADSPA */

/* Define to enable IPV6 support */
#define IPV6_SUPPORT 1

/* Define to enable network support */
#define NETWORK_SUPPORT 1

/* Defined when fluidsynth is build in an automated environment, where no MSVC++ Runtime Debug Assertion dialogs should pop up */
/* #undef NO_GUI */

/* libinstpatch for DLS and GIG */
/* #undef LIBINSTPATCH_SUPPORT */

/* libsndfile has ogg vorbis support */
/* #undef LIBSNDFILE_HASVORBIS */

/* Define to enable libsndfile support */
/* #undef LIBSNDFILE_SUPPORT */

/* Define to enable MidiShare driver */
/* #undef MIDISHARE_SUPPORT */

/* Define if using the MinGW32 environment */
/* #undef MINGW32 */

/* Define to enable OSS driver */
/* #undef OSS_SUPPORT */

/* Define to enable OPENSLES driver */
/* #undef OPENSLES_SUPPORT */

/* Define to enable Oboe driver */
/* #undef OBOE_SUPPORT */

/* Name of package */
#define PACKAGE "fluidsynth"

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the version of this package. */
/* #undef PACKAGE_VERSION */

/* Define to enable PortAudio driver */
/* #undef PORTAUDIO_SUPPORT */

/* Define to enable PulseAudio driver */
/* #undef PULSE_SUPPORT */

/* Define to enable DirectSound driver */
/* #undef DSOUND_SUPPORT */

/* Define to enable Windows WASAPI driver */
/* #undef WASAPI_SUPPORT */

/* Define to enable Windows WaveOut driver */
/* #undef WAVEOUT_SUPPORT */

/* Define to enable Windows MIDI driver */
/* #undef WINMIDI_SUPPORT */

/* Define to enable SDL2 audio driver */
/* #undef SDL2_SUPPORT */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Soundfont to load for unit testing */
#define TEST_SOUNDFONT "/Users/Dominus/code/git/fluidsynth-sans-glib/sf2/VintageDreamsWaves-v2.sf2"

/* Soundfont to load for UTF-8 unit testing */
#define TEST_SOUNDFONT_UTF8_1 "/Users/Dominus/code/git/fluidsynth-sans-glib/sf2/\xE2\x96\xA0VintageDreamsWaves-v2\xE2\x96\xA0.sf2"
#define TEST_SOUNDFONT_UTF8_2 "/Users/Dominus/code/git/fluidsynth-sans-glib/sf2/VìntàgèDrèàmsWàvès-v2.sf2"
#define TEST_MIDI_UTF8 "/Users/Dominus/code/git/fluidsynth-sans-glib/test/èmpty.mid"

/* SF3 Soundfont to load for unit testing */
#define TEST_SOUNDFONT_SF3 "/Users/Dominus/code/git/fluidsynth-sans-glib/sf2/VintageDreamsWaves-v2.sf3"

/* Define to enable SIGFPE assertions */
/* #undef TRAP_ON_FPE */

/* Define to do all DSP in single floating point precision */
/* #undef WITH_FLOAT */

/* Define to profile the DSP code */
/* #undef WITH_PROFILING */

/* Define to use the readline library for line editing */


/* Define if the compiler supports VLA */ 
#define SUPPORTS_VLA 1 

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to 1 if you have the sinf() function. */
#define HAVE_SINF 1

/* Define to 1 if you have the cosf() function. */
#define HAVE_COSF 1

/* Define to 1 if you have the fabsf() function. */
#define HAVE_FABSF 1

/* Define to 1 if you have the powf() function. */
#define HAVE_POWF 1

/* Define to 1 if you have the sqrtf() function. */
#define HAVE_SQRTF 1

/* Define to 1 if you have the logf() function. */
#define HAVE_LOGF 1

/* Define to 1 if you have the socklen_t type. */
#define HAVE_SOCKLEN_T 1

#endif /* CONFIG_H */
