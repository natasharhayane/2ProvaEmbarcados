library ieee;
use ieee.std_logic_1164.all;
library ieee;
use ieee.std_logic_unsigned.all;
library ieee;
use ieee.std_logic_arith.all;


entity portasLogicas is
  port(
    A,B: in std_logic;
    X: out std_logic;
  );
  end portasLogicas;

  architecture portaOR of portasLogicas is
    begin 
    X <= not (A or B);
   

    end portaOR;
