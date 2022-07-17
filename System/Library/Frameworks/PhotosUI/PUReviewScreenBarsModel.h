//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUMutableReviewScreenBarsModel-Protocol.h>

@class NSDictionary, NSSet, UIView;

@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel>
{
    _Bool _shouldPlaceScrubberInScrubberBar;	// 8 = 0x8
    _Bool _transitioningWithCamera;	// 9 = 0x9
    _Bool _lastControlAlignmentChangeForcedLayout;	// 10 = 0xa
    _Bool _useVerticalControlLayout;	// 11 = 0xb
    _Bool __needsUpdateAvailableControls;	// 12 = 0xc
    NSDictionary *_availableItemsByIdentifier;	// 16 = 0x10
    NSSet *_availableControls;	// 24 = 0x18
    NSSet *_enabledControls;	// 32 = 0x20
    UIView *_accessoryView;	// 40 = 0x28
    struct CGPoint _controlCenterAlignmentPoint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000039b86e
@property(nonatomic, setter=_setNeedsUpdateAvailableControls:) _Bool _needsUpdateAvailableControls; // @synthesize _needsUpdateAvailableControls=__needsUpdateAvailableControls;
@property(readonly, nonatomic) _Bool useVerticalControlLayout; // @synthesize useVerticalControlLayout=_useVerticalControlLayout;
@property(readonly, nonatomic) _Bool lastControlAlignmentChangeForcedLayout; // @synthesize lastControlAlignmentChangeForcedLayout=_lastControlAlignmentChangeForcedLayout;
@property(readonly, nonatomic) struct CGPoint controlCenterAlignmentPoint; // @synthesize controlCenterAlignmentPoint=_controlCenterAlignmentPoint;
@property(readonly, nonatomic, getter=isTransitioningWithCamera) _Bool transitioningWithCamera; // @synthesize transitioningWithCamera=_transitioningWithCamera;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) _Bool shouldPlaceScrubberInScrubberBar; // @synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar;
@property(retain, nonatomic, setter=_setEnabledControls:) NSSet *enabledControls; // @synthesize enabledControls=_enabledControls;
@property(retain, nonatomic, setter=_setAvailableControls:) NSSet *availableControls; // @synthesize availableControls=_availableControls;
@property(readonly, copy, nonatomic) NSDictionary *availableItemsByIdentifier; // @synthesize availableItemsByIdentifier=_availableItemsByIdentifier;
- (void)setUseVerticalControlLayout:(_Bool)arg1;	// IMP=0x000000000039b762
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1 forceLayout:(_Bool)arg2;	// IMP=0x000000000039b711
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1;	// IMP=0x000000000039b6fd
- (void)setTransitioningWithCamera:(_Bool)arg1;	// IMP=0x000000000039b6d5
- (void)setShouldPlaceScrubberInScrubberBar:(_Bool)arg1;	// IMP=0x000000000039b6ad
- (void)setAccessoryView:(id)arg1;	// IMP=0x000000000039b647
- (void)setAvailableItemsByIdentifier:(id)arg1;	// IMP=0x000000000039b5c9
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000039b59a
- (id)mutableChangeObject;	// IMP=0x000000000039b591
- (void)_updateAvailableControls;	// IMP=0x000000000039b1ed
- (void)invokeCallbackForBarButtonItemWithIdentifier:(long long)arg1;	// IMP=0x000000000039afef

@end
