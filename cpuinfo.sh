#!/bin/bash

echo -n "physical CPU number in total:"
cat /proc/cpuinfo | grep "processor" | wc -l

echo -n "core numbers in a physical CPU:"
core_per_phy_cpu=$( cat /proc/cpuinfo | grep "physical id" | sort | uniq | wc -l )
echo $core_per_phy_cpu

echo -n "logical CPU numbers in a physical CPU:"
logical_cpu_per_phy_cpu=$(cat /proc/cpuinfo | grep "siblings" | sort | uniq | awk -F: '{print $2}' )
echo $logical_cpu_per_phy_cpu

if [ $logical_cpu_per_phy_cpu -gt $core_per_phy_cpu ];then
	echo "Hyper threading is enabled"
elif [ $logical_cpu_per_phy_cpu -eq $core_per_phy_cpu ];then
	echo "Hyper threading is NOT enabled"
else
	echo "Error!there is someting working wrong..."
fi
