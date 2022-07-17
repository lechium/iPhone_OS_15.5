//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPListTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPUINowPlayingObserving-Protocol.h>
#import <CarPlaySupport/UITableViewDelegate-Protocol.h>

@class CPListTemplate, CPSEmptyView, CPSSectionedDataSource, CPSTableView, CPUINowPlayingManager, NSString, NSTimer, NSUUID;

@interface CPSListTemplateViewController <UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding>
{
    _Bool _assistantCellAvailable;	// 8 = 0x8
    CPSSectionedDataSource *_dataSource;	// 16 = 0x10
    NSUUID *_currentSpinningIdentifier;	// 24 = 0x18
    NSUUID *_nextSpinningIdentifier;	// 32 = 0x20
    unsigned long long _spinnerState;	// 40 = 0x28
    NSTimer *_spinnerStartTimer;	// 48 = 0x30
    NSTimer *_spinnerTimeoutTimer;	// 56 = 0x38
    CPSTableView *_tableView;	// 64 = 0x40
    CPUINowPlayingManager *_nowPlayingManager;	// 72 = 0x48
    CPSEmptyView *_emptyView;	// 80 = 0x50
    NSUUID *_lastFocusedItem;	// 88 = 0x58
}

+ (_Bool)clientAssistantCellConfiguration:(id)arg1 availableWithError:(id *)arg2 templateEnvironment:(id)arg3;	// IMP=0x0000000000065eab
+ (id)intentIdentifierFromConfigurationEnum:(long long)arg1;	// IMP=0x0000000000065e86
- (void).cxx_destruct;	// IMP=0x0000000000066a49
@property(nonatomic) _Bool assistantCellAvailable; // @synthesize assistantCellAvailable=_assistantCellAvailable;
@property(retain, nonatomic) NSUUID *lastFocusedItem; // @synthesize lastFocusedItem=_lastFocusedItem;
@property(retain, nonatomic) CPSEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) CPUINowPlayingManager *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) CPSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTimer *spinnerTimeoutTimer; // @synthesize spinnerTimeoutTimer=_spinnerTimeoutTimer;
@property(retain, nonatomic) NSTimer *spinnerStartTimer; // @synthesize spinnerStartTimer=_spinnerStartTimer;
@property(nonatomic) unsigned long long spinnerState; // @synthesize spinnerState=_spinnerState;
@property(copy, nonatomic) NSUUID *nextSpinningIdentifier; // @synthesize nextSpinningIdentifier=_nextSpinningIdentifier;
@property(copy, nonatomic) NSUUID *currentSpinningIdentifier; // @synthesize currentSpinningIdentifier=_currentSpinningIdentifier;
@property(retain, nonatomic) CPSSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000066733
- (void)_updatePlayingIndicators;	// IMP=0x00000000000662fd
- (long long)_playingIndicatorStateForSnapshot:(id)arg1;	// IMP=0x0000000000066203
- (void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2;	// IMP=0x00000000000661f1
- (void)_activateSiriForAssistantItem;	// IMP=0x0000000000065c03
- (void)_activateSiriForMessageItem:(id)arg1;	// IMP=0x0000000000065993
- (void)didSelectMediaButton:(id)arg1;	// IMP=0x00000000000658de
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000065843
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000065108
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000064812
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000064635
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000006458b
- (void)_scrollViewAccessoryInsetsDidChange:(id)arg1;	// IMP=0x0000000000064387
- (void)reloadItems:(id)arg1;	// IMP=0x0000000000063fd3
- (void)updateAssistantCellConfiguration:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063de0
- (void)reloadTemplate:(id)arg1;	// IMP=0x0000000000063c0e
- (void)setButton:(id)arg1 hidden:(_Bool)arg2;	// IMP=0x0000000000063c08
- (void)setButton:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000063c02
- (void)updateSectionHeaderImage:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x0000000000063745
- (void)updateAssistantCellTitle;	// IMP=0x000000000006361a
- (void)updateAssistantCell;	// IMP=0x0000000000063513
- (_Bool)restoresFocusAfterTransition;	// IMP=0x000000000006350b
- (void)_cellSelectionCompleted:(id)arg1;	// IMP=0x0000000000063352
- (void)_cancelScheduledLoadingSpinner;	// IMP=0x00000000000632a4
- (void)_timeoutSpinnerFired:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000063241
- (void)_startSpinnerTimerFired:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000631db
- (void)_scheduleLoadingSpinnerForIdentifier:(id)arg1;	// IMP=0x0000000000062ebe
- (void)_addSpinnerToIdentifier:(id)arg1;	// IMP=0x0000000000062b6c
- (void)_updateEmptyView;	// IMP=0x000000000006253d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000624b7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000623fd
- (void)_viewDidLoad;	// IMP=0x0000000000061515
- (_Bool)_wantsNowPlayingButton;	// IMP=0x000000000006150d
- (_Bool)_shouldRetainFocusOnWillAppear;	// IMP=0x00000000000614be
@property(readonly, nonatomic) CPListTemplate *listTemplate;
- (id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;	// IMP=0x0000000000061148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
