class Attendee:

    'Common base class for all attendees'

    def __init__(self,name ,tickets ):
        self.name = name 
        self.tickets =tickets

    def displayAttendee (self):
        print('Name: {},Tickets: {}'.format(self.name , self.tickets))

    def addTickets (self):
        self.tickets += 1 
        print('{} tickets increased to {}'.format(self.name , self.tickets))

attendee1 = Attendee('B.Gile', 2)
attendee2 = Attendee('J.Ortega', 1)


attendee2.displayAttendee()

attendee2.addTickets()
attendee2.addTickets() 

