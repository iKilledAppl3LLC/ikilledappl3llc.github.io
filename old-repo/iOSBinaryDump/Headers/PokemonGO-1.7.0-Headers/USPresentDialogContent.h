//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USContentUnit.h"

@class NSArray, NSDictionary, NSString;

@interface USPresentDialogContent : NSObject <USContentUnit>
{
    NSString *_contentProvider;
    NSDictionary *_parameters;
    NSString *_title;
    NSString *_message;
    NSArray *_buttonList;
}

@property(readonly, nonatomic) NSArray *buttonList; // @synthesize buttonList=_buttonList;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

