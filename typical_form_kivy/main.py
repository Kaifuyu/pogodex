from kivy.app import App

from kivy.uix.floatlayout import FloatLayout
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button
from kivy.uix.dropdown import DropDown
from kivy.uix.checkbox import CheckBox
from kivy.lang import Builder

Builder.load_string("""
<CityDropDown>
    Button:
        text: "Warszawa"
        size_hint_y: None
        height: 20
        on_release: root.select("Warszawa")
    Button:
        text: "Zielona Góra"
        size_hint_y: None
        height: 20
        on_release: root.select("Zielona Góra")
    Button:
        text: "Gdańsk"
        size_hint_y: None
        height: 20
        on_release: root.select("Gdańsk")
</CityDropDown>

<FirstNameTextInput>
    size_hint_y: None
    height: 30
    pos_hint: {"center_x": .5,"y": .65}
    focus: True
</FirstNameTextInput>
""")

class CityDropDown(DropDown):
    pass

class FirstNameTextInput(TextInput):
    pass

class FormApp(App):
    def build(self):
        self.root = FloatLayout()

        label = Label(
            text='Formularz danych osobowych',
            size_hint_y=None,
            pos_hint={"y": .7}
        )
        self.root.add_widget(label)

        namelabel = Label(
            text='Wpisz imię: ',
            size_hint=(None, None),
            pos_hint={"center_x": .5, "y": .64}
        )
        self.root.add_widget(namelabel)

        nametextinput = FirstNameTextInput()
        self.root.add_widget(nametextinput)

        lastnamelabel = Label(
            text='Wpisz nazwisko: ',
            size_hint=(None, None),
            pos_hint={"center_x": .5, "y": .54}
        )
        self.root.add_widget(lastnamelabel)

        lastnametextinput = TextInput(
            size_hint_y=None,
            height=30,
            pos_hint={"y": .55}
        )
        self.root.add_widget(lastnametextinput)

        citylabel = Label(
            text='Wybierz miasto: ',
            size_hint=(None, None),
            pos_hint={"center_x": .5, "y": .44}
        )
        self.root.add_widget(citylabel)

        dropdownbutton = Button(
            text="-",
            size_hint_y=None,
            height=30,
            pos_hint={"y": .45}
        )

        dropdown = CityDropDown()
        dropdownbutton.bind(on_release=dropdown.open)
        dropdown.bind(on_select=lambda instance, x: setattr(dropdownbutton, 'text', x))
        self.root.add_widget(dropdownbutton)

        citylabel = Label(
            text='Wybierz miasto: ',
            size_hint=(None, None),
            pos_hint={"center_x": .5, "y": .44}
        )
        self.root.add_widget(citylabel)

        questionlabel = Label(
            text='Czy jesteś osobą pełnoletnią?',
            size_hint_y=None,
            pos_hint={"y": .34}
        )
        self.root.add_widget(questionlabel)

        answerquestioncheckbox = CheckBox(
            size_hint_y=None,
            pos_hint={"y": .31}
        )
        self.root.add_widget(answerquestioncheckbox)

        submitbutton = Button(
            text='Zatwierdź',
            size_hint=(None, None),
            size=(80, 30),
            pos_hint={"center_x": .5, "y": .30}
        )
        self.root.add_widget(submitbutton)

if __name__ == "__main__":
    FormApp().run()
