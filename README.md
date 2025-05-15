# Test steps


use commit ad987bce5c82199cec17cb08ea69846cd8174ae6 of cxx-image

cd build 
rm -rf *
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j4

./test-write-exif

We got error:

terminate called after throwing an instance of 'cxximg::IOError'
  what():  JPEG error: Reading failed



change commit 21bfe410340b3601a055c563b373cce53073cae9 of cxx-image

cd build
rm -rf *
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j4

./test-write-exif
