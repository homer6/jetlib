Altumo Jet Library
------------------

A general-purpose C++ library with a focus on web development and internet systems programming. MIT License.
This library is very new and not polished at all.

If you're starting a new project, you might want to use
git://github.com/homer6/blank_jet.git instead of cloning this repository directly.
Blank_jet includes this repository as a submodule. This repository is for
compiling the library files or inclusion in an existing project as a submodule.



Currently Available Modules
---------------------------

  - File
  - Directory
  - Utf8String (currenlty only support ASCII string, not Utf8)
  - UnsignedInt8/16/32/64 (Draft)
  - Int8/16/32/64 (Draft)



Near Future Roadmap
-------------------

 - FileListener
 - DirectoryListener
 - Utf32String
 - AsciiString



Requirements
------------

    sudo apt-get install cmake g++ make



Download and Install
--------------------

    # Alternatively, you may want to add it as a submodule to an existing project,
    # instead of cloning it.
    git clone git://github.com/homer6/jetlib.git
    cd jetlib

    #Note: you don't need all submodules.
    #  > The lib submodule is only needed if you're compiling the library.
    #  > The docs submodule is only needed if want to have the docs available.
    #  > The test submodule is only needed if want to compile and run the unit tests.
    git submodule update --init --recursive

    cmake .
    make

    sudo ln -fs `pwd`/build/libjet_shared.so /usr/lib/libjet_shared.so
    sudo ln -fs `pwd`/build/libjet_static.a /usr/lib/libjet_static.a



Running
-------

    jm simple.jm



Systems Successfully Run On
---------------------------

    - Linux 2.6.32, gcc version 4.4.3, ubuntu (lucid)

