#!/bin/bash
#===============================================================================
#
#          FILE:  clean.sh
# 
#         USAGE:  ./clean.sh <FILE>
# 
#   DESCRIPTION:  
# 
#       OPTIONS:  ---
#  REQUIREMENTS:  ---
#          BUGS:  ---
#         NOTES:  ---
#        AUTHOR: SEREF GUNEYSU (), serefguneysu@gmail.com
#       COMPANY: ISTANBUL TECHNICAL UNIVERSITY FACULTY OF AERONAUTICS AND ASTRONAUICS
#       CREATED:  10:06
#      REVISION:  ---
#===============================================================================

#set -o nounset                              # Treat unset variables as an error
export NEW=_formatted.inp
export FILE=$1
#cat ${FILE} > ${NEW}

sed '/[*!]/d' ${FILE} > ${NEW}

sed -e 's/\s{1,}=\s{1,}/=/g;' ${FILE} | sed -e 's/\s{1,},\s{1,}//g;' | sed -r ':a;N;$!ba;s/(,(\n\s{2,}))/,/g' | sed -r ':a;N;$!ba;s/,\n/ /g;' | sed -r 's/\s{1,}=\s{1,}/=/g' | sed -r 's/\s{0,},\s{0,}/,/g;' | sed -r 's/\s{2,}/ /g;' | sed -s 's/-\./-0\./g' | sed 's/= /=/g' | sed -e 's/\(\([[:digit:]]\)\{1,\}\)\./\1\.0/g' | sed -e 's/\([=,]\)\.\(\([[:digit:]]\)\{1,\}\)/\10\.\2/g' | egrep ^ -C100 > ${NEW}                              
