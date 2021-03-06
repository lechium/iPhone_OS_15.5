//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject
{
    TSDFrameSpec *mFrameSpec;	// 8 = 0x8
    double mAssetScale;	// 16 = 0x10
    struct CGSize mSize;	// 24 = 0x18
    double mViewScale;	// 40 = 0x28
    struct CGImage *mImages[4];	// 48 = 0x30
}

@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(nonatomic) double assetScale; // @synthesize assetScale=mAssetScale;
@property(nonatomic) TSDFrameSpec *frameSpec; // @synthesize frameSpec=mFrameSpec;
- (void)setImage:(struct CGImage *)arg1 forCALayer:(_Bool)arg2 mask:(_Bool)arg3;	// IMP=0x00000000001e0ae7
- (struct CGImage *)newImageForCALayer:(_Bool)arg1 mask:(_Bool)arg2;	// IMP=0x00000000001e0abd
- (void)dealloc;	// IMP=0x00000000001e0a71

@end

