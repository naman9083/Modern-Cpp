def outer():
    def inner_fn():
        data = "top secret: nitish kumar se bach ke raho"
        print(data)
    return inner_fn


magic_fn = outer()

magic_fn()