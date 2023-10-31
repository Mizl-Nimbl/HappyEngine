local clock = os.clock

function Display()
    --take the sprite
    --display the sprite
end

function Attack()
    --cycle through sections of the sprite
end

function Walk()
    print("walking")
end

function Idle()
    print("idling")
end

function Wait(seconds)
    local t0 = clock()
    while clock() - t0 <= seconds do end
end