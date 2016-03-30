lib_LTLIBRARIES=libbengine_core.la
libbengine_core_la_CXXFLAGS=-Iextern -ffast-math $(SDL2_CFLAGS) $(OPENGL_CFLAGS)
libbengine_core_la_LDFLAGS=$(OPENGL_LIBS) $(SDL2_LIBS)
libbengine_core_la_SOURCES=\
	extern/glad/glad.c\
	extern/glad/glad.h\
	core/image.cc\
	core/image.h\
	core/image.inl\
	core/log.h\
	core/node.h\
	core/node.cc\
	core/rectangle.h\
	core/rectangle.cc\
	core/port.h\
	core/port.cc\
	core/sprite.h\
	core/sprite.cc\
	core/matrix3.h\
	core/matrix3.cc\
	core/vector2.h\
	core/vector2.cc\
	core/window.h\
	core/window.cc\
	core/texture.h\
	core/texture.cc\
	core/transform.h\
	core/transform.cc\
	core/precompile.h\
	core/precompile.cc\
	core/camera.h\
	core/camera.cc

