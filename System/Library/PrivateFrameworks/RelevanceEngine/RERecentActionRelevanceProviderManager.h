//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableDictionary;

@interface RERecentActionRelevanceProviderManager
{
    NSMutableDictionary *_relevanceProviderMap;	// 8 = 0x8
    NSDate *_lastDateUpdate;	// 16 = 0x10
}

+ (_Bool)_supportsHistoricProviders;	// IMP=0x000000000006ea68
+ (id)_features;	// IMP=0x000000000006e796
+ (Class)_relevanceProviderClass;	// IMP=0x000000000006e785
- (void).cxx_destruct;	// IMP=0x000000000006f34e
- (void)_prepareForUpdate;	// IMP=0x000000000006f30e
- (void)_handleSignificantTimeChange;	// IMP=0x000000000006f256
- (void)pause;	// IMP=0x000000000006f1e2
- (void)resume;	// IMP=0x000000000006f15b
- (void)_scheduleUpdatesForActionProvider:(id)arg1;	// IMP=0x000000000006ef1e
- (void)_removeProvider:(id)arg1;	// IMP=0x000000000006eec5
- (void)_addedProvider:(id)arg1;	// IMP=0x000000000006ee32
- (void)_handleActionPerformedNotifiction:(id)arg1;	// IMP=0x000000000006ed43
- (float)_relevanceForHistoricProvider:(id)arg1;	// IMP=0x000000000006ec05
- (_Bool)_isHistoricProvider:(id)arg1;	// IMP=0x000000000006ea70
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x000000000006e85d
- (void)dealloc;	// IMP=0x000000000006e710
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000006e649

@end

