//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USConfigurationBase.h"

@class NSArray, NSString;

@interface USRouteFilterConfiguration : USConfigurationBase
{
    NSString *_filter;
    NSArray *_queues;
}

+ (_Bool)isValidConfigurationDictionary:(id)arg1;
+ (id)requiredKeys;
@property(retain, nonatomic) NSArray *queues; // @synthesize queues=_queues;
@property(retain, nonatomic) NSString *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)arg1;

@end

