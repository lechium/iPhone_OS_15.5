//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>

@class NSIndexSet, NSNumber, NSString, PXStoryModel;
@protocol PXStoryLayoutSpec, PXStoryThumbnailActionPerformer;

@interface PXStoryThumbnailChromeLayout <PXGViewSource, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned int _actionMenuButtonSpriteIndex;	// 32 = 0x20
    unsigned int _favoriteButtonSpriteIndex;	// 36 = 0x24
    unsigned short _contentVersion;	// 40 = 0x28
    _Bool _isFavorite;	// 42 = 0x2a
    NSIndexSet *_axSpriteIndexes;	// 48 = 0x30
    PXStoryModel *_model;	// 56 = 0x38
    id <PXStoryThumbnailActionPerformer> _actionPerformer;	// 64 = 0x40
    double _scaleFromTopRightCorner;	// 72 = 0x48
    NSNumber *_alphaOverride;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000562ba5
@property(retain, nonatomic) NSNumber *alphaOverride; // @synthesize alphaOverride=_alphaOverride;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) double scaleFromTopRightCorner; // @synthesize scaleFromTopRightCorner=_scaleFromTopRightCorner;
@property(readonly, nonatomic) id <PXStoryThumbnailActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, nonatomic) PXStoryModel *model; // @synthesize model=_model;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0000000000562b3e
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x0000000000562b33
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x0000000000562b21
@property(readonly, nonatomic) NSIndexSet *axSpriteIndexes; // @synthesize axSpriteIndexes=_axSpriteIndexes;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005629b0
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;	// IMP=0x000000000056292f
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000005628e0
- (void)_handleFavoriteButton:(id)arg1;	// IMP=0x00000000005627d8
- (void)_handleActionMenuItem:(long long)arg1;	// IMP=0x0000000000562637
- (id)_baseConfigurationForButtonWithSystemImageName:(id)arg1;	// IMP=0x000000000056251c
- (id)_buttonConfigurationForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000005622ea
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000056215c
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000056208d
- (void)_updateContentAlpha;	// IMP=0x0000000000561fc6
- (void)_invalidateContentAlpha;	// IMP=0x0000000000561ed2
- (void)_updateContent;	// IMP=0x0000000000561c7c
- (void)_invalidateContent;	// IMP=0x0000000000561b88
- (void)_invalidateContentVersion;	// IMP=0x0000000000561b6b
- (void)_updateTransform;	// IMP=0x0000000000561a88
- (void)_invalidateTransform;	// IMP=0x0000000000561994
- (void)_updateIsFavorite;	// IMP=0x000000000056193b
- (void)_invalidateIsFavorite;	// IMP=0x0000000000561847
- (void)update;	// IMP=0x0000000000561440
@property(readonly, nonatomic) id <PXStoryLayoutSpec> spec;
- (void)alphaDidChange;	// IMP=0x00000000005612ef
- (void)referenceSizeDidChange;	// IMP=0x0000000000561299
- (id)initWithModel:(id)arg1;	// IMP=0x000000000056117d
- (id)init;	// IMP=0x0000000000561103

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

