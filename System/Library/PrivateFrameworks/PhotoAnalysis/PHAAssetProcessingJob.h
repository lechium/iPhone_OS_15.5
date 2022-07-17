//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob
{
    NSArray *_assetLocalIdentifiers;	// 8 = 0x8
    NSRecursiveLock *_resultsLock;	// 16 = 0x10
    NSMutableDictionary *_resultsByAssetLocalIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009712e
@property(readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier; // @synthesize resultsByAssetLocalIdentifier=_resultsByAssetLocalIdentifier;
@property(readonly) NSRecursiveLock *resultsLock; // @synthesize resultsLock=_resultsLock;
@property(readonly, nonatomic) NSArray *assetLocalIdentifiers; // @synthesize assetLocalIdentifiers=_assetLocalIdentifiers;
- (void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;	// IMP=0x0000000000096f4a
- (unsigned long long)resultForAssetLocalIdentifier:(id)arg1;	// IMP=0x0000000000096e9b
@property(readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
- (unsigned long long)resultCount;	// IMP=0x0000000000096c1a
- (unsigned long long)successfulResultCount;	// IMP=0x0000000000096a84
- (float)completionScore;	// IMP=0x00000000000967fe
- (_Bool)finished;	// IMP=0x000000000009677e
- (id)statusAsDictionary;	// IMP=0x000000000009668b
- (id)description;	// IMP=0x0000000000096543
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009645e
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4;	// IMP=0x0000000000096386
- (id)_resultsCopy;	// IMP=0x0000000000096326

@end
