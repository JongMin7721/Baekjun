from langchain import Chain

# Create a new chain
chain = Chain()

# Define the chat system
@chain.register
def chat_system(message):
    if message == "hello":
        return "Hi there!"
    elif message == "how are you?":
        return "I'm good, thanks for asking!"
    elif message == "bye":
        return "Goodbye!"
    else:
        return "Sorry, I didn't understand that."

# Start the chat system
chain.start()