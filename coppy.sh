# !/bin/zsh
# 第一引数 コンテストレベル
# 第二引数 コンテスト番号
# cd /Users/akidon/program/atcoder
# sh coppy.sh abc 191

# 現在のパスを取得  "/Users/akidon/program/atcoder/abc/190"
path=$(cd $(dirname $0); pwd)

# コンテストレベル
contestLevel="$1"

# コンテスト番号
contestNumber="$2"

# コピー 上書き時警告表示
# cp -r -i coppy ${contestNumber}
if [ -e ${path}"/"${contestLevel}"/"${contestNumber} ];then
  echo "同じ名前のファイルが以下のパスで見つかりました"
  echo ${path}"/"${contestLevel}"/"${contestNumber}
  read -p "上書きしますか？ (y/N): " yn
  case "$yn" in
    [yY]*) rm -rf ${path}"/"${contestLevel}"/"${contestNumber}
              cp -r coppy ${contestNumber}
              mv ${contestNumber} ${contestLevel}
              echo "完了しました";;
    *) echo "キャンセルしました";;
  esac
else
  cp -r -i coppy ${contestNumber}
  mv ${contestNumber} ${contestLevel}
  echo "完了しました"
fi
