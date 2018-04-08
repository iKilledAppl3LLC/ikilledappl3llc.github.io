//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface GIDProfileData : NSObject <NSCoding>
{
    NSString *_imageURL;
    NSString *_email;
    NSString *_name;
    NSString *_givenName;
    NSString *_familyName;
}

@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageURLWithDimension:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasImage;
- (id)initWithAuthentication:(id)arg1;

@end

