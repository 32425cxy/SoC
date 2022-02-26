################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../application/main.c 

OBJS += \
./application/main.o 

C_DEPS += \
./application/main.d 


# Each subdirectory must supply rules for building sources it contributes
application/%.o: ../application/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU RISC-V Cross C Compiler'
	riscv-nuclei-elf-gcc -march=rv32imac -mabi=ilp32 -mcmodel=medany -mno-save-restore -O0 -ffunction-sections -fdata-sections -fno-common  -g -DDOWNLOAD_MODE=DOWNLOAD_MODE_ILM -DSOC_HBIRDV2 -DBOARD_DDR200T -I"D:\NucleiStudio_workplace\print_core\application" -I"D:\NucleiStudio_workplace\print_core\hbird_sdk\NMSIS\Core\Include" -I"D:\NucleiStudio_workplace\print_core\hbird_sdk\SoC\hbirdv2\Common\Include" -I"D:\NucleiStudio_workplace\print_core\hbird_sdk\SoC\hbirdv2\Board\ddr200t\Include" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


