# iOS程序员的杂货铺

在线阅读：[https://binaryparadise.gitbook.io/objective-c](https://binaryparadise.gitbook.io/objective-c)

## 开发环境搭建[Catalina]

### 准备工作

#### 安装 [Visual Studio Code](https://code.visualstudio.com)

#### 安装[SourceTree](https://www.sourcetreeapp.com/)

#### 安装Oh My Zsh

```bash
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

### 一、安装Xcode

> PS: 安装完成后打开并且初始化

- Mac App Store下载安装【推荐】
- 特定版本下载访问[苹果开发者下载中心](https://developer.apple.com/download/more)

### 二、安装RVM[可选]

```bash
#先在系统ruby下安装xcodeproj
sudo gem install -n /usr/local/bin xcodeproj
```

```bas
curl -L get.rvm.io | bash -s stable
source ~/.bashrc
source ~/.bash_profile
rvm install 2.6.3
```


### 三、安装HomeBrew

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
```


### 四、安装Cocapods

```shell
sudo gem install cocoapods
```

