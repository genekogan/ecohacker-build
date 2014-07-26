#version 120

uniform sampler2DRect texture;

uniform float rbiasx;
uniform float gbiasx;
uniform float bbiasx;
uniform float rmultx;
uniform float gmultx;
uniform float bmultx;
uniform float rbiasy;
uniform float gbiasy;
uniform float bbiasy;
uniform float rmulty;
uniform float gmulty;
uniform float bmulty;


void main(void) {	
    vec2 st = gl_FragCoord.st;
    //vec2 st = pos.xy;
	vec2 pr = vec2(rmultx, rmulty) * st + vec2(rbiasx, rbiasy);
	vec2 pg = vec2(gmultx, gmulty) * st + vec2(gbiasx, gbiasy);
	vec2 pb = vec2(bmultx, bmulty) * st + vec2(bbiasx, bbiasy);

	float r = texture2DRect(texture, pr).r;
	float g = texture2DRect(texture, pg).g;
	float b = texture2DRect(texture, pb).b;
  	gl_FragColor = vec4(r, g, b, 1.0);
}

