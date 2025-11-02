from mblock import event
# initialize variables
_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A9,_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A92,_D8_A7_D9_84_D8_A5_D8_AC_D8_A7_D8_A8_D8_A93,_D8_A7_D9_84_D8_B3_D8_A4_D8_A7_D9_84

@event.greenflag
def on_greenflag():
  while True:
    if sprite.get_variable('السؤال') == 1:
      sprite.broadcast(str('س1'))

    if sprite.get_variable('السؤال') == 2:
      sprite.broadcast(str('س2'))

    if sprite.get_variable('السؤال') == 3:
      sprite.broadcast(str('س3'))

    if sprite.get_variable('السؤال') == 4:
      sprite.broadcast(str('س4'))

    if sprite.get_variable('السؤال') == 5:
      sprite.broadcast(str('س5'))

    if sprite.get_variable('السؤال') == 6:
      sprite.broadcast(str('س6'))

    if sprite.get_variable('السؤال') == 7:
      sprite.broadcast(str('س7'))

    if sprite.get_variable('السؤال') == 8:
      sprite.broadcast(str('س8'))

    if sprite.get_variable('السؤال') == 9:
      sprite.broadcast(str('س9'))

    if sprite.get_variable('السؤال') == 10:
      sprite.broadcast(str('س10'))

    if sprite.get_variable('السؤال') == 11:
      sprite.broadcast(str('س11'))

@event.greenflag
def on_greenflag1():
  while True:
    if sprite.get_variable('السؤال') == 12:
      sprite.broadcast(str('س12'))

    if sprite.get_variable('السؤال') == 13:
      sprite.broadcast(str('س13'))

    if sprite.get_variable('السؤال') == 14:
      sprite.broadcast(str('س14'))

    if sprite.get_variable('السؤال') == 15:
      sprite.broadcast(str('15'))

    if sprite.get_variable('السؤال') == 16:
      sprite.broadcast(str('س16'))

    if sprite.get_variable('السؤال') == 17:
      sprite.broadcast(str('س17'))

    if sprite.get_variable('السؤال') == 18:
      sprite.broadcast(str('س18'))

    if sprite.get_variable('السؤال') == 19:
      sprite.broadcast(str('س19'))

    if sprite.get_variable('السؤال') == 20:
      sprite.broadcast(str('س20'))

    if sprite.get_variable('السؤال') == 21:
      sprite.broadcast(str('س21'))

@event.greenflag
def on_greenflag2():
  while True:
    if sprite.get_variable('السؤال') == 22:
      sprite.broadcast(str('س22'))

    if sprite.get_variable('السؤال') == 23:
      sprite.broadcast(str('س23'))

    if sprite.get_variable('السؤال') == 24:
      sprite.broadcast(str('س24'))

    if sprite.get_variable('السؤال') == 25:
      sprite.broadcast(str('س25'))

    if sprite.get_variable('السؤال') == 26:
      sprite.broadcast(str('س26'))

    if sprite.get_variable('السؤال') == 27:
      sprite.broadcast(str('س27'))

    if sprite.get_variable('السؤال') == 28:
      sprite.broadcast(str('س28'))

    if sprite.get_variable('السؤال') == 29:
      sprite.broadcast(str('س29'))

    if sprite.get_variable('السؤال') == 30:
      sprite.broadcast(str('س30'))

@event.received('س1')
def on_received():
  sprite.say('ما هو الذكاء الاصطناعي؟')

@event.received('س11')
def on_received1():
  sprite.say('هل الذكاء الاصطناعي يفكر مثل عقل الإنسان تمامًا؟')

@event.received('س21')
def on_received2():
  sprite.say('ما اسم اللباس الذي يرتديه رائد الفضاء؟')

