# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"

  config.vm.provider "virtualbox" do |v|
    v.memory = 4096
  end

  config.vm.provision "shell", inline: <<-SHELL
    apt-get update
    apt-get install -y tmux build-essential libncurses5-dev valgrind
    mkdir -p /ubuntu-rootfs && cd /ubuntu-rootfs/
    wget http://cdimage.ubuntu.com/ubuntu-base/releases/14.04/release/ubuntu-base-14.04-core-amd64.tar.gz
    
    tar -xzf ubuntu-base-14.04*.tar.gz
    rm ubuntu-base-14.04*.tar.gz

  SHELL
end
