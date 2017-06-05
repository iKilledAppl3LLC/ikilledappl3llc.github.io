%hook SBFolderSettings
-(BOOL) allowNestedFolders {
		return TRUE;
		return %orig;
}
%end
