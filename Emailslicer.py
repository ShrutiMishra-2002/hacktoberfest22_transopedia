email = input('Enter your email: ').strip()
username = email[:email.index('@')] #here we divide the two strings , ie, username and domain name by sepaarator @
domain_name = email[email.index('@')+ 1:]
format = (f"Your user name is '{username}' and your domain is '{domain_name}'")
print(format)
