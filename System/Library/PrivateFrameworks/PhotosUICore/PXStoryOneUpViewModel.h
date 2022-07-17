//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXAssetReference, PXAssetsDataSourceManager, PXOneUpPresentation, PXStoryResourcesDataSourceManager, PXUIMediaProvider, PXUpdater;
@protocol PXStoryClipSpriteReferencesProvider, PXStoryTimeline;

@interface PXStoryOneUpViewModel <PXChangeObserver>
{
    struct {
        _Bool spriteReferenceForClipWithIdentifier;
    } _spriteReferencesProviderRespondsTo;	// 8 = 0x8
    PXStoryResourcesDataSourceManager *_resourcesDataSourceManager;	// 16 = 0x10
    PXUIMediaProvider *_mediaProvider;	// 24 = 0x18
    PXAssetsDataSourceManager *_assetsDataSourceManager;	// 32 = 0x20
    PXAssetReference *_initialAssetReference;	// 40 = 0x28
    id <PXStoryTimeline> _timeline;	// 48 = 0x30
    long long _initialClipIdentifier;	// 56 = 0x38
    long long _visibleClipIdentifier;	// 64 = 0x40
    long long _hiddenClipIdentifier;	// 72 = 0x48
    PXOneUpPresentation *_oneUpPresentation;	// 80 = 0x50
    PXUpdater *_updater;	// 88 = 0x58
    id <PXStoryClipSpriteReferencesProvider> _spriteReferencesProvider;	// 96 = 0x60
    PXAssetReference *_visibleAssetReference;	// 104 = 0x68
    PXAssetReference *_hiddenAssetReference;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000005c476d
@property(retain, nonatomic) PXAssetReference *hiddenAssetReference; // @synthesize hiddenAssetReference=_hiddenAssetReference;
@property(retain, nonatomic) PXAssetReference *visibleAssetReference; // @synthesize visibleAssetReference=_visibleAssetReference;
@property(nonatomic) __weak id <PXStoryClipSpriteReferencesProvider> spriteReferencesProvider; // @synthesize spriteReferencesProvider=_spriteReferencesProvider;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // @synthesize oneUpPresentation=_oneUpPresentation;
@property(readonly, nonatomic) long long hiddenClipIdentifier; // @synthesize hiddenClipIdentifier=_hiddenClipIdentifier;
@property(readonly, nonatomic) long long visibleClipIdentifier; // @synthesize visibleClipIdentifier=_visibleClipIdentifier;
@property(readonly, nonatomic) long long initialClipIdentifier; // @synthesize initialClipIdentifier=_initialClipIdentifier;
@property(readonly, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) PXAssetReference *initialAssetReference; // @synthesize initialAssetReference=_initialAssetReference;
@property(retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // @synthesize resourcesDataSourceManager=_resourcesDataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005c4608
- (void)_updateHiddenClipIdentifier;	// IMP=0x00000000005c4557
- (void)_invalidateHiddenClipIdentifier;	// IMP=0x00000000005c4513
- (void)_updateVisibleClipIdentifier;	// IMP=0x00000000005c4462
- (void)_invalidateVisibleClipIdentifier;	// IMP=0x00000000005c441e
- (void)_updateInitialAssetReference;	// IMP=0x00000000005c4108
- (void)_invalidateInitialAssetReference;	// IMP=0x00000000005c40c4
- (void)_updateAssetsDataSourceManager;	// IMP=0x00000000005c3f8a
- (void)_invalidateAssetsDataSourceManager;	// IMP=0x00000000005c3f46
- (void)_setNeedsUpdate;	// IMP=0x00000000005c3f32
- (long long)_clipIdentifierForAssetReference:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005c3e04
- (void)setOneUpPresentation:(id)arg1;	// IMP=0x00000000005c3db3
- (void)setHiddenClipIdentifier:(long long)arg1;	// IMP=0x00000000005c3d0b
- (void)setVisibleClipIdentifier:(long long)arg1;	// IMP=0x00000000005c3ca1
- (void)setInitialClipIdentifier:(long long)arg1;	// IMP=0x00000000005c3c3c
@property(readonly, nonatomic) _Bool canPresentOneUp;
- (id)spriteReferenceForAssetReference:(id)arg1;	// IMP=0x00000000005c3abf
- (void)setTimeline:(id)arg1;	// IMP=0x00000000005c3a34
- (void)didPerformChanges;	// IMP=0x00000000005c39ca
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000005c399b
- (id)initWithResourcesDataSourceManager:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000005c37f6
- (id)init;	// IMP=0x00000000005c377c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
