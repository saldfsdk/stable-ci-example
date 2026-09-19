# stable-ci example

External integration example for [stable-ci](https://github.com/saldfsdk/stable-ci).

This repository verifies that stable-ci can be consumed from a separate GitHub repository.

It tests both distribution paths:

- npm: `stable-ci@0.1.3`
- GitHub Action: `saldfsdk/stable-ci@v0.1.3`

## What the CI does

1. Installs stable-ci from npm.
2. Starts the safe demo payment application.
3. Calls stable-ci as an external GitHub Action.
4. Runs deterministic stablecoin payment failure scenarios.
5. Produces a JUnit report.

## Local check

```bash
npm install
npx stable-ci --version
```