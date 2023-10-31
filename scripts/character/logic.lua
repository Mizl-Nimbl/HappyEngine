function Run()
    Display()
    local aistate = DetermineState()
    Attack()
    if aistate == 1 then
        Walk()
    end
    if aistate == 2 then
        Idle()
    end
end

function DetermineState()
    Wait(math.random(3, 8))
    local aistate = math.random(1, 2)
    return aistate
end