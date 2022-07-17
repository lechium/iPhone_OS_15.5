//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HDHealthRecordRulesetReferenceRule : NSObject
{
    long long _appliesTo;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    NSSet *_allowedResourceTypes;	// 24 = 0x18
    NSSet *_disallowedResourceTypes;	// 32 = 0x20
}

+ (id)referenceRulesetsForRules:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029200
- (void).cxx_destruct;	// IMP=0x0000000000029d75
@property(readonly, copy, nonatomic) NSSet *disallowedResourceTypes; // @synthesize disallowedResourceTypes=_disallowedResourceTypes;
@property(readonly, copy, nonatomic) NSSet *allowedResourceTypes; // @synthesize allowedResourceTypes=_allowedResourceTypes;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) long long appliesTo; // @synthesize appliesTo=_appliesTo;
- (id)description;	// IMP=0x0000000000029cc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000299a3
- (unsigned long long)hash;	// IMP=0x0000000000029949
- (id)initWithKeyPath:(id)arg1 allowedTypes:(id)arg2 disallowedTypes:(id)arg3;	// IMP=0x00000000000290fc

@end
