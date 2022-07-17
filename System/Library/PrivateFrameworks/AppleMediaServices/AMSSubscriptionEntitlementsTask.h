//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AMSSubscriptionEntitlementsTask
{
    _Bool _extendedCarrierCheck;	// 8 = 0x8
    long long _cachePolicy;	// 16 = 0x10
    long long _mediaType;	// 24 = 0x18
}

+ (unsigned long long)_segmentForMediaType:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000222d96
+ (id)updateCacheForMediaType:(long long)arg1 account:(id)arg2 data:(id)arg3;	// IMP=0x00000000002209ee
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool extendedCarrierCheck; // @synthesize extendedCarrierCheck=_extendedCarrierCheck;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (_Bool)_shouldIgnoreRemoteData;	// IMP=0x0000000000222e7a
- (_Bool)_shouldIgnoreCaches;	// IMP=0x0000000000222e60
- (id)_resultFromICResponse:(id)arg1;	// IMP=0x00000000002229f4
- (id)_resultFromASDEntitlements:(id)arg1;	// IMP=0x0000000000221f4b
- (id)_reloadASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2;	// IMP=0x0000000000221cd0
- (id)_queryCachedASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2 reloadIfNeeded:(_Bool)arg3;	// IMP=0x00000000002219b7
- (id)_fetchEntitlementsFromIC;	// IMP=0x00000000002212cc
- (id)_fetchEntitlementsFromASD;	// IMP=0x0000000000220fba
- (id)performExternalLookup;	// IMP=0x000000000022092c
- (id)initWithMediaType:(long long)arg1;	// IMP=0x00000000002208e8

@end
