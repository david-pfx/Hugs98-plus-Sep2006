-----------------------------------------------------------------------------
-- |
-- Module      :  System.Win32.Console
-- Copyright   :  (c) University of Glasgow 2006
-- License     :  BSD-style (see the file LICENSE)
--
-- Maintainer  :  Esa Ilari Vuokko <ei@vuokko.info>
-- Stability   :  provisional
-- Portability :  portable
--
-- A collection of FFI declarations for interfacing with Win32 Console API
--
-----------------------------------------------------------------------------

module System.Win32.Console (
	-- * Console code pages
	getConsoleCP,
	setConsoleCP,
	getConsoleOutputCP,
	setConsoleOutputCP,
	-- * Ctrl events
	CtrlEvent, cTRL_C_EVENT, cTRL_BREAK_EVENT,
	generateConsoleCtrlEvent
  ) where

import System.Win32.Types

foreign import stdcall unsafe "windows.h GetConsoleCP"
	getConsoleCP :: IO UINT

foreign import stdcall unsafe "windows.h SetConsoleCP"
	setConsoleCP :: UINT -> IO ()

foreign import stdcall unsafe "windows.h GetConsoleOutputCP"
	getConsoleOutputCP :: IO UINT

foreign import stdcall unsafe "windows.h SetConsoleOutputCP"
	setConsoleOutputCP :: UINT -> IO ()

type CtrlEvent = DWORD
#{enum CtrlEvent,
    , cTRL_C_EVENT      = 0
    , cTRL_BREAK_EVENT  = 1
    }

generateConsoleCtrlEvent :: CtrlEvent -> DWORD -> IO ()
generateConsoleCtrlEvent e p
    = failIfFalse_
        "generateConsoleCtrlEvent"
        $ c_GenerateConsoleCtrlEvent e p

foreign import stdcall safe "windows.h GenerateConsoleCtrlEvent"
    c_GenerateConsoleCtrlEvent :: CtrlEvent -> DWORD -> IO BOOL

-- ToDo: lots more
