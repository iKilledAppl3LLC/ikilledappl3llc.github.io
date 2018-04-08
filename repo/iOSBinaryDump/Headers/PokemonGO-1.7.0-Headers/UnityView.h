//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UnityRenderingView.h"

@interface UnityView : UnityRenderingView
{
    struct CGSize _surfaceSize;
    int _curOrientation;
    _Bool _recreateView;
}

@property(readonly, nonatomic) int contentOrientation; // @synthesize contentOrientation=_curOrientation;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recreateGLESSurface;
- (void)recreateGLESSurfaceIfNeeded;
- (void)didRotate;
- (void)willRotateToOrientation:(long long)arg1 fromOrientation:(long long)arg2;
- (void)layoutSubviews;
- (id)initFromMainScreen;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scaleFactor:(double)arg2;
- (void)initImpl:(struct CGRect)arg1 scaleFactor:(double)arg2;
- (void)onUpdateSurfaceSize:(struct CGSize)arg1;

@end

