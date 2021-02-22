Test.Test("Test 1098", function(test, wait, ss, fail)
    test(function()
        EnterGame.hide()
        g_settings.setNode("things", {})
        g_game.setClientVersion(1098)
        g_game.setProtocolVersion(g_game.getClientProtocolVersion(1098))
        g_game.playRecord("1098.record")
    end)
    wait(5000)
    ss()
    wait(1000)
    wait(5000)
    ss()
    wait(5000)
    ss()
    wait(5000)
    ss()
    wait(5000)
    ss()
    test(function()
        if not g_game.isOnline() then
            fail("Should be online")
        end
        g_game.forceLogout()    
    end)
    wait(1000)
    ss()
    test(function()
        if g_game.isOnline() then
            fail("Shouldn't be online")
        end
        EnterGame.show()
    end)
end)