FROM gcc:12.2.0 AS builder

WORKDIR /app

COPY . .

RUN mkdir -p build
WORKDIR /app/build

RUN g++ -o hello_world ../src/hello_world.cpp

FROM ubuntu:24.04

RUN apt-get update && apt-get install -y \
    libstdc++6 \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /root/

COPY --from=builder /app/build/hello_world .

CMD ["./hello_world"]
