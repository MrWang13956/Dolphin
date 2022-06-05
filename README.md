# 一 源码

## 1.下载

repo:  https://storage.googleapis.com/git-repo-downloads/repo

export REPO_URL="https://mirrors.tuna.tsinghua.edu.cn/git/git-repo/"

./repo init -u https://source.codeaurora.org/external/imx/imx-manifest -b imx-linux-zeus -m imx-5.4.47-2.2.0.xml

./repo sync -c -j4 --no-tags

## 2.编译

DISTRO=fsl-imx-fb MACHINE=imx6ull14x14evk source imx-setup-release.sh -b build

bitbake imx-image-multimedia

# 二 开发

./repo init -u git@github.com:MrWang13956/Dolphin.git -b manifests -m default.xml

./repo sync -c -j4 --no-tags
