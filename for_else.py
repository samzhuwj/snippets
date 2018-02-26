# The basic structure of a for/else loop
# The else clause executes when the loop complete normally.
for item in container:
    if search_something(item):
        # Found it
        process(item)
        break
        
else:
    # Didn't find anything
    not_found_incontainer()
    
    
for n in range(2, 10)
    for x in range(2, n)
        if n % x == 0:
            print(n, 'equals', x, '*', n/x)
            break
    else:
        # Loop fell through without finding a factor
        print(n, 'is a prime number')
        
        
if is_enabled:
    for service in client.chat.services.list():
        if service.friendly_name == str(event_id):
            service_id = service.sid
            break
    else:
        service = client.chat.services.create(friendly_name=str(event_id))
        service_id = service.sid

    messages.service_id = service_id
else:
    messages.service_id = ""
