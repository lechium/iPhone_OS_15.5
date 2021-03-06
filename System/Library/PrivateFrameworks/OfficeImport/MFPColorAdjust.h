//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPColorAdjust : NSObject
{
    struct MFPColorMatrix *mColorMatrix;	// 8 = 0x8
    struct MFPColorMatrix *mGrayMatrix;	// 16 = 0x10
    int mColorMatrixFlags;	// 24 = 0x18
    OITSUColor *mTransparentRangeLow;	// 32 = 0x20
    OITSUColor *mTransparentRangeHigh;	// 40 = 0x28
    float mGamma;	// 48 = 0x30
    NSDictionary *mRecolorMap;	// 56 = 0x38
    float mThreshold;	// 64 = 0x40
    _Bool mEnabled;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000372741
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000372738
- (_Bool)isEnabled;	// IMP=0x000000000037272f
- (void)setThreshold:(float)arg1;	// IMP=0x0000000000372724
- (float)threshold;	// IMP=0x0000000000372719
- (void)setRecolorMap:(id)arg1;	// IMP=0x0000000000372708
- (id)recolorMap;	// IMP=0x00000000003726fa
- (void)setGamma:(float)arg1;	// IMP=0x00000000003726ef
- (float)gamma;	// IMP=0x00000000003726e4
- (void)setTransparentLow:(id)arg1 high:(id)arg2;	// IMP=0x0000000000372678
- (id)transparentHigh;	// IMP=0x000000000037266a
- (id)transparentLow;	// IMP=0x000000000037265c
- (void)setColorMatrixFlags:(int)arg1;	// IMP=0x0000000000372653
- (int)colorMatrixFlags;	// IMP=0x000000000037264a
- (void)setGrayMatrix:(struct MFPColorMatrix *)arg1;	// IMP=0x00000000003725e8
- (struct MFPColorMatrix *)grayMatrix;	// IMP=0x00000000003725de
- (void)setColorMatrix:(struct MFPColorMatrix *)arg1;	// IMP=0x000000000037257c
- (struct MFPColorMatrix *)colorMatrix;	// IMP=0x0000000000372572
- (void)dealloc;	// IMP=0x0000000000372525
- (id)init;	// IMP=0x00000000003724db

@end

