//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/RESessionRelevanceProviderManagerProperties-Protocol.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager <RESessionRelevanceProviderManagerProperties>
{
    NSDate *_lastDateUpdate;	// 8 = 0x8
}

+ (_Bool)_supportsHistoricProviders;	// IMP=0x00000000000fad81
+ (_Bool)_wantsSeperateRelevanceQueue;	// IMP=0x00000000000faacd
+ (id)_features;	// IMP=0x00000000000faa3b
+ (Class)_relevanceProviderClass;	// IMP=0x00000000000faa2a
- (void).cxx_destruct;	// IMP=0x00000000000fb125
@property(readonly, nonatomic) NSDate *lastUpdateDate;
- (void)_handleSignificantTimeChange;	// IMP=0x00000000000fb058
- (void)pause;	// IMP=0x00000000000fafe4
- (void)resume;	// IMP=0x00000000000faf5d
- (void)_prepareForUpdate;	// IMP=0x00000000000faf1d
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;	// IMP=0x00000000000fadc2
- (void)_addedProvider:(id)arg1;	// IMP=0x00000000000fadb0
- (float)_relevanceForHistoricProvider:(id)arg1;	// IMP=0x00000000000fad9e
- (_Bool)_isHistoricProvider:(id)arg1;	// IMP=0x00000000000fad89
- (float)_relevanceForProvider:(id)arg1;	// IMP=0x00000000000faad5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

