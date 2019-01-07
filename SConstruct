#-*- coding: utf-8 -*-

env = DefaultEnvironment()

Program ("econSimul", [Glob('core/*.cc')] , CPPPATH=['.'],\
  CCFLAGS = ['-std=c++17', '-ggdb', '-D DEBUG'# , '-O3' \
  ])

Program('unittests', \
# add all test files and googletest code
[Glob('tests/*.cc'), Glob('classes/*.cc'), '../googletest/googletest/src/gtest_main.cc', '../googletest/googletest/src/gtest-all.cc'],\
LIBS=['pthread'],\
# setup the proper include path for google test
CPPPATH=['../googletest/googletest/include/', '.', '../googletest/googletest/'], CCFLAGS = ['-std=c++17', '-g'])
