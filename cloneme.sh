#!/bin/sh
# shell script to clone Max project
if [ $* = "" ] ; then
   echo "cloneme: USAGE: cloneme DIR"
   exit -1
else
   echo "clone Max project: params = " $*
fi
FROM_DIR=$1
TO_DIR=`pwd`
echo "cloneme: FROM_DIR = " $FROM_DIR
echo "cloneme: TO_DIR = " $TO_DIR
mkdir src
mkdir include
cp $FROM_DIR/*  $TO_DIR
cp $FROM_DIR/src/*  $TO_DIR/src/
cp $FROM_DIR/include/*  $TO_DIR/include/
