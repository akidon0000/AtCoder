# !/bin/sh
# 第一引数 問題番号
#  cd abc/190

alias g++='g++-10'

# 問題番号 引数
questionNumber="$1"


if [ $# -eq 2 ];then
  echo "---------------エラー内容---------------"
  # コンパイル
  g++ -Wall -std=c++14 ./${questionNumber}.cpp
  echo "---------------入力内容-----------------"
  ./a.out
  echo "----------------------------------------"
  rm -f a.out
  exit
fi



# AtCoderのURL
URL="https://atcoder.jp/contests/typical90/tasks/typical90_${questionNumber}"

# サンプルデータダウンロード
# oj login "${URL}"
oj dl "${URL}"


echo ""
echo "---------------情報----------------------"

echo "問題番号 : "${questionNumber}
echo "URL : "${URL}
echo ""

echo "---------------エラー内容---------------"
# コンパイル
g++ -Wall -std=c++14 ./${questionNumber}.cpp

echo "----------------------------------------"
echo ""

# サンプルテスト
oj test

# 新しくできたファイルを削除
rm -f a.out
rm -rf test
