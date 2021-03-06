//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>

@class NSAttributedString, NSString, NSTimer, PXStoryAnimationController, PXStoryModel, PXStoryRelatedController;
@protocol PXStoryDiagnosticHUDDataSource;

@interface PXStoryDiagnosticHUDLayout <PXChangeObserver, PXGStringSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned int _HUDTextSpriteIndex;	// 32 = 0x20
    unsigned int _badgeSpriteIndex;	// 36 = 0x24
    unsigned short _contentVersion;	// 40 = 0x28
    _Bool _wantsHUDContentVisible;	// 42 = 0x2a
    NSAttributedString *_HUDText;	// 48 = 0x30
    NSAttributedString *_badgeText;	// 56 = 0x38
    id <PXStoryDiagnosticHUDDataSource> _dataSource;	// 64 = 0x40
    NSTimer *_timer;	// 72 = 0x48
    PXStoryRelatedController *_relatedController;	// 80 = 0x50
    PXStoryModel *_model;	// 88 = 0x58
    PXStoryAnimationController *_animationController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000bff39
@property(retain, nonatomic) PXStoryAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) PXStoryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PXStoryRelatedController *relatedController; // @synthesize relatedController=_relatedController;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) id <PXStoryDiagnosticHUDDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSAttributedString *badgeText; // @synthesize badgeText=_badgeText;
@property(retain, nonatomic) NSAttributedString *HUDText; // @synthesize HUDText=_HUDText;
- (id)axSpriteIndexes;	// IMP=0x00000000000bfe95
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000bfd01
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bfc22
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bfc17
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bfc0f
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000000bfb0d
- (void)_updateHUDText;	// IMP=0x00000000000bf7ad
- (void)_updateContent;	// IMP=0x00000000000bf631
- (void)_invalidateContent;	// IMP=0x00000000000bf532
- (void)_updateControllers;	// IMP=0x00000000000bf469
- (void)_invalidateControllers;	// IMP=0x00000000000bf375
- (void)_updateModel;	// IMP=0x00000000000bf306
- (void)_invalidateModel;	// IMP=0x00000000000bf212
- (void)update;	// IMP=0x00000000000beecc
- (_Bool)_shouldDisplayContentForHUDType:(long long)arg1;	// IMP=0x00000000000beebc
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000000bee7b
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bedc9
- (void)dealloc;	// IMP=0x00000000000bebdf
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000be8ed
- (id)init;	// IMP=0x00000000000be873

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

