//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CPLNewAssetExtractionStep
{
    NSMutableSet *_alreadySeenMasterScopedIdentifiers;	// 24 = 0x18
    unsigned long long _maximumCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d459b
@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;	// IMP=0x00000000000d457d
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;	// IMP=0x00000000000d452b
- (void)reset;	// IMP=0x00000000000d450e
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000d3599
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00000000000d33fb

@end
