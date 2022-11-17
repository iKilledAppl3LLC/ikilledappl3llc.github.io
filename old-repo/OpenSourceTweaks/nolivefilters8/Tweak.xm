%hook CAMCaptureController

-(bool) supportsLiveEffects {
	  
	  return FALSE;
	  return %orig;

}

%end