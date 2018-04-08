/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FilteredPackageListController.h"

@interface ChangesController : FilteredPackageListController
{
    unsigned int upgrades_;
}

- (id)sectionsForPackages:(id)fp8;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithDatabase:(id)fp8;
- (void)useFilter;
- (_Bool)shouldBlock;
- (_Bool)shouldYield;
- (void)upgradeButtonClicked;
- (void)cancelButtonClicked;
- (void)refreshButtonClicked;
- (void)setLeftBarButtonItem;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (id)packageAtIndexPath:(id)fp8;
- (id)navigationURL;
- (id)referrerURL;

@end

