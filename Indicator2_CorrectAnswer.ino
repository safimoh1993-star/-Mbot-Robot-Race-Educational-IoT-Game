from mblock import event
# initialize variables
_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A9,_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A92,_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A93,_D8_A7_D9_84_D8_B3_D8_A4_D8_A7_D9_84

@event.received('صح')
def on_received():
  sprite.show()
  sprite.play('Cheer')
  sprite.x = -600
  sprite.y = 0
  sprite.glide(600, 0, 2)
  sprite.hide()

@event.greenflag
def on_greenflag():
  sprite.hide()
  sprite.size = 200
  sprite.z_index = 256

@event.received('صح2')
def on_received1():
  sprite.show()
  sprite.play('Cheer')
  sprite.x = -600
  sprite.y = 0
  sprite.glide(600, 0, 2)
  sprite.hide()

@event.received('صح3')
def on_received2():
  sprite.show()
  sprite.play('Cheer')
  sprite.x = -600
  sprite.y = 0
  sprite.glide(600, 0, 2)
  sprite.hide()

