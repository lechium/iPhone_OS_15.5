//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;

@interface VCPPhotosAssetChangeManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    unsigned long long _pendingResourceChangeCount;	// 24 = 0x18
}

+ (id)managerForPhotoLibrary:(id)arg1;	// IMP=0x0040000000080a2e
- (void).cxx_destruct;	// IMP=0x0020000000084d8e
- (int)publishPendingChanges;	// IMP=0x00100000000849ce
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x001000000008476d
- (int)updateLegacyAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0010000000084354
- (int)updateMovieAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0010000000083889
- (int)updateImageAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000829aa
- (int)associateTraitsForAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x001000000008105f
- (id)matchPerson:(struct CGRect)arg1 withPHFaces:(id)arg2;	// IMP=0x0010000000080b06
- (void)dealloc;	// IMP=0x0010000000080a93
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0010000000080969

@end

