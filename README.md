# static_library
This repository shows an example of using static libraries in C++. We will use CMake and Visual Studio on Windows operating system. It is also shown how a library requires another library.<br>
Specifically, mathematics is the library statically used by use_mathematics and by power (another library); power is the library statically used by use_power.

Instructions:
<pre>
	Open CMake
		source code: ./mathematics
		binaries: ./mathematics/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		mathematics.lib is created in ./mathematics/build/Debug

	Open CMake
		source code: ./use_mathematics
		binaries: ./use_mathematics/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		use_mathematics.exe is created in ./use_mathematics/build/Debug

	Open the terminal and run use_mathematics.exe

	Open CMake
		source code: ./power
		binaries: ./power/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		power.lib is created in ./power/build/Debug

	Open CMake
		source code: ./use_power
		binaries: ./use_power/build
		generate Visual Studio solution

	Open Visual Studio:
		build solution
		use_power.exe is created in ./use_power/build/Debug

	Open the terminal and run use_power.exe
</pre>
