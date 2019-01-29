#pragma once
// Include most Rack headers for convenience
#include "common.hpp"
#include "math.hpp"
#include "string.hpp"
#include "system.hpp"
#include "random.hpp"
#include "network.hpp"
#include "asset.hpp"
#include "window.hpp"
#include "app.hpp"
#include "midi.hpp"
#include "helpers.hpp"

#include "widget/Widget.hpp"
#include "widget/TransparentWidget.hpp"
#include "widget/OpaqueWidget.hpp"
#include "widget/TransformWidget.hpp"
#include "widget/ZoomWidget.hpp"
#include "widget/SVGWidget.hpp"
#include "widget/FramebufferWidget.hpp"
#include "widget/GLWidget.hpp"

#include "ui/SequentialLayout.hpp"
#include "ui/Label.hpp"
#include "ui/List.hpp"
#include "ui/MenuOverlay.hpp"
#include "ui/Tooltip.hpp"
#include "ui/TextField.hpp"
#include "ui/PasswordField.hpp"
#include "ui/ScrollWidget.hpp"
#include "ui/Slider.hpp"
#include "ui/Menu.hpp"
#include "ui/MenuEntry.hpp"
#include "ui/MenuSeparator.hpp"
#include "ui/MenuLabel.hpp"
#include "ui/MenuItem.hpp"
#include "ui/Button.hpp"
#include "ui/IconButton.hpp"
#include "ui/ChoiceButton.hpp"
#include "ui/RadioButton.hpp"
#include "ui/ProgressBar.hpp"

#include "app/AudioWidget.hpp"
#include "app/CircularShadow.hpp"
#include "app/Knob.hpp"
#include "app/LedDisplay.hpp"
#include "app/LightWidget.hpp"
#include "app/MidiWidget.hpp"
#include "app/ModuleLightWidget.hpp"
#include "app/ModuleWidget.hpp"
#include "app/MultiLightWidget.hpp"
#include "app/ParamWidget.hpp"
#include "app/PortWidget.hpp"
#include "app/RackRail.hpp"
#include "app/Scene.hpp"
#include "app/RackScrollWidget.hpp"
#include "app/RackWidget.hpp"
#include "app/SVGButton.hpp"
#include "app/SVGKnob.hpp"
#include "app/SVGPanel.hpp"
#include "app/SVGPort.hpp"
#include "app/SVGScrew.hpp"
#include "app/SVGSlider.hpp"
#include "app/SVGSwitch.hpp"
#include "app/Toolbar.hpp"
#include "app/CableWidget.hpp"

#include "engine/Engine.hpp"
#include "engine/Param.hpp"
#include "engine/Port.hpp"
#include "engine/Module.hpp"
#include "engine/Param.hpp"
#include "engine/Cable.hpp"

#include "plugin/Plugin.hpp"
#include "plugin/Model.hpp"
#include "plugin/callbacks.hpp"

#include "dsp/common.hpp"
#include "dsp/digital.hpp"
#include "dsp/fft.hpp"
#include "dsp/filter.hpp"
#include "dsp/fir.hpp"
#include "dsp/frame.hpp"
#include "dsp/minblep.hpp"
#include "dsp/ode.hpp"
#include "dsp/resampler.hpp"
#include "dsp/ringbuffer.hpp"
#include "dsp/vumeter.hpp"

namespace rack {


// Import some namespaces for convenience
using namespace math;
using namespace widget;
using namespace ui;
using namespace app;
using plugin::Plugin;
using plugin::Model;
using namespace engine;

namespace component {}
using namespace component;


} // namespace rack
