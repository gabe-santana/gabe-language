
# Gabe language Overview (Preview 2021.07.06)

>Gabe is a simple strongly typed functional paradigm programming language.

## Data Types

In this preview, gabe has only 5 data types: 

| Type | Minimum size | Value range |
| ------ | ------ |  ------ |
| char | 8 bits | -128 to 127 or 0 to 255
| int | 16 bits | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
| long | 32 bits | -9223372036854775808 to 9223372036854775807
| float | 4 bytes | 1.2E-38 to 3.4E+38
| double | 8 bytes | 2.3E-308 to 1.7E+308


## (Preview) Declarations

## Variables
```ruby
variable:type;
```
## Functions 
```ruby
function = (parameters):type => {
    //body's function
    //...
}
```
