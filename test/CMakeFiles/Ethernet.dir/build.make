# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kaisei/Work/socket/mystack/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kaisei/Work/socket/mystack/test

# Include any dependencies generated for this target.
include CMakeFiles/Ethernet.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Ethernet.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Ethernet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ethernet.dir/flags.make

CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o: CMakeFiles/Ethernet.dir/flags.make
CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o: /home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c
CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o: CMakeFiles/Ethernet.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kaisei/Work/socket/mystack/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o -MF CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o.d -o CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o -c /home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c

CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c > CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.i

CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c -o CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.s

# Object files for target Ethernet
Ethernet_OBJECTS = \
"CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o"

# External object files for target Ethernet
Ethernet_EXTERNAL_OBJECTS =

libEthernet.a: CMakeFiles/Ethernet.dir/home/kaisei/Work/socket/mystack/Ethernet/Arp_Table.c.o
libEthernet.a: CMakeFiles/Ethernet.dir/build.make
libEthernet.a: CMakeFiles/Ethernet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kaisei/Work/socket/mystack/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libEthernet.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Ethernet.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ethernet.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ethernet.dir/build: libEthernet.a
.PHONY : CMakeFiles/Ethernet.dir/build

CMakeFiles/Ethernet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ethernet.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ethernet.dir/clean

CMakeFiles/Ethernet.dir/depend:
	cd /home/kaisei/Work/socket/mystack/test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kaisei/Work/socket/mystack/test /home/kaisei/Work/socket/mystack/test /home/kaisei/Work/socket/mystack/test /home/kaisei/Work/socket/mystack/test /home/kaisei/Work/socket/mystack/test/CMakeFiles/Ethernet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ethernet.dir/depend

