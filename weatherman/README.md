The "Weather Station" task involves collecting and analyzing weather data from external sensors and devices in City X. This data is recorded every half hour and stored in a text file. The information in each record includes temperature, air humidity, wind speed, atmospheric pressure, and precipitation type. This README provides an overview of the task and its requirements.
Data Format

Each weather data record in the text file is structured as follows:

Data fields are separated by whitespace characters (space or tab). Here's the decoding for precipitation types:

- `0: No precipitation`
- `-1: Light snow`
- `-2: Snow`
- `-3: Heavy snow (snowfall)`
- `1: Drizzle`
- `2: Light rain`
- `3: Rain`
- `4: Rainfall`
- `5: Fog`

### Mandatory Task

The mandatory part of the task requires you to create a program that performs the following actions:

- Read data from an existing text file.

- Display the data on the screen in the format: t=temperature; w=air humidity; s=wind speed; p=atmospheric pressure; pr=precipitation type.

- Example:

```
t=1; w=75; s=3.5; p=747; pr=no precipitation
t=-1; w=77; s=3; p=748; pr=light snow
```

- Calculate the following statistics:
	- The number of time intervals in the file.
    - Average air temperature.
    - Minimum air temperature.
    - Maximum air temperature.
    - The number of time intervals when a specific type of precipitation was observed (user input required).
	- Display the calculated data on the screen and in an output text file (format and structure of the output file are up to you).

#### Additional Task (Optional)

The additional part of the task includes optional features:

- Allowing the user to input the names of input and output files.
- Implementing error handling for file operations (e.g., file not found, file creation error, data format errors).
- Adding data to the input file.
- Calculating and displaying data for constructing a histogram based on selected indicators.

### Usage

Please refer to the documentation of your program for detailed instructions on how to run it and use its features.

Note: The names of the input and output files should be constants in the program, but error handling for file operations is optional and may not be implemented.
