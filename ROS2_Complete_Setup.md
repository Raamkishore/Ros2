# Ros2_setup in Ubuntu 20.04

Open terminal and copy-paste all the commands in order.

## Set locale

```shell
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings
```

## Setup sources

```shell
apt-cache policy | grep universe 500 http://us.archive.ubuntu.com/ubuntu focal/universe amd64 Packages release v=20.04,o=Ubuntu,a=focal,n=focal,l=Ubuntu,c=universe,b=amd64
```

```shell
sudo apt install software-properties-common
sudo add-apt-repository universe
```

```shell
sudo apt update && sudo apt install curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

```shell
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

## Install ROS 2

```shell
sudo apt update
```

```shell
sudo apt install ros-galactic-desktop
```

## Source environment

```shell
echo "source /opt/ros/galactic/setup.bash" >> ~/.bashrc
```

You can also have a look at the following link (above mentioned commands) :- https://docs.ros.org/en/galactic/Installation/Ubuntu-Install-Debians.html

## Install gazebo

```shell
sudo apt install ros-galactic-gazebo-ros-pkgs
```

## Install colcon

```shell
sudo sh -c 'echo "deb [arch=amd64,arm64] http://repo.ros2.org/ubuntu/main `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list'
```

```shell
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
```

```shell
sudo apt update
```

```shell
sudo apt install python3-colcon-common-extensions
```

## Other essential installations

```shell
sudo apt install ros-galactic-joint-state-publisher-gui
```

```shell
sudo apt install ros-galactic-xacro
```

```
sudo apt-get update
sudo apt-get install -y libyaml-cpp-dev
```

```
sudo apt-get install -y  libpcap-dev
```

```
sudo apt-get install -y libprotobuf-dev protobuf-compiler
```
