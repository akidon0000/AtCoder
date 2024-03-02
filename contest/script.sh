# !/bin/sh
# 第一引数 問題番号
#  sh script.sh a

# intelで使用する場合はscript.shの「alias g++='g++-10'」をリマーク
# alias g++='g++-10'

# 問題番号 引数
questionNumber="$1"

contestURL="https://atcoder.jp/contests/abc342/tasks/abc342"

# AtCoderのURL
URL="${contestURL}_${questionNumber}"

# サンプルデータダウンロード
oj login "${URL}"
oj dl "${URL}"


echo ""
echo "---------------情報----------------------"

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
