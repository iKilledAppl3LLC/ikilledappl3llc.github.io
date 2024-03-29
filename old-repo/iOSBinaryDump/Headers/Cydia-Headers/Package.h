/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@class Database, NSString;

@interface Package : _CC_MD5
{
    unsigned int era_:25;
    unsigned int role_:3;
    unsigned int essential_:1;
    unsigned int obsolete_:1;
    unsigned int ignored_:1;
    unsigned int pooled_:1;
    struct CYPool *pool_;
    unsigned int rank_;
    Database *database_;
    struct VerIterator version_;
    struct PkgIterator iterator_;
    struct VerFileIterator file_;
    struct CYString id_;
    struct CYString name_;
    struct CYString transform_;
    struct CYString latest_;
    struct CYString installed_;
    long upgraded_;
    const char *section_;
    NSString *section$_;
    struct MenesObjectHandle<Source, 0> source_;
    struct PackageValue *metadata_;
    struct ParsedPackage *parsed_;
    struct MenesObjectHandle<NSMutableArray, 0> tags_;
}

+ (id)packageWithIterator:(struct PkgIterator)fp8 withZone:(struct _NSZone *)fp20 inPool:(struct CYPool *)fp24 database:(id)fp28;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)fp8;
+ (id)_attributeKeys;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)fp8;
+ (id)webScriptNameForSelector:(SEL)fp8;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)remove;
- (void)install;
- (void)clear;
- (unsigned int)compareBySection:(id)fp8;
- (struct CYString *)cyname;
- (void)setIndex:(unsigned long)fp8;
- (_Bool)isCommercial;
- (id)purposes;
- (id)primaryPurpose;
- (BOOL)hasTag:(id)fp8;
- (id)tags;
- (BOOL)matches:(id)fp8;
- (unsigned int)rank;
- (unsigned int)recent;
- (long)upgraded;
- (id)source;
- (id)applications;
- (id)warnings;
- (id)selection;
- (id)state;
- (id)files;
- (id)support;
- (id)author;
- (id)depiction;
- (id)homepage;
- (id)icon;
- (id)name;
- (id)id;
- (id)mode;
- (BOOL)hasMode;
- (BOOL)halfInstalled;
- (BOOL)halfConfigured;
- (BOOL)half;
- (BOOL)visible;
- (BOOL)unfiltered;
- (BOOL)broken;
- (BOOL)essential;
- (BOOL)upgradableAndEssential:(BOOL)fp8;
- (BOOL)valid;
- (BOOL)uninstalled;
- (id)installed;
- (id)latest;
- (BOOL)ignored;
- (_Bool)setSubscribed:(_Bool)fp8;
- (_Bool)subscribed;
- (long)seen;
- (struct PackageValue *)metadata;
- (unsigned short)index;
- (id)shortDescription;
- (id)longDescription;
- (unsigned long)size;
- (id)md5sum;
- (id)maintainer;
- (id)uri;
- (id)shortSection;
- (id)longSection;
- (id)simpleSection;
- (id)section;
- (struct PkgIterator)iterator;
- (id)initWithVersion:(struct VerIterator)fp8 withZone:(struct _NSZone *)fp16 inPool:(struct CYPool *)fp20 database:(id)fp24;
- (void)parse;
- (id)getRecord;
- (id)getField:(id)fp8;
- (id)architecture;
- (id)relations;
- (id)attributeKeys;
- (void)dealloc;
- (id)description;

@end

