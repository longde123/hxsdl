#ifndef SDL_Support
#define SDL_Support
#ifdef _WIN32
#	include <windows.h>
#	undef RegisterClass
#	define IS_WINDOWS true
#else
#	define IS_WINDOWS false
#	define GL_GLEXT_PROTOTYPES
#	define timeBeginPeriod(_)
#	define timeEndPeriod(_)
#endif

#ifdef __APPLE__
#	include <OpenGL/glu.h>
#else
#	include <GL/GLU.h>
#endif

#include <SDL.h>
#include <glext.h>
#define failwith(v)	hx::Throw(HX_CSTRING(v))
#undef main
#undef NO_ERROR
#undef DELETE

#define LOCAL(e,t)	t e
#define LOCALINIT(l,v) l = v
#define ADDR(e)	&(e)
#define VOIDPTR(v)	((void*)(v))
#define FLOATPTR(v)	((float*)(v))
#define FIELD(a,b)	a->b

#endif