//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UnityAppController.h"

@interface UnityAppController (Rendering)
@property(readonly, nonatomic) int renderingAPI;
- (void)selectRenderingAPI;
- (void)callbackFramerateChange:(int)arg1;
- (void)callbackPresent:(const struct UnityFrameStats *)arg1;
- (void)callbackGfxInited;
- (void)repaint;
- (void)repaintDisplayLink;
- (void)createDisplayLink;
@end

