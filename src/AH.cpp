#include "AH.hpp"

// The plugin-wide instance of the Plugin class
Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	// This is the unique identifier for your plugin
	p->slug = "AmalgamatedHarmonics";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif
	p->website = "https://github.com/jhoar/AmalgamatedHarmonics/wiki";
	p->manual = "https://github.com/jhoar/AmalgamatedHarmonics/wiki";

	// For each module, specify the ModuleWidget subclass, manufacturer slug (for saving in patches), manufacturer human-readable name, module slug, 
	// and module name
	p->addModel(modelArp31);
	p->addModel(modelArp32);
	p->addModel(modelBombe);
	p->addModel(modelChord);
	p->addModel(modelCircle);
	p->addModel(modelGalaxy);
	p->addModel(modelGenerative);
	p->addModel(modelImperfect2);
	p->addModel(modelProgress);
	p->addModel(modelRuckus);
	p->addModel(modelScaleQuantizer2);
	p->addModel(modelSLN);

	p->addModel(modelArpeggiator2);

	p->addModel(modelArpeggiator);
	p->addModel(modelScaleQuantizer);
	p->addModel(modelImperfect);

	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
