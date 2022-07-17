//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPFaceAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPPhotosQuickFaceDetectionManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPFaceAnalyzer *_faceAnalyzer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003cdb9
- (int)processAsset:(id)arg1;	// IMP=0x000000000003c9a6
- (int)_persistFaces:(id)arg1 forAsset:(id)arg2;	// IMP=0x000000000003c443
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000003c33d
- (id)init;	// IMP=0x000000000003c32f

@end
