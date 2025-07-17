

darwin.silverchain.generate({
    src = "src",
    tags = { "dep", "fdeclare","globals","fdefine" },
    project_short_cut = "front_react",
    implement_main = false
})
os.execute("emcc src/main.c  -o outputs/main.js")