//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotoSelectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString, PUPhotoSelectionManager;
@protocol OS_dispatch_queue, PUPhotosGridBarsHelperDelegate;

@interface PUPhotosGridBarsHelper : NSObject <PUPhotoSelectionManagerChangeObserver>
{
    _Bool _isPerformingUpdates;	// 8 = 0x8
    struct {
        _Bool photoSelectionManager;
        _Bool shouldUpdateBarItemsLazily;
        _Bool barItems;
    } _needsUpdateFlags;	// 9 = 0x9
    _Bool _swipeSelecting;	// 12 = 0xc
    _Bool _shouldHideBackButton;	// 13 = 0xd
    _Bool __shouldUpdateBarItemsLazily;	// 14 = 0xe
    _Bool __updatingItemsWithCount;	// 15 = 0xf
    _Bool __shouldUpdateItemsWithCount;	// 16 = 0x10
    _Bool __hadSelectionOnLastUpdate;	// 17 = 0x11
    id <PUPhotosGridBarsHelperDelegate> _delegate;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_prompt;	// 40 = 0x28
    NSArray *_leftBarButtonItems;	// 48 = 0x30
    NSArray *_rightBarButtonItems;	// 56 = 0x38
    PUPhotoSelectionManager *__photoSelectionManager;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *__queue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000334643
@property(nonatomic, setter=_setHadSelectionOnLastUpdate:) _Bool _hadSelectionOnLastUpdate; // @synthesize _hadSelectionOnLastUpdate=__hadSelectionOnLastUpdate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(nonatomic, setter=_setShouldUpdateItemsWithCount:) _Bool _shouldUpdateItemsWithCount; // @synthesize _shouldUpdateItemsWithCount=__shouldUpdateItemsWithCount;
@property(nonatomic, getter=_isUpdatingItemsWithCount, setter=_setUpdatingItemsWithCount:) _Bool _updatingItemsWithCount; // @synthesize _updatingItemsWithCount=__updatingItemsWithCount;
@property(nonatomic, setter=_setShouldUpdateBarItemsLazily:) _Bool _shouldUpdateBarItemsLazily; // @synthesize _shouldUpdateBarItemsLazily=__shouldUpdateBarItemsLazily;
@property(retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *_photoSelectionManager; // @synthesize _photoSelectionManager=__photoSelectionManager;
@property(retain, nonatomic, setter=_setRightBarButtonItems:) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(retain, nonatomic, setter=_setLeftBarButtonItems:) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
@property(nonatomic, setter=_setShouldHideBackButton:) _Bool shouldHideBackButton; // @synthesize shouldHideBackButton=_shouldHideBackButton;
@property(retain, nonatomic, setter=_setPrompt:) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic, setter=_setTitle:) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isSwipeSelecting) _Bool swipeSelecting; // @synthesize swipeSelecting=_swipeSelecting;
@property(nonatomic) __weak id <PUPhotosGridBarsHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;	// IMP=0x0000000000334572
- (void)_handleItemsWithCountUpdateWithTitle:(id)arg1 shouldReloadAllItems:(_Bool)arg2;	// IMP=0x00000000003344d2
- (void)_updateItemsWithCountInBackgroundWithDelegate:(id)arg1 photoSelectionManagerSnapshot:(id)arg2;	// IMP=0x000000000033434c
- (void)_stopUpdatingItemsWithCount;	// IMP=0x000000000033427d
- (void)_startUpdatingItemsWithCountIfNeeded;	// IMP=0x00000000003340d9
- (void)_updateAllBarItems;	// IMP=0x0000000000333f52
- (void)_updateBarItemsIfNeeded;	// IMP=0x0000000000333ef0
- (void)_invalidateBarItems;	// IMP=0x0000000000333eda
- (void)_updateShouldUpdateBarItemsLazilyIfNeeded;	// IMP=0x0000000000333e9a
- (void)_invalidateShouldUpdateBarItemsLazily;	// IMP=0x0000000000333e84
- (void)_updatePhotoSelectionManagerIfNeeded;	// IMP=0x0000000000333df0
- (void)_invalidatePhotoSelectionManager;	// IMP=0x0000000000333dda
- (void)_setNeedsUpdate;	// IMP=0x0000000000333dd4
- (_Bool)_needsUpdate;	// IMP=0x0000000000333db9
- (void)_updateIfNeeded;	// IMP=0x0000000000333d56
- (void)_notifyBarItemsDidChange;	// IMP=0x0000000000333d05
- (void)invalidateNavigationBarItems;	// IMP=0x0000000000333b6f
- (id)init;	// IMP=0x0000000000333a6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
