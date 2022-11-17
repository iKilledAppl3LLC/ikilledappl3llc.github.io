#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <SpringBoard/SpringBoard.h>

%hook SpringBoard
-(void)applicationDidFinishLaunching:(id)application{
			%orig;

 UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Hello User" 
		    message:@"Welcome Stranger"
		    delegate:self 
		    cancelButtonTitle:@"OK thanks for the UIAlert!"
		    otherButtonTitles:nil];
		    [alert show];
		    [alert release];
}
%end
