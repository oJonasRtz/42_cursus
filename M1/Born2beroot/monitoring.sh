#	ARCH
arch=$(uname -a)

#	CPU PHYSICAL
cpu_phy=$(grep "physical id" /proc/cpuinfo | wc -l)

#	VCPU
v_cpu=$(nproc)

#	MEMORY USAGE
mem_total=$(free --mega | awk '$1 == "Mem:"{print$2}')
mem_used=$(free --mega | awk '$1 == "Mem:"{print$3}')
mem_percentage=$(free --mega | awk '$1 == "Mem:"{printf("%.2f"), $3/$2*100}')

#	DISK USAGE
disk_total=$(df -h --total | awk '$1 == "total" {print$2}' | tr 'G' ' ' | tr -d ' ')
disk_used=$(df -h --total | awk '$1 == "total" {print$3}' | tr 'G' ' ' | tr -d ' ')
disk_percentage=$(df -h --total | awk '$1 == "total" {print$5}')

#	CPU LOAD
cpu_load=$(vmstat 1 2 | tail -1 | awk '{printf("%.1f", 100.0 - $15)}')

#	LAST_BOOT
last_boot=$(who -b | awk '{print$3, $4}')

#	LVM
lvm_use=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

#	TCP CONNECTIONS
get_tcp=$(ss -ta | grep "ESTAB" | wc -l)

#	USERS LOG
ulog=$(who | wc -l)

#	NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print$2}')

#	SUDO
cmd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

#	show message for all
wall "#Archtecture: $arch
#CPU physical: $cpu_phy
#vCPU: $v_cpu
#Memory Usage: ${mem_used}/${mem_total}MB (${mem_percentage}%)
#Disk Usage: ${disk_used}/${disk_total}Gb (${disk_percentage})
#CPU load: $cpu_load%
#Last boot: $last_boot
#LVM use: $lvm_use
#Connections TCP: $get_tcp ESTABILISHED
#User log: $ulog
#Network: IP $ip ($mac)
#Sudo: $cmd cmd"
