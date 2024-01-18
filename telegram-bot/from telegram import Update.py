from telegram import Update
from telegram.ext import Updater, CommandHandler, MessageHandler, Filters, CallbackContext
from telegram.ext import MessageHandler, Filters
from telegram import ReplyKeyboardMarkup, KeyboardButton

def start(update: Update, context: CallbackContext) -> None:
    user = update.effective_user
    context.bot.send_message(chat_id=update.effective_chat.id,
                             text=f"Привет, {user.first_name}! Как я могу помочь?",
                             reply_markup=ReplyKeyboardMarkup(
                                 [[KeyboardButton("Отправить геолокацию", request_location=True)]]
                             ))

def help_command(update: Update, context: CallbackContext) -> None:
    update.message.reply_text("Я готов помочь вам!")

def handle_location(update: Update, context: CallbackContext) -> None:
    user = update.effective_user
    location = update.message.location
    context.bot.send_message(chat_id=update.effective_chat.id,
                             text=f"Спасибо, {user.first_name}! Я получил вашу геолокацию: "
                                  f"Широта: {location.latitude}, Долгота: {location.longitude}")

def main() -> None:
    # Замените "YOUR_BOT_TOKEN" на ваш токен бота
    updater = Updater("6814088809:AAF3wEImoRYIAH9jTzsEWDpFNSHyVKiUjCY")

    dp = updater.dispatcher

    dp.add_handler(CommandHandler("start", start))
    dp.add_handler(CommandHandler("help", help_command))

    # Обработка геолокации
    dp.add_handler(MessageHandler(Filters.location, handle_location))

    updater.start_polling()

    updater.idle()

if __name__ == '__main__':
    main()
