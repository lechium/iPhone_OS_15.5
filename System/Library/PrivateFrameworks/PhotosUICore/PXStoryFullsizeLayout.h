//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGEntityChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryTransitionSource-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSDictionary, NSMutableIndexSet, NSString, PXGEffect, PXStoryTransitionController;
@protocol PXStoryStyleDescriptor;

@interface PXStoryFullsizeLayout <PXStoryTransitionSource, PXGEntityChangeObserver, PXChangeObserver, PXTapToRadarDiagnosticProvider>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _timelineContentUpdateFlags;	// 32 = 0x20
    CDStruct_af00bf4e _timelineContentPostUpdateFlags;	// 56 = 0x38
    CDStruct_af00bf4e _postUpdateFlags;	// 80 = 0x50
    _Bool _allowsTransitionEffects;	// 104 = 0x68
    unsigned int _transitionEffectSpriteIndex;	// 108 = 0x6c
    unsigned int _transitionAuxiliaryEffectSpriteIndex;	// 112 = 0x70
    id <PXStoryStyleDescriptor> _overrideStyleInfo;	// 120 = 0x78
    double _textAlpha;	// 128 = 0x80
    PXStoryTransitionController *_transitionController;	// 136 = 0x88
    PXGEffect *_transitionEffect;	// 144 = 0x90
    PXGEffect *_auxiliaryTransitionEffect;	// 152 = 0x98
    double _transitionEffectAlpha;	// 160 = 0xa0
    double _auxiliaryTransitionEffectAlpha;	// 168 = 0xa8
    NSDictionary *_zPositionsByClipIdentifier;	// 176 = 0xb0
    NSMutableIndexSet *_previouslyReportedClipIdentifiers;	// 184 = 0xb8
    CDStruct_b1a1f14e _activeTransition;	// 192 = 0xc0
    CDStruct_2bd92d94 _cornerRadiusOverride;	// 208 = 0xd0
    struct CGRect _strictVisibleTimelineRect;	// 224 = 0xe0
    CDStruct_e83c9415 _strictVisibleTimeRange;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000004b5601
@property(nonatomic) CDStruct_2bd92d94 cornerRadiusOverride; // @synthesize cornerRadiusOverride=_cornerRadiusOverride;
@property(readonly, nonatomic) NSMutableIndexSet *previouslyReportedClipIdentifiers; // @synthesize previouslyReportedClipIdentifiers=_previouslyReportedClipIdentifiers;
@property(retain, nonatomic) NSDictionary *zPositionsByClipIdentifier; // @synthesize zPositionsByClipIdentifier=_zPositionsByClipIdentifier;
@property(nonatomic) double auxiliaryTransitionEffectAlpha; // @synthesize auxiliaryTransitionEffectAlpha=_auxiliaryTransitionEffectAlpha;
@property(nonatomic) double transitionEffectAlpha; // @synthesize transitionEffectAlpha=_transitionEffectAlpha;
@property(retain, nonatomic) PXGEffect *auxiliaryTransitionEffect; // @synthesize auxiliaryTransitionEffect=_auxiliaryTransitionEffect;
@property(retain, nonatomic) PXGEffect *transitionEffect; // @synthesize transitionEffect=_transitionEffect;
@property(nonatomic) CDStruct_912cb5d2 activeTransition; // @synthesize activeTransition=_activeTransition;
@property(retain, nonatomic) PXStoryTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) CDStruct_e83c9415 strictVisibleTimeRange; // @synthesize strictVisibleTimeRange=_strictVisibleTimeRange;
@property(nonatomic) struct CGRect strictVisibleTimelineRect; // @synthesize strictVisibleTimelineRect=_strictVisibleTimelineRect;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(readonly, nonatomic) id <PXStoryStyleDescriptor> overrideStyleInfo; // @synthesize overrideStyleInfo=_overrideStyleInfo;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000004b5401
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x00000000004b536d
- (void)entityManager:(id)arg1 componentDidChange:(id)arg2;	// IMP=0x00000000004b5066
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000004b4fde
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000004b4e4e
- (void)applyTransitionEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;	// IMP=0x00000000004b4e0e
- (void)didEndTransitionWithEffect:(id)arg1 auxiliaryEffect:(id)arg2;	// IMP=0x00000000004b4d25
- (void)didBeginTransitionWithEffect:(id)arg1 auxiliaryEffect:(id)arg2;	// IMP=0x00000000004b4c82
- (id)layoutForClipWithIdentifier:(long long)arg1;	// IMP=0x00000000004b4c70
@property(readonly, nonatomic) struct CGRect transitionViewport;
- (void)_updateTransitionController;	// IMP=0x00000000004b4c0d
- (void)_invalidateTransitionController;	// IMP=0x00000000004b4b48
- (void)_updateVisibleClipsReporting;	// IMP=0x00000000004b4966
- (void)_invalidateVisibleClipsReporting;	// IMP=0x00000000004b48a1
- (double)proposedZPositionForClipLayoutWithClipIdentifier:(long long)arg1;	// IMP=0x00000000004b47c4
- (void)_updateTransitionEffectSprites;	// IMP=0x00000000004b46d0
- (void)_invalidateTransitionEffectSprites;	// IMP=0x00000000004b45d9
- (void)_updateClipZPositions;	// IMP=0x00000000004b44ee
- (void)_invalidateClipZPositions;	// IMP=0x00000000004b43fa
- (void)_updateActiveTransition;	// IMP=0x00000000004b433e
- (void)_invalidateActiveTransition;	// IMP=0x00000000004b424a
- (void)_updateVisibleSegmentIdentifiers;	// IMP=0x00000000004b406a
- (void)_invalidateVisibleSegmentIdentifiers;	// IMP=0x00000000004b3f99
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x00000000004b3ef9
- (void)didUpdateTimelineContent;	// IMP=0x00000000004b3d3b
- (void)willUpdateTimelineContent;	// IMP=0x00000000004b3b7d
- (void)update;	// IMP=0x00000000004b36b2
- (void)updateClipsCornerRadius;	// IMP=0x00000000004b35a0
- (void)updatePresentedTimelineTransition;	// IMP=0x00000000004b3531
- (void)updateDisplayedTimelineRect;	// IMP=0x00000000004b3476
- (void)displayedTimelineDidChange;	// IMP=0x00000000004b3309
- (void)updateDisplayedTimeRange;	// IMP=0x00000000004b2ea5
- (void)updateDisplayedTimeline;	// IMP=0x00000000004b2a93
- (long long)viewMode;	// IMP=0x00000000004b2a42
- (id)presentedSnapshot;	// IMP=0x00000000004b2959
- (double)alphaForClipLayout:(id)arg1;	// IMP=0x00000000004b2873
- (void)configureClipLayout:(id)arg1;	// IMP=0x00000000004b2774
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000004b2416
- (void)entityManagerDidChange;	// IMP=0x00000000004b2274
- (void)referenceSizeDidChange;	// IMP=0x00000000004b2211
- (_Bool)isAnimating;	// IMP=0x00000000004b21cd
- (id)initWithModel:(id)arg1;	// IMP=0x00000000004b21b9
- (id)initWithModel:(id)arg1 overrideStyleInfo:(id)arg2;	// IMP=0x00000000004b202d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

