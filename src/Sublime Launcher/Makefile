SublimeLauncher.exe: SublimeLauncher.cpp
	x86_64-w64-mingw32-gcc -municode -Wl,-subsystem,windows -O2 -o $@ $^ -s

clean:
	rm -f SublimeLauncher.exe
