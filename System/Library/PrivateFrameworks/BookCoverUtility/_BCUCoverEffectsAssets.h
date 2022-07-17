//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _BCUCoverEffectsAssets : NSObject
{
    struct CGImage *_spineNormalBlend;	// 8 = 0x8
    struct CGImage *_spineLinearBurnBlend;	// 16 = 0x10
    struct CGImage *_spineSoftLightBlend;	// 24 = 0x18
    struct CGImage *_edges;	// 32 = 0x20
    struct CGColor *_overlayColor;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(readonly, nonatomic) struct CGImage *edges; // @synthesize edges=_edges;
@property(readonly, nonatomic) struct CGImage *spineSoftLightBlend; // @synthesize spineSoftLightBlend=_spineSoftLightBlend;
@property(readonly, nonatomic) struct CGImage *spineLinearBurnBlend; // @synthesize spineLinearBurnBlend=_spineLinearBurnBlend;
@property(readonly, nonatomic) struct CGImage *spineNormalBlend; // @synthesize spineNormalBlend=_spineNormalBlend;
- (id)initWithBundle:(id)arg1 rtl:(_Bool)arg2 night:(_Bool)arg3;	// IMP=0x0000000000003cee

@end
