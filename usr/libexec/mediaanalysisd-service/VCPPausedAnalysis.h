//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPPausedAnalysis : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)pausedAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x004000000007c23d
+ (id)persistedPausedAnalysisFromPhotoLibrary:(id)arg1;	// IMP=0x001000000007c121
+ (id)filepathForPhotoLibrary:(id)arg1;	// IMP=0x001000000007bd4f
- (void).cxx_destruct;	// IMP=0x002000000007c6c1
@property(readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (int)persist;	// IMP=0x001000000007c2d1
- (id)initWithAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x001000000007c186
- (id)initWithFileFromPhotoLibrary:(id)arg1;	// IMP=0x001000000007bdbd

@end
