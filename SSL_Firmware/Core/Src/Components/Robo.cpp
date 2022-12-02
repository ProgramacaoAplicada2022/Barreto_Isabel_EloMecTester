/*
 * Robo.cpp
 *
 *  Created on: 20 de mar de 2022
 *      Author: Vinicius Moraes
 *  Edited on: 26/11/2022
 *  	Author: Isabel Chaves
 */

#include "Robo.hpp"
#define sin_phi 0.50
#define cos_phi 0.866
#define sin_theta 0.707
#define cos_theta 0.707
#define R 0.075 //Raio do robo = 9cm

Robo::Robo(uint8_t roboId) {
	for(int i=0; i<4; ++i){
		R_Motors[i]= new Motor(i);
	}
}

void Robo::set_robo_speed(float v_r, float v_t, float w){
	R_Motors[0]->ControlSpeed(-v_t*cos_phi - v_r*sin_phi - w*R);
	R_Motors[1]->ControlSpeed(-v_t*cos_theta + v_r*sin_theta - w*R);
	R_Motors[2]->ControlSpeed(v_t*cos_phi - v_r*sin_phi - w*R);
	R_Motors[3]->ControlSpeed(v_t*cos_theta + v_r*sin_theta - w*R);
}

void Robo::set_wheel_speed(float wheel1, float wheel2, float wheel3, float wheel4){
		R_Motors[0]->ControlSpeed(wheel1);
		R_Motors[1]->ControlSpeed(wheel2);
		R_Motors[2]->ControlSpeed(wheel3);
		R_Motors[3]->ControlSpeed(wheel4);
}
