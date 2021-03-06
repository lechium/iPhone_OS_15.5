//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSSet;
@protocol AEPackageTransportDelegate;

@interface AEPackageTransport : PXObservable
{
    id <AEPackageTransportDelegate> _delegate;	// 8 = 0x8
    NSMutableOrderedSet *__allOrderedPackageIdentifiers;	// 16 = 0x10
    NSMutableDictionary *__stagedPackagesByIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003e1b
@property(readonly, nonatomic) NSMutableDictionary *_stagedPackagesByIdentifier; // @synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier;
@property(readonly, nonatomic) NSMutableOrderedSet *_allOrderedPackageIdentifiers; // @synthesize _allOrderedPackageIdentifiers=__allOrderedPackageIdentifiers;
@property(nonatomic) __weak id <AEPackageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removePendingPackageIdentifier:(id)arg1;	// IMP=0x0000000000003cd8
- (void)addPendingPackageIdentifier:(id)arg1;	// IMP=0x0000000000003c66
- (void)removeAllExpectedPackagesWithIdentifiers:(id)arg1;	// IMP=0x0000000000003c54
@property(readonly, nonatomic) NSSet *expectedPackageIdentifiers;
@property(readonly, nonatomic) long long expectedPackageCount;
- (unsigned long long)proposedStagedIndexForPendingIdentifier:(id)arg1;	// IMP=0x0000000000003b2d
- (id)stagedPackages;	// IMP=0x0000000000003aa9
- (id)stagedPackageForIdentifier:(id)arg1;	// IMP=0x0000000000003a26
- (id)orderedStagedIdentifiers;	// IMP=0x00000000000039d4
- (id)_orderedStagedIdentifiersIncludingPendingIdentifier:(id)arg1;	// IMP=0x00000000000038a4
- (void)unstagePackagesWithIdentifiers:(id)arg1;	// IMP=0x00000000000036b4
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;	// IMP=0x00000000000035cd
- (void)unstagePackageWithIdentifier:(id)arg1;	// IMP=0x00000000000035b6
- (void)stagePackages:(id)arg1 andNotify:(_Bool)arg2;	// IMP=0x00000000000034cf
- (void)stagePackages:(id)arg1;	// IMP=0x00000000000034b8
- (void)stagePackage:(id)arg1;	// IMP=0x0000000000003389
- (void)commitPackage:(id)arg1;	// IMP=0x0000000000003383
- (void)reportError:(id)arg1;	// IMP=0x00000000000032b4
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;	// IMP=0x00000000000031ff
- (void)_addPackageToStaging:(id)arg1;	// IMP=0x0000000000002f78
- (id)mutableChangeObject;	// IMP=0x0000000000002f6f
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002f40
- (id)init;	// IMP=0x0000000000002ebd
- (id)packagesWithLivePhotoContent;	// IMP=0x0000000000007ed2

@end

