CURRENT=builds/ergodox_ez_henrikrudstrom
if test -f "$CURRENT".hex; then
    cp "$CURRENT".hex "$CURRENT"_$(git rev-parse --short HEAD).hex
fi

make ergodox_ez:henrikrudstrom
mkdir -p builds
cp .build/ergodox_ez_henrikrudstrom.hex "$CURRENT".hex
