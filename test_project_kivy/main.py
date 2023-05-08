import kivy

from kivy.app import App

from kivy.uix.floatlayout import FloatLayout
from kivy.uix.button import Button

class MyApp(App):
    def build(self):
        self.root = FloatLayout()

        button = Button(
            text = "Kliknij mnie!",
            size_hint = (None,None),
            size = (100,50),
            pos_hint = ({'center_x': .5, 'center_y': .5})
        )
        self.root.add_widget(button)

if __name__ == "__main__":
    MyApp().run()
