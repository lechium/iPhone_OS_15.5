//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUSlideshowMusicDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowSettingsViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUSlideshowSpeedCellDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowThemeDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView;
@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate>
{
    PUSlideshowSession *_session;	// 8 = 0x8
    PUSlideshowSettingsViewModel *_settingsViewModel;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 40 = 0x28
    _Bool __needsUpdateSpec;	// 41 = 0x29
    _Bool __needsUpdateTableView;	// 42 = 0x2a
    _Bool __needsUpdateNavigationBar;	// 43 = 0x2b
    _Bool __needsUpdatePreset;	// 44 = 0x2c
    _Bool __needsUpdateMediaItem;	// 45 = 0x2d
    _Bool __needsUpdateMusicOn;	// 46 = 0x2e
    id <PUSlideshowSettingsViewControllerDelegate> _delegate;	// 48 = 0x30
    OKProducerPreset *__pendingPreset;	// 56 = 0x38
    PUSlideshowMediaItem *__pendingMediaItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000040ae6f
@property(retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // @synthesize _pendingMediaItem=__pendingMediaItem;
@property(retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // @synthesize _pendingPreset=__pendingPreset;
@property(nonatomic, setter=_setNeedsUpdateMusicOn:) _Bool _needsUpdateMusicOn; // @synthesize _needsUpdateMusicOn=__needsUpdateMusicOn;
@property(nonatomic, setter=_setNeedsUpdateMediaItem:) _Bool _needsUpdateMediaItem; // @synthesize _needsUpdateMediaItem=__needsUpdateMediaItem;
@property(nonatomic, setter=_setNeedsUpdatePreset:) _Bool _needsUpdatePreset; // @synthesize _needsUpdatePreset=__needsUpdatePreset;
@property(nonatomic, setter=_setNeedsUpdateNavigationBar:) _Bool _needsUpdateNavigationBar; // @synthesize _needsUpdateNavigationBar=__needsUpdateNavigationBar;
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;	// IMP=0x000000000040ad01
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000040acb0
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000040ac59
- (void)musicPickerDidFinish:(id)arg1;	// IMP=0x000000000040ac0f
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;	// IMP=0x000000000040ab58
- (void)themePickerDidFinish:(id)arg1;	// IMP=0x000000000040ab0e
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;	// IMP=0x000000000040aa4a
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000040a9f3
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000040a870
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000040a168
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000040a15d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000040a152
- (void)_toggleMusic:(id)arg1;	// IMP=0x000000000040a0de
- (void)_toggleRepeat:(id)arg1;	// IMP=0x000000000040a06a
- (void)_didTapDoneButton:(id)arg1;	// IMP=0x0000000000409fb9
- (void)_synchronizedChangedSettings;	// IMP=0x0000000000409e1d
- (void)_updateMusicOnIfNeeded;	// IMP=0x0000000000409d8d
- (void)_updateMediaItemIfNeeded;	// IMP=0x0000000000409cfd
- (void)_updatePresetIfNeeded;	// IMP=0x0000000000409cac
- (void)_updateNavigationBarIfNeeded;	// IMP=0x0000000000409c15
- (void)_updateTableViewIfNeeded;	// IMP=0x0000000000409b2b
- (void)_updateSpecIfNeeded;	// IMP=0x0000000000409a2d
- (void)_updateIfNeeded;	// IMP=0x0000000000409937
- (void)_invalidateMusicOn;	// IMP=0x0000000000409904
- (void)_invalidateMediaItem;	// IMP=0x00000000004098d1
- (void)_invalidatePreset;	// IMP=0x000000000040989e
- (void)_invalidateNavigationBar;	// IMP=0x000000000040986b
- (void)_invalidateTableView;	// IMP=0x0000000000409838
- (void)_invalidateSpec;	// IMP=0x0000000000409805
- (void)_setNeedsUpdate;	// IMP=0x00000000004097ff
- (_Bool)_needsUpdate;	// IMP=0x000000000040978a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000409640
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000409528
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004094d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004093f0
- (void)viewDidLoad;	// IMP=0x0000000000409232
- (void)dealloc;	// IMP=0x00000000004091c3
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000409063

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
