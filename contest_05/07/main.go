func (self *Teapot) heat_up(delta int) {
self.water.temperature += delta
}

type Water struct {
temperature int
}

type Teapot struct {
water *Water
}

func NewWater(temperature int) *Water {
return &Water{temperature: temperature}
}

func NewTeapot(water *Water) *Teapot {
return &Teapot{water: water}
}

func (self *Water) heat_up(delta int) {
self.temperature += delta
}

func (self *Teapot) is_boiling() bool {
return self.water.temperature >= 100
}
