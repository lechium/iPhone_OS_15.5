//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, PLFaceRebuildHelper, PLManagedAsset;

@interface PLCPLFaceRebuildSupport : NSObject
{
    PLManagedAsset *_asset;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    PLFaceRebuildHelper *_rebuildHelper;	// 24 = 0x18
    int _detectedFaceCount;	// 32 = 0x20
    int _rejectedFaceCount;	// 36 = 0x24
    int _hiddenFaceCount;	// 40 = 0x28
}

+ (void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000037de72
- (void).cxx_destruct;	// IMP=0x000000000037de3f
- (id)fetchPersonForDeferredFace:(id)arg1;	// IMP=0x000000000037ddd5
- (id)fetchDeferredFacesToRebuild;	// IMP=0x000000000037dd6a
- (void)rebuildHiddenFace:(id)arg1;	// IMP=0x000000000037dce1
- (void)rebuildRejectedFace:(id)arg1;	// IMP=0x000000000037dc03
- (void)rebuildDetectedFace:(id)arg1;	// IMP=0x000000000037db25
- (void)rebuildFace:(id)arg1;	// IMP=0x000000000037d91e
- (void)rebuildAllFaces;	// IMP=0x000000000037d66f
- (id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x000000000037d599

@end

