//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXStoryMutableItemPlacement-Protocol.h>

@class NSMutableArray, NSString, NSUUID, PXGLayout, PXRegionOfInterest, PXStoryItemPlacementContext;
@protocol PXDisplayAsset, UICoordinateSpace;

@interface PXStoryItemPlacement : NSObject <PXStoryMutableItemPlacement, NSCopying>
{
    PXStoryItemPlacementContext *_context;	// 8 = 0x8
    struct CGRect _rect;	// 16 = 0x10
    struct CGRect _rectVelocity;	// 48 = 0x30
    long long _rectReference;	// 80 = 0x50
    NSObject<UICoordinateSpace> *_coordinateSpace;	// 88 = 0x58
    PXGLayout *_layout;	// 96 = 0x60
    NSMutableArray *_registeredSourceIdentifiers;	// 104 = 0x68
    double _alpha;	// 112 = 0x70
    id <PXDisplayAsset> _displayedAsset;	// 120 = 0x78
    double _chromeAlpha;	// 128 = 0x80
    double _scrubberAlpha;	// 136 = 0x88
    double _legibilityOverlayAlpha;	// 144 = 0x90
    NSUUID *_uuid;	// 152 = 0x98
    CDStruct_2bd92d94 _cornerRadius;	// 160 = 0xa0
    struct CGRect _normalizedDisplayedAssetRect;	// 176 = 0xb0
    struct CGRect _normalizedTitleRect;	// 208 = 0xd0
    struct CGRect _normalizedSubtitleRect;	// 240 = 0xf0
    CDStruct_597fa96d _displayedAssetContentsRect;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000000c68c9
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) double legibilityOverlayAlpha; // @synthesize legibilityOverlayAlpha=_legibilityOverlayAlpha;
@property(readonly, nonatomic) double scrubberAlpha; // @synthesize scrubberAlpha=_scrubberAlpha;
@property(readonly, nonatomic) double chromeAlpha; // @synthesize chromeAlpha=_chromeAlpha;
@property(readonly, nonatomic) struct CGRect normalizedSubtitleRect; // @synthesize normalizedSubtitleRect=_normalizedSubtitleRect;
@property(readonly, nonatomic) struct CGRect normalizedTitleRect; // @synthesize normalizedTitleRect=_normalizedTitleRect;
@property(readonly, nonatomic) struct CGRect normalizedDisplayedAssetRect; // @synthesize normalizedDisplayedAssetRect=_normalizedDisplayedAssetRect;
@property(readonly, nonatomic) CDStruct_2bd92d94 cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) CDStruct_597fa96d displayedAssetContentsRect; // @synthesize displayedAssetContentsRect=_displayedAssetContentsRect;
@property(readonly, nonatomic) id <PXDisplayAsset> displayedAsset; // @synthesize displayedAsset=_displayedAsset;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c67d9
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) PXStoryItemPlacement *adjustedPreferredPlacement;
- (void)adjustPreferredPlacementInSourceWithIdentifier:(id)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6600
- (id)copyWithRegionOfInterest:(id)arg1;	// IMP=0x00000000000c656c
@property(readonly, nonatomic) PXRegionOfInterest *regionOfInterest;
- (id)copyWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c61e2
- (void)registerSourceIdentifier:(id)arg1;	// IMP=0x00000000000c6188
- (void)setLegibilityOverlayAlpha:(double)arg1;	// IMP=0x00000000000c617a
- (void)setScrubberAlpha:(double)arg1;	// IMP=0x00000000000c616c
- (void)setChromeAlpha:(double)arg1;	// IMP=0x00000000000c615e
- (void)setNormalizedSubtitleRect:(struct CGRect)arg1;	// IMP=0x00000000000c6142
- (void)setNormalizedTitleRect:(struct CGRect)arg1;	// IMP=0x00000000000c6126
- (void)setNormalizedDisplayedAssetRect:(struct CGRect)arg1;	// IMP=0x00000000000c610a
- (void)setCornerRadius:(CDStruct_2bd92d94)arg1;	// IMP=0x00000000000c60fa
- (void)setDisplayedAssetContentsRect:(CDStruct_597fa96d)arg1;	// IMP=0x00000000000c60d3
- (void)setDisplayedAsset:(id)arg1;	// IMP=0x00000000000c60c2
- (void)setAlpha:(double)arg1;	// IMP=0x00000000000c60b7
- (struct CGRect)rectInLayout:(id)arg1 velocity:(out struct CGRect *)arg2;	// IMP=0x00000000000c5e6a
- (void)setRect:(struct CGRect)arg1 velocity:(struct CGRect)arg2 inLayout:(id)arg3;	// IMP=0x00000000000c5e26
- (struct CGRect)rectInCoordinateSpace:(id)arg1 velocity:(out struct CGRect *)arg2;	// IMP=0x00000000000c5c4d
- (void)setRect:(struct CGRect)arg1 velocity:(struct CGRect)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x00000000000c5c09
- (id)initWithContext:(id)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5a6d
- (id)init;	// IMP=0x00000000000c59f3

@end

