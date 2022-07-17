//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString;

@interface PXExploreLayoutMetrics <PXGDiagnosticsProvider>
{
    _Bool _allowHeaders;	// 8 = 0x8
    _Bool _allowSpecialPanoHeaders;	// 9 = 0x9
    long long _layoutType;	// 16 = 0x10
    long long _layoutSubtype;	// 24 = 0x18
    double _interitemSpacing;	// 32 = 0x20
    long long _largeHeroDensity;	// 40 = 0x28
    CDUnknownBlockType _acceptableLargeHeroPredicate;	// 48 = 0x30
    double _buildingBlockAspectRatio;	// 56 = 0x38
    struct UIEdgeInsets _safeAreaInsets;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003df30e
@property(nonatomic) double buildingBlockAspectRatio; // @synthesize buildingBlockAspectRatio=_buildingBlockAspectRatio;
@property(nonatomic) _Bool allowSpecialPanoHeaders; // @synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders;
@property(nonatomic) _Bool allowHeaders; // @synthesize allowHeaders=_allowHeaders;
@property(copy, nonatomic) CDUnknownBlockType acceptableLargeHeroPredicate; // @synthesize acceptableLargeHeroPredicate=_acceptableLargeHeroPredicate;
@property(nonatomic) long long largeHeroDensity; // @synthesize largeHeroDensity=_largeHeroDensity;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long layoutSubtype; // @synthesize layoutSubtype=_layoutSubtype;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003def6e
- (id)initWithSpec:(id)arg1;	// IMP=0x00000000003dee69
- (id)initWithExtendedTraitCollection:(id)arg1;	// IMP=0x00000000003ded64
- (id)initWithUserInterfaceIdiom:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 referenceSize:(struct CGSize)arg4 safeAreaInsets:(struct UIEdgeInsets)arg5;	// IMP=0x00000000003debd3
- (id)init;	// IMP=0x00000000003deb95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
