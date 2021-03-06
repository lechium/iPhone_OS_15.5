//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface AXSSPunctuationGroup : NSObject
{
    _Bool _inCloud;	// 8 = 0x8
    _Bool _inDatabase;	// 9 = 0x9
    unsigned short _version;	// 10 = 0xa
    NSUUID *_uuid;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSArray *_entries;	// 32 = 0x20
    NSSet *_autoSwitchContexts;	// 40 = 0x28
    NSUUID *_basePunctuationUUID;	// 48 = 0x30
    NSString *_ckChangeTag;	// 56 = 0x38
    NSDate *_lastModifiedDate;	// 64 = 0x40
    NSDate *_ckRecordProcessDate;	// 72 = 0x48
}

+ (id)punctuationGroupFromJSONRepresentation:(id)arg1;	// IMP=0x000000000001c7cd
- (void).cxx_destruct;	// IMP=0x000000000001d361
@property(nonatomic) _Bool inDatabase; // @synthesize inDatabase=_inDatabase;
@property(retain, nonatomic) NSDate *ckRecordProcessDate; // @synthesize ckRecordProcessDate=_ckRecordProcessDate;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *ckChangeTag; // @synthesize ckChangeTag=_ckChangeTag;
@property(nonatomic) _Bool inCloud; // @synthesize inCloud=_inCloud;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(retain, nonatomic) NSUUID *basePunctuationUUID; // @synthesize basePunctuationUUID=_basePunctuationUUID;
@property(retain, nonatomic) NSSet *autoSwitchContexts; // @synthesize autoSwitchContexts=_autoSwitchContexts;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d1b4
- (id)description;	// IMP=0x000000000001d076
@property(readonly, nonatomic) _Bool isSystemPunctuationGroup;
@property(readonly, nonatomic) NSData *jsonRepresentation;
@property(readonly, nonatomic) NSDictionary *jsonDictionary;
- (id)init;	// IMP=0x000000000001c71a

@end

