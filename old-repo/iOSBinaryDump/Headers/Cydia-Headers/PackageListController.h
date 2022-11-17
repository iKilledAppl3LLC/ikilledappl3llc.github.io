/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CyteViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Database;

@interface PackageListController : CyteViewController <UITableViewDataSource, UITableViewDelegate>
{
    Database *database_;
    unsigned int era_;
    struct MenesObjectHandle<NSArray, 0> packages_;
    struct MenesObjectHandle<NSArray, 0> sections_;
    struct MenesObjectHandle<UITableView, 2> list_;
    struct MenesObjectHandle<NSArray, 0> thumbs_;
    struct vector<int, std::allocator<int>> offset_;
    struct MenesObjectHandle<NSString, 0> title_;
    unsigned int reloading_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearData;
- (void)resetCursor;
- (void)reloadData;
- (id)sectionsForPackages:(id)fp8;
- (void)_reloadData;
- (id)_reloadPackages;
- (_Bool)shouldBlock;
- (_Bool)shouldYield;
- (void)setDelegate:(id)fp8;
- (void)releaseSubviews;
- (void)loadView;
- (id)initWithDatabase:(id)fp8 title:(id)fp12;
- (void)updateHeight;
- (int)tableView:(id)fp8 sectionForSectionIndexTitle:(id)fp12 atIndex:(int)fp16;
- (id)sectionIndexTitlesForTableView:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)packageAtIndexPath:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)didSelectPackage:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)getKeyboardCurve:(int *)fp8 duration:(double *)fp12 forNotification:(id)fp16;
- (void)resizeForKeyboardBounds:(struct CGRect)fp8;
- (void)resizeForKeyboardBounds:(struct CGRect)fp8 duration:(double)fp24;
- (void)resizeForKeyboardBounds:(struct CGRect)fp8 duration:(double)fp24 curve:(int)fp32;
- (void)deselectWithAnimation:(BOOL)fp8;
- (_Bool)showsSections;
- (_Bool)isSummarized;
- (id)referrerURL;

@end
