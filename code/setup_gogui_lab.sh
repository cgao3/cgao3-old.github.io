#!/bin/bash

conda deactivate

wget  https://github.com/Remi-Coulom/gogui/archive/v1.5.1.tar.gz
tar xzvf v1.5.1.tar.gz
cd gogui*

mkdir -p /cshome/$USER/local/
wget ftp://xmlsoft.org/libxslt/libxslt-1.1.33.tar.gz
tar xzvf libxslt*.gz

cd libxslt*
./configure --prefix=/cshome/$USER/local
make
make install
echo "export PATH=\$PATH:/cshome/$USER/local/bin" >> ~/.bashrc
source ~/.bashrc

cd -

chmod +x ubuntu_setup.sh
sed -i 's/sudo/\#sudo/g' ubuntu_setup.sh
./ubuntu_setup.sh

cd bin
echo "export PATH=\$PATH:$(pwd)" >> ~/.bashrc

cd 

source ~/.bashrc
