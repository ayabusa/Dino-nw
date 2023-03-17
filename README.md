# Dino 🦖

This Epsilon app (Numworks) will give you a fun game to play !

## Install the game

To install this game you will need to:
1. Download the latest `Dino.nwa` file from the release page
2. Then you can go the [numworks app](https://my.numworks.com/apps) page and send the nwa file to your calculator

## How to play the game

Press the OK button or the UP arrow to jump, and use the RETURN button or the DOWN arrow to crouch !

## Build and run the app

To build this sample app, you will need to install the [embedded ARM toolchain](https://developer.arm.com/Tools%20and%20Software/GNU%20Toolchain) and [nwlink](https://www.npmjs.com/package/nwlink).

```shell
# first install gcc ARM then :
npm install -g nwlink
compile.bat # Or equivalent on you OS
```

This app was built using the Makefile of [this app](https://github.com/nwagyu/periodic)
