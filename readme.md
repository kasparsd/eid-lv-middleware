# Latvia eID Middleware

## Building on OS X

Install the required packages:

```
$ brew install autoconf automake pkgconfig glibtoolize
```

and do the build:

```
$ ./build/build_macosx
```

## Building on Windows

Prerequisites:

  - Microsoft Visual C++ 2010
  - Inno Setup 5.4.3 Unicode (http://www.jrsoftware.org/isinfo.php)
  - 7zip (http://www.7-zip.org)

Instructions : 

  - Decompress the 7zip archive inside "openssl" folder". You should now have three folders inside it name "include", "lib" and "x64".
  - Decompress the 7zip archive inside "wxWidgets" folder. You should have now two folders inside it named "include" and "lib"
  - Open the Visual C++ solution build\build.sln
  - Select the configuration Release\WIN32 and then choose "Rebuild Solution" from the build menu
  - Select the configuration Release\x64 and then choose "Rebuild Solution" from the build menu
  - Open the file LatviaEIDSetup.iss with InnoSetup and compile the script
  - the setup file will be located at bin\LatviaEIDSetup.exe
