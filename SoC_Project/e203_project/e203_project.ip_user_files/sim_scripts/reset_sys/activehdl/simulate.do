onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+reset_sys -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L xil_defaultlib -L secureip -O5 xil_defaultlib.reset_sys

do {wave.do}

view wave
view structure

do {reset_sys.udo}

run -all

endsim

quit -force
