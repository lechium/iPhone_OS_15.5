//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject
{
    PXAssetsSectionLayoutSpec *_assetsSectionLayoutSpec;	// 8 = 0x8
    struct UIEdgeInsets _containerInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000430d00
@property(readonly, nonatomic) struct UIEdgeInsets containerInsets; // @synthesize containerInsets=_containerInsets;
- (_Bool)supportsAspectRatioToggle;	// IMP=0x0000000000430ce0
- (long long)initialZoomStep;	// IMP=0x0000000000430cd8
- (long long)numberOfZoomStepsWithDataSource:(id)arg1;	// IMP=0x0000000000430cd0
- (struct CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(_Bool)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize)arg4;	// IMP=0x0000000000430c20
- (struct CGRect)containerFrameForAssetSectionLayout:(id)arg1;	// IMP=0x0000000000430b06
- (void)configureAssetSectionLayout:(id)arg1;	// IMP=0x0000000000430a56
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;	// IMP=0x00000000004306e7
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;	// IMP=0x0000000000430637
@property(readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;	// IMP=0x0000000000430532
- (id)init;	// IMP=0x00000000004304b8

@end

