CURRENT=builds/moonlander_henrikrudstrom
if test -f "$CURRENT".hex; then
    cp "$CURRENT".hex "$CURRENT"_$(git rev-parse --short HEAD).hex
fi

make moonlander:henrikrudstrom
mkdir -p builds
cp .build/moonlander_henrikrudstrom.hex "$CURRENT".hex