@event.greenflag
def on_greenflag3():
  sprite.play('Car Horn')
  sprite.play('Car Vroom')
  sprite.set_variable('السؤال', 0)
  # not supported yet
  # not supported yet
  # not supported yet
  # not supported yet
  sprite.x = 600
  sprite.y = 0
  sprite.show()
  sprite.size = 200
  sprite.glide(0, 0, 1)
  sprite.say('أهلا يا أبطال', 2)
  sprite.say('هيا لنبدأ السباق', 2)
  sprite.say('انطلقووووووا !!!', 2)
  v = sprite.get_variable('السؤال')
  sprite.set_variable('السؤال', v + 1)

while not False:
  # DO SOMETHING
  pass

@event.received('س2')
def on_received3():
  sprite.say('ماذا يمكن للذكاء الاصطناعي أن يفعل؟')

@event.received('س12')
def on_received4():
  sprite.say('ماذا يمكن أن يتعلم الذكاء الاصطناعي؟')

@event.received('س22')
def on_received5():
  sprite.say('هل هناك جاذبية في الفضاء مثل الأرض؟')

@event.received('س13')
def on_received6():
  sprite.say('هل الذكاء الاصطناعي مفيد في المستشفيات؟')

@event.received('س3')
def on_received7():
  sprite.say('ما اسم الآلة التي تتحرك وتفكر مثل الإنسان؟')

@event.received('س23')
def on_received8():
  sprite.say('ما هو النيزك؟')

@event.received('س14')
def on_received9():
  sprite.say('ما الذي يساعد الذكاء الاصطناعي على التعلم؟')

@event.received('س4')
def on_received10():
  sprite.say('لماذا يستخدم الذكاء الاصطناعي في الهاتف؟')

@event.received('س24')
def on_received11():
  sprite.say('ما اسم الجهاز الذي يصور الفضاء؟')

@event.received('س5')
def on_received12():
  sprite.say('من يستخدم الذكاء الاصطناعي؟')

@event.received('15')
def on_received13():
  sprite.say('في المستقبل، ماذا تحب أن يصنع لك الذكاء الاصطناعي؟')

@event.received('س25')
def on_received14():
  sprite.say('هل يمكن للطائرة العادية أن تطير في الفضاء؟')

@event.received('س6')
def on_received15():
  sprite.say('هل يمكن للذكاء الاصطناعي أن يرسم لوحة فنية؟')

@event.received('س16')
def on_received16():
  sprite.say('ما اسم الكوكب الأحمر؟')

@event.received('س26')
def on_received17():
  sprite.say('ماذا يحدث إذا خرج رائد فضاء بدون بدلة؟')

@event.received('س7')
def on_received18():
  sprite.say('كيف تتعلم الآلة في الذكاء الاصطناعي؟')

@event.received('س17')
def on_received19():
  sprite.say('كم عدد كواكب المجموعة الشمسية؟')

@event.received('س27')
def on_received20():
  sprite.say('كم يومًا تقريبًا يستغرق الوصول إلى القمر؟')

@event.received('س8')
def on_received21():
  sprite.say('هل يستطيع الروبوت أن يشعر بالحزن؟')

@event.received('س18')
def on_received22():
  sprite.say('من أول إنسان صعد إلى القمر؟')

@event.received('س28')
def on_received23():
  sprite.say('ما اسم المكان الذي يعيش فيه رواد الفضاء في الفضاء؟')

@event.received('س9')
def on_received24():
  sprite.say('ما هو الشات بوت؟')

@event.received('س19')
def on_received25():
  sprite.say('ما هو اسم القمر الذي يدور حول الأرض؟')

@event.received('س29')
def on_received26():
  sprite.say('الشمس هي:')

@event.received('س10')
def on_received27():
  sprite.say('هل السيارة ذاتية القيادة تستخدم الذكاء الاصطناعي؟')

@event.received('س20')
def on_received28():
  sprite.say('هل يمكن أن نعيش على المريخ حاليًا؟')

@event.received('س30')
def on_received29():
  sprite.say('ماذا تتمنى أن تكتشف في الفضاء؟')

