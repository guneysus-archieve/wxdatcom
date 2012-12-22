#!/bin/bash
#===============================================================================
#
#          FILE:  extract.sh
# 
#         USAGE:  ./extract.sh -t=<N> or <A> --parameter=<PARAM>
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
export FILE=_formatted.inp
export XNUM="(([-]|)(([0-9])*\.?[0-9]+([eE][-+]?[0-9]+)?),{0,}+[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?){0,}"
                   

export XARRAY="\(1\)=((([-]|)([0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?,)){0,})"
alias egrep='EGREP_COLOR="1;32" egrep --color'

export TEMP_FILE=temp.txt



for i in $*
do
	case $i in
    	-p=*|--parameter=*)
		PARAMETER=`echo $i | sed 's/[-a-zA-Z0-9]*=//'`
		;;

  # 	-f=*|--file=*)
	#	FILE=`echo $i | sed 's/[-a-zA-Z0-9]*=//'`
	#	;;
	
		 -t=*|--type=*)
			TYPE=`echo $i | sed 's/[-a-zA-Z0-9]*=//'`
			;;

		 -a=*|--airfoil=*)
			AIR=`echo $i | sed 's/[-a-zA-Z0-9]*=//'`
			;; 
    	
*)

                # unknown option
		;;
  	esac
done

	 if [ "$AIR" == "W" ] ; then
			# WING

	   	 egrep -iro \\$".{0,}WGP(.*?)"\\$ ${FILE} | egrep -ro "$PARAMETER=$XNUM" | egrep -ro "$XNUM" > ${TEMP_FILE}

       	elif [ "$AIR" == "V" ] ; then
			#VERTICAL TAIL
			egrep -iro \\$"VTP(.*?)"\\$ ${FILE} | egrep -ro "$PARAMETER=$XNUM" | egrep -ro "$XNUM" > ${TEMP_FILE}

        elif [ "$AIR" == "H" ] ; then
			#HORIZONTAL TAIL
			egrep -iro \\$"HTP(.*?)"\\$ ${FILE} | egrep -ro "$PARAMETER=$XNUM" | egrep -ro "$XNUM" > ${TEMP_FILE}

        elif [ "$AIR" == "S" ] ; then
			#SYM FLAP
			egrep -iro \\$"SYM(.*?)"\\$ ${FILE} | egrep -ro "$PARAMETER=$XNUM" | egrep -ro "$XNUM" > ${TEMP_FILE}
                 
          else
			 

		   if [ "$TYPE" == "A" ] ; then
		    	STR=`echo | egrep -ro "[, ]$PARAMETER$XARRAY" ${FILE} | egrep -ro "$XNUM"`
	       	elif [ "$TYPE" == "N" ] ; then
				STR=`echo |egrep -ro "$PARAMETER=$XNUM" ${FILE} | egrep -ro "$XNUM"`
               
			fi   
              

   STR=`echo $STR | sed -e 's/[ \t]/,/g;'`
		echo $STR > ${TEMP_FILE}
#echo $STR       

		fi 
     		


  





 
