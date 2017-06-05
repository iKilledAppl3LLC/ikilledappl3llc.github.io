//
//  TodayViewController.m
//  Today
//
//  Created by iKilledAppl3 on 6/19/14. Revised on 4/3/15.
//  Copyright (c) 2014-2015 ToxicAppl3 Inc. All rights reserved.
//

#import "TodayViewController.h"
#import <NotificationCenter/NotificationCenter.h>

@interface TodayViewController () <NCWidgetProviding>

@end

@implementation TodayViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self != nil) {
    }

    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self->AshImageview.image = [UIImage imageNamed:@"Ash-Ketchum-0.png"];
    self->AshImageview.clipsToBounds = NO;
    
    NSMutableArray *array = [NSMutableArray array];
    for (int i = 1; i < 13; i++) {
        [array addObject:[UIImage imageNamed:[NSString stringWithFormat:@"Ash-Ketchum-%d.png", i]]];
    }
    self->AshImageview.animationImages = array;
    self->AshImageview.animationDuration = 1.0;
    self->AshImageview.animationRepeatCount = INT_MAX;
    [ self->AshImageview startAnimating];
    
    self.view.clipsToBounds = NO;
}

- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(NCUpdateResult))completionHandler
{
    completionHandler(NCUpdateResultNewData);
}

@end
