<b>what is a microcontroller really?</b>

a quick google search shows that:     
*A microcontroller (MCU for microcontroller unit) is a small computer on a single metal-oxide-semiconductor (MOS) integrated circuit (IC) chip. In modern terminology, it is similar to, but less sophisticated than, a system on a chip (SoC); a SoC may include a microcontroller as one of its components. A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals.*   

keeping aside the technicalities(which i didnt get myself either...), A microcontroller is a single chip computer. A small computer you can run programs on and create cool stuf like this<link to cool stuff>, this < link to more cool stuff>, this<more cool stuff> and this<stuff> and so on...

<!-- 
 Whats in there , really?
1)CPU
2)RAM
3)secondary storage -->

<b>MicroControllers vs MicroProcessor</b>  
You might have heard both the terms atleast a bazillion times. Heres the difference finally:  
Basically, A microcontroller constitutes a microprocessor. Its like your desktop tower, There’s a CPU who’s the big kid on the street and runs the show. Then there’s these small kinds who’s only purpose for their existence are to serve the requirements for the big fat kid. these are ram, power control units, storage, communication interfaces and more stuff. all this stuff when put together make a microcontroller.
Here's a nice image:  
<image src="http://www.electronicshub.org/wp-content/uploads/2017/11/Basics-of-Microcontrollers-Image-1.jpg"></image>

Enough intro….
Microcontrollers are used everywhere, from washing machines to satellites; from toy cars to cutting edge autonomous cars; but to do that, they need more stuff, including sensors, which leads us to:

<br>
<b>WTF are Sensors now</b>       
 Sensors are those thing-a-majiks which allows a microcontroller to sense the real world.
They convert the physical stimulus(like change in temp, height, acceleration) to digital signals so the microcontroller can read them. To measure almost every physical phenomenon there is a sensor. Want to record the temperature for your fish tank project? Cool there’s the temperature sensor. Want to control the height of your autonomous drone?
Look, there’s the altitude sensor.
 you can measure the humidity, altitude, record images ( and do crazy stuff; just dont tell your roomie ),  control drones(flight controllers), make 3d scans of the real world(like some self driving cars do), measure light intensity, acceleration, … and more stuff
<br><br>
<b>Turning an LED on</b><i>(again)</i><br>
here we go, making an uno blink. Again. But this time, we are going to do it with a push button (neat example for a sensor).
A push button looks like this.  
<image src="https://i.pinimg.com/originals/fa/3b/ea/fa3beafc1b85c616c19788273df0d8d7.gif"><i>image for a push button</i>

It is a simple switch like the one that turns off your fans, really. The only difference is since these devils are so small and because they have elastic metallic contacts, they tend to generate noise on clicking. <LINK TO DESCRIPTION: LINK> This is called a bounce, like this:
 <img src="">*bounce image*
So come padawan, we are going to hack these little devils and read proper click on a push button.

`
void setup(){
    abcd
}
beep boop
code for push button

` Now since these switches undergo an existential crisis while we click ‘em, we are going to delay(arduino way to say: waiting for a while) and recheck if the button is really sure it was clicked.

` 
void setup(){  
    efgh
}
beep boop 
code for push button with delay
 `

 VOILA , we have succesfully captured a button press. Now realize
 this: your tv remote, smartphone, laptop, joystick, gamepad all
 have been doing this without fail. recording each of your key
 presses precisely.(they are not mechanical push buttons, but
 you get the feel)
> [question:]
> remove this part or add more to inspire(glitter everywhere)

with this, we come to:

<b>PWM</b>  
Cool. we have officially turned on and off LEDs with timers and buttons. But we want more!
Now we are going to change the intensity of the LED. To change the power output, we can change the average power supplied to the LED in two ways:
1)	Change the direct voltage across the led.
2)	Turn it ON/OFF very quickly and continuously
 
LEDs have an optimal operating voltage (deviating too much from
may break it). And what if we want to connect it to a Digital Pin(A pin that can only output at 2 levels: ON or OFF)? As eccentric as it may sound, we usually go about the second way to dim a LED. And this is called PWM (Pulse Width Modulation). 
Here's an image showing PWM at different *duty cycles*
(percentage of time the signal is high in a clock cycle)  
<image src="https://www.nightsea.com/wp-content/uploads/2017/12/PWM-diagram-300x260.jpg">

`
<code for pwm without library>
`

Hooray!
But there's more. Luckily this stuff has already been written in libraries. So here we go:

`
<code for pwm with library>
`

Cheers!
<br><br>
<b>Resources:</b>

 [read more about bouncing push buttons](https://people.cs.clemson.edu/~yfeaste/855Assignments/presentations/team6-button-bounce.pdf)  
 [read more about PWM](https://www.arduino.cc/en/tutorial/PWM)
