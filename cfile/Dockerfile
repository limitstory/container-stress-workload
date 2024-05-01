FROM ubuntu:18.04
RUN apt-get update
RUN apt-get install -y gcc stress
WORKDIR /app
COPY stress_cpu_15 stress_cpu_15

ENTRYPOINT ["./stress_cpu_15"]
