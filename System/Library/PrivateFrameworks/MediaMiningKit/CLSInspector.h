//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject
{
    NSArray *_profileClasses;	// 8 = 0x8
    NSMutableDictionary *_profileClassesByIdentifier;	// 16 = 0x10
    NSArray *_informantClasses;	// 24 = 0x18
    NSMutableDictionary *_informantClassesByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_informantClassesByFamilyIdentifier;	// 40 = 0x28
}

+ (void)invalidateSharedTransientCaches;	// IMP=0x0000000000013793
+ (void)invalidateSharedPersistentCaches;	// IMP=0x00000000000135c9
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;	// IMP=0x0000000000013438
+ (void)invalidateAllSharedCaches;	// IMP=0x00000000000133c8
+ (id)sharedInspector;	// IMP=0x0000000000013365
- (void).cxx_destruct;	// IMP=0x0000000000013154
- (void)performInvestigation:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010e63
- (void)performInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010e49
- (void)performInvestigation:(id)arg1;	// IMP=0x0000000000010e2b
- (id)profileIdentifierForHash:(unsigned long long)arg1;	// IMP=0x0000000000010c59
- (Class)profileClassForIdentifier:(id)arg1;	// IMP=0x0000000000010c43
- (id)informantIdentifierForHash:(unsigned long long)arg1;	// IMP=0x0000000000010a71
- (id)informantIdentifiersForAnyIdentifier:(id)arg1;	// IMP=0x000000000001081f
- (id)informantClassesForAnyIdentifier:(id)arg1;	// IMP=0x0000000000010769
- (id)informantClassesForFamilyIdentifier:(id)arg1;	// IMP=0x0000000000010753
- (Class)informantClassForIdentifier:(id)arg1;	// IMP=0x000000000001073d
- (id)init;	// IMP=0x000000000001023c

@end

