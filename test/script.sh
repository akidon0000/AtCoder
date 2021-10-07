alias g++='g++-10'
echo "---------------エラー内容---------------"
# コンパイル
g++ -Wall -std=c++14 ./test.cpp
echo "---------------実行結果-----------------"
./a.out

# 新しくできたファイルを削除
rm -f a.out


# Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/c++/4.2.1
# Apple LLVM version 10.0.1 (clang-1001.0.46.4)
# Target: x86_64-apple-darwin18.7.0
# Thread model: posix
# InstalledDir: /Library/Developer/CommandLineTools/usr/bin
