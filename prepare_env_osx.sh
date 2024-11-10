#!/bin/bash

# brew install cmake
# brew install googletest
# brew install jq

LAUNCH_JSON_FILE=.vscode/launch.json
TMP_LAUNCH_JSON_FILE=.vscode/tmp_launch.json

pushd ~/
pwd=$(pwd)
popd

vscodeExtensionsPath=$pwd/.vscode/extensions/
latestMiDebbuggerPath="$vscodeExtensionsPath$(ls $vscodeExtensionsPath | grep "ms-vscode.cpptools-[0-9\.]*-darwin-arm64")/debugAdapters/lldb-mi/bin/lldb-mi"
jq --arg latestMiDebbuggerPath "$latestMiDebbuggerPath" '.configurations[0].miDebuggerPath = $latestMiDebbuggerPath' $LAUNCH_JSON_FILE >$TMP_LAUNCH_JSON_FILE
mv $TMP_LAUNCH_JSON_FILE $LAUNCH_JSON_FILE
rm -f $TMP_LAUNCH_JSON_FILE
