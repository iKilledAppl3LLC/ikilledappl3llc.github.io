/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

 //Dumped by @iKilledAppl3//
 
#import "CyteViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Database, NSURLConnection;

@interface SourcesController : CyteViewController <UITableViewDataSource, UITableViewDelegate>
{
    Database *database_;
    unsigned int era_;
    struct MenesObjectHandle<UITableView, 2> list_;
    struct MenesObjectHandle<NSMutableArray, 0> sources_;
    int offset_;
    struct MenesObjectHandle<NSString, 0> href_;
    struct MenesObjectHandle<UIProgressHUD, 0> hud_;
    struct MenesObjectHandle<NSError, 0> error_;
    NSURLConnection *trivial_bz2_;
    NSURLConnection *trivial_gz_;
    BOOL cydia_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)editButtonClicked;
- (void)cancelButtonClicked;
- (void)refreshButtonClicked;
- (void)addButtonClicked;
- (void)showAddSourcePrompt;
- (void)reloadData;
- (id)initWithDatabase:(id)fp8;
- (void)releaseSubviews;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateButtonsForEditingStatusAnimated:(BOOL)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (id)_requestHRef:(id)fp8 method:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)_endConnection:(id)fp8;
- (id)getWarning;
- (void)complete;
- (void)tableView:(id)fp8 didEndEditingRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)sourceAtIndexPath:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (id)navigationURL;
- (void)dealloc;
- (void)_releaseConnection:(id)fp8;

@end

