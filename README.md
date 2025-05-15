# Test steps


# step 1, use the failure commit with  cxx-image at ad987bce5c82199cec17cb08ea69846cd8174ae6
~~~~~~~~~~~~~~~{.shell}
git reset --hard cda8e6ac23d76232820e4eda1d334b2239e07a61
~~~~~~~~~~~~~~~

# step 2, build test-write-exif
~~~~~~~~~~~~~~~{.shell}
cd build 
rm -rf *
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j4
~~~~~~~~~~~~~~~

# step 3, run test-write-exif

~~~~~~~~~~~~~~~{.shell}
./test-write-exif
~~~~~~~~~~~~~~~

We got error:

terminate called after throwing an instance of 'cxximg::IOError'
  what():  JPEG error: Reading failed



# step 4, use OK commit with  cxx-image at 21bfe410340b3601a055c563b373cce53073cae9
~~~~~~~~~~~~~~~{.shell}
git reset --hard eae4ca396e90ca642df118999adc0fbc43141b91
~~~~~~~~~~~~~~~

# step 5, build test-write-exif
~~~~~~~~~~~~~~~{.shell}
cd build
rm -rf *
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j4
~~~~~~~~~~~~~~~

# step 6, run test-write-exif
~~~~~~~~~~~~~~~{.shell}
./test-write-exif
~~~~~~~~~~~~~~~

We got the good trace at the end "exif written successfully."
