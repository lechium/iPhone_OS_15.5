//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/UIStatusBarStateObserver-Protocol.h>

@class NSCountedSet, NSHashTable, NSString, SBSStatusBarStyleOverridesAssertion;

@interface SBMainStatusBarStateProvider <UIStatusBarStateObserver>
{
    _Bool _overridePercent;	// 8 = 0x8
    _Bool _killActivity;	// 9 = 0x9
    _Bool _simulateInCallStatusBar;	// 10 = 0xa
    SBSStatusBarStyleOverridesAssertion *_inCallStatusBarStyleOverrideAssertion;	// 16 = 0x10
    _Bool _itemIsDisabled[44];	// 24 = 0x18
    _Bool _itemWasDisabled[44];	// 68 = 0x44
    NSCountedSet *_itemDisabledRequests[44];	// 112 = 0x70
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;	// 464 = 0x1d0
    _Bool _timeEnabled;	// 472 = 0x1d8
    _Bool _statusBarTimeRequiresUpdate;	// 473 = 0x1d9
    _Bool _timeCloaked;	// 474 = 0x1da
    _Bool _allButBatteryCloaked;	// 475 = 0x1db
    _Bool _telephonyAndBluetoothCloaked;	// 476 = 0x1dc
    NSHashTable *_contentAssertions;	// 480 = 0x1e0
}

+ (id)sharedInstance;	// IMP=0x0000000000093b90
- (void).cxx_destruct;	// IMP=0x000000000067b604
@property(retain, nonatomic) NSHashTable *contentAssertions; // @synthesize contentAssertions=_contentAssertions;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000050063
- (id)_identifierForStateAggregator:(id)arg1;	// IMP=0x000000000067b558
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;	// IMP=0x000000000067b50c
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;	// IMP=0x000000000067b4c0
- (void)_toggleSimulatesInCallStatusBar;	// IMP=0x000000000067b24e
- (void)_removeInCallStatusBarOverrideAssertion;	// IMP=0x000000000067b20c
- (void)_composePostDataFromAggregatorData:(CDStruct_e9def42b *)arg1;	// IMP=0x0000000000008b75
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_e9def42b *)arg3 lastPost:(const CDStruct_e9def42b *)arg4;	// IMP=0x0000000000008266
- (void)forceUpdateLocalStatusBarData;	// IMP=0x000000000067b161
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1;	// IMP=0x000000000067b0fe
- (void)disableDataUpdateAnimationsForRequestor:(id)arg1;	// IMP=0x000000000067b07f
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;	// IMP=0x000000000067b063
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;	// IMP=0x000000000067b047
- (void)setTimeCloaked:(_Bool)arg1;	// IMP=0x000000000067b02b
- (void)_enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3 immediately:(_Bool)arg4;	// IMP=0x000000000008a39b
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;	// IMP=0x000000000008a386
- (void)enableTime:(_Bool)arg1;	// IMP=0x000000000067b014
- (void)updateTimeEnabledImmediately:(_Bool)arg1;	// IMP=0x000000000008f925
- (void)updateTimeEnabled;	// IMP=0x000000000008f911
- (_Bool)isTimeEnabled;	// IMP=0x000000000067b004
- (void)_updateDisabledItems;	// IMP=0x000000000067aefe
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;	// IMP=0x000000000067adae
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;	// IMP=0x000000000067ac2a
- (void)dealloc;	// IMP=0x000000000067abd4
- (_Bool)contentAssertionsWantTimeEnabledAnimated:(inout _Bool *)arg1 duration:(inout double *)arg2;	// IMP=0x000000000067aa49
- (void)didUpdateContentAssertion:(id)arg1;	// IMP=0x000000000067aa37
- (void)relinquishContentAssertion:(id)arg1;	// IMP=0x000000000067a9fe
- (void)acquireContentAssertion:(id)arg1;	// IMP=0x000000000067a9c5
- (id)init;	// IMP=0x000000000067a8ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

