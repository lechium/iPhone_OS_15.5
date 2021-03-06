//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;

@interface HDSourceOrderManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HDDatabaseValueCache *_sourceOrdersForTypeCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022f80e
- (_Bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022e2e8
- (_Bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a7b7
- (id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000000000144ce
- (id)orderedSourcesForObjectType:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022a75e
- (_Bool)createSourceOrdersWithCodables:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000228f4b
- (void)resetCacheWithTransaction:(id)arg1;	// IMP=0x0000000000228f35
- (_Bool)resetCacheWithError:(id *)arg1;	// IMP=0x0000000000228e45
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000228cc4

@end

