//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRPreferences : NSObject
{
    NSString *_critterKey;
}

@property(retain, nonatomic) NSString *critterKey; // @synthesize critterKey=_critterKey;
- (void).cxx_destruct;
- (void)storeValue:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3;
- (void)storeValue:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 wasWritten:(_Bool *)arg4;
- (void)doStoreValue:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 wasWritten:(_Bool *)arg4;
- (void)clearValueForKey:(id)arg1 andDictionary:(id)arg2;
- (id)getValueWithKey:(id)arg1 andDictionaryName:(id)arg2;
- (id)getDict:(id)arg1;
- (id)getRootDict;
- (id)describe;
- (void)reset;
- (id)initWithAppId:(id)arg1;

@end

