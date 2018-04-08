//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GKGameCenterControllerDelegate.h"

@class GKGameCenterViewController, NSString;

@interface AchievementWrapper : UIViewController <GKGameCenterControllerDelegate>
{
    GKGameCenterViewController *m_AchievementsView;
}

+ (void)reportProgressWithCache:(double)arg1 withIdentifier:(id)arg2;
+ (void)reportSingleAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)reportProgress:(double)arg1 withIdentifier:(id)arg2;
+ (void)loadAchievements;
+ (void)loadAchievementDescriptions;
- (void).cxx_destruct;
- (void)gameCenterViewControllerDidFinish:(id)arg1;
- (void)showAchievementsUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

