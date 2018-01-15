Moodcoin Version 1.0

Moodcoin integration/staging tree
================================

http://www.moodcoin.org

Copyright (c) 2015 Moodcoin Developers

What is Moodcoin?
----------------
X13
PoS Minimum - 24 Hours
PoS Maximum - Unlimited
PoS Interest - 5% Annually 
500 Blocks for Moodcoin to be Minted/Mature
30 Blocks for Moodcoin Transaction Confirmation
2 Minute Target Spacing
6 Blocks for Full Confirmation
Difficulty Retargets Every Block
250,000,000 Total Coins

P2P Port = 11085
RPC Port = 21085
Testnet Port = 31085

For more information, as well as an immediately useable, binary version of
the Moodcoin client sofware, see http://www.moodcoin.org

Build Instructions for QT5 Linux Wallet
======================================
Create a folder named Moodcoin in /home/ and unpack the contents of ~/Moodcoin-master to that folder.

Install dependencies via Terminal:

$ sudo apt-get install make libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler build-essential libboost-dev libboost-all-dev libboost-system-dev libboost-filesystem-dev libboost-program-options-dev libboost-thread-dev libssl-dev libdb++-dev libminiupnpc-dev libevent-dev libcurl4-openssl-dev git libpng-dev qrencode libqrencode-dev

//In terminal navigate to the Moodcoin folder.

$ cd /home/Moodcoin

//Enter into the terminal:

$ qmake -qt=qt5 "USE_QRCODE=1" "USE_UPNP=-"

//Then:

$ make

This will compile and build the QT Wallet which takes a little while, please be patient.

When finished you will have a file called Moodcoin-QT - Simply Double Click

//end of guide


Build Instructions for Terminal Based Linux Wallet
===================================================
//Create a folder named Moodcoin in /home/ and unpack the contents of ~/Moodcoin-master to that folder.

//Install dependencies via Terminal:

$ sudo apt-get install build-essential libboost-all-dev libcurl4-openssl-dev libdb5.1-dev libdb5.1++-dev qt-sdk make 

//In terminal navigate to the Moodcoin folder.

$ cd /home/Moodcoin/src/

//Enter into the terminal:

$ make -f makefile.unix "USE_UPNP=-"

//This will produce a file named moodcoind which is the command line instance of Moodcoin-qt

//Now type:

$ strip moodcoind

//When finished you will have a file called moodcoind

//To run Moodcoin

$ ./moodcoind & 

//It will complain about having no moodcoin.conf file, we'll edit the one provided and move it into place

$ cd ..
$ nano moodcoin.conf

//Edit the Username and Password fields to anything you choose (but remember them) then save the file

$ mv moodcoin.conf /home/Moodcoin/src/
$ cd src/
$ ./moodcoind &

//The server will start. Here are a few commands, google for more.

$ ./moodcoind getinfo
$ ./moodcoind getmininginfo
$ ./moodcoind getnewaddresss

//end of guide


License
-------

Moodcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Moodcoin
development team members simply pulls it.

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/Moodcoin-project/Moodcoin) are created
regularly to indicate new official, stable release versions of Moodcoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake Moodcoin_QT_TEST=1 -o Makefile.test Moodcoin-qt.pro
    make -f Makefile.test
    ./Moodcoin-qt_test
    
//End of ReadMe
