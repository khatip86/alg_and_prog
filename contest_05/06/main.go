type Cat struct {
  Live bool
  View bool
}

func NewCat() Cat {
  cat := Cat{}
  cat.Live = rand.Intn(2) == 1
  cat.View = false
  return cat
}

func (c *Cat) is_alive() bool {
  if c.View == true {
    return c.Live
  } else {
    c.Live = rand.Intn(2) == 1
    return c.Live
  }
}

type Box struct{}

func (b *Box) open() Cat {
  cat := NewCat()
  cat.View = true
  return cat
}
