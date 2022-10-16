begin
    sum <= 1
    deno <= 2
    sign <= -1
    while deno <= 100
        term <= sign * (1 / deno)
        sum += term
        deno++

    print sum
end