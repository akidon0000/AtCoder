# !/bin/zsh
# 第一引数 問題番号
#  cd abc/190

alias g++='g++-10'

# 現在のパスを取得
path=$(cd $(dirname $0); pwd)

# コンテストレベル
contestLevel=${path##*atcoder/}
contestLevel=${contestLevel%/*}

# コンテスト番号
contestNumber=${path#*c/}

# 問題番号 引数
questionNumber="$1"


if [ $# -eq 2 ];then
  echo "---------------エラー内容---------------"
  # コンパイル
  g++ -Wall -std=c++14 ./${questionNumber}.cpp
  echo "---------------入力内容-----------------"
  ./${questionNumber}.out
  echo "----------------------------------------"
  exit
fi



# AtCoderのURL
URL="https://atcoder.jp/contests/${contestLevel}${contestNumber}/tasks/${contestLevel}${contestNumber}_${questionNumber}"

# サンプルデータダウンロード
oj dl "${URL}"


echo ""
echo "---------------情報----------------------"

echo "パス : "${path}
echo "大会レベル : "${contestLevel}
echo "大会番号 : "${contestNumber}
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
