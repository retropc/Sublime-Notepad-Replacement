## Sublime Text Launcher

### Introduction
This small utility provides the means to replace Notepad.exe on Windows with Sublime.

More information about Sublime Text can be found on [the Sublime Text website](http://www.sublimetext.com/)

### Installation

* Build using make
* Copy SublimeLauncher.exe, ReplaceNotepad.bat and RevertNotepadRedirection.bat to the same directory as Sublime Text itself.
* Run ReplaceNotepad.bat. You will need to "Run as Administrator" if using Vista/Win7.

Now when the system wants to launch Notepad it will launch Sublime Text instead.

Enjoy!

### Uninstallation

* If you ever want to revert changes and return to Notepad, run RevertNotepadRedirection.bat.
