# eltoken
eltoken

# Ubuntu系统(Ubuntu14.04)

1.准备工作

    安装依赖包, 使用以下命令:
    
    apt-get install libdb-dev libdb++-dev libboost-all-dev libssl-dev libminiupnpc-dev libzmq3-dev libevent-dev
    
2.编译eltokend

    进入到src, 使用以下命令:
    
    make –f makefile.unix
    
    strip eltokend
    
    至此eltokend编译结束
    
3.编译钱包eltoken

    安装QT依赖包, 然后编译钱包, 使用以下命令:
    
    apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libqrencode-dev
    
    进入到eltoken.pro文件所在目录(src的上一级)
    
    /usr/lib/x86_64-linux-gnu/qt5/bin/qmake eltoken.pro
    
    make
    
    编译结束将在eltoken.pro同一级目录下看到钱包文件eltoken
