//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCUIProfile, NSArray, RMConfigurationsSpecifierProvider;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController
{
    _Bool _installComplete;	// 8 = 0x8
    _Bool _profileOffersReenroll;	// 9 = 0x9
    _Bool _profileRemovable;	// 10 = 0xa
    MCUIProfile *_UIProfile;	// 16 = 0x10
    long long _profileViewMode;	// 24 = 0x18
    unsigned long long _installProfileSource;	// 32 = 0x20
    id <MCProfileViewControllerDelegate> _profileViewControllerDelegate;	// 40 = 0x28
    RMConfigurationsSpecifierProvider *_rmSpecifierProvider;	// 48 = 0x30
    NSArray *_rmTableCells;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000045fe3
@property(retain, nonatomic) NSArray *rmTableCells; // @synthesize rmTableCells=_rmTableCells;
@property(retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider; // @synthesize rmSpecifierProvider=_rmSpecifierProvider;
@property(nonatomic) _Bool profileRemovable; // @synthesize profileRemovable=_profileRemovable;
@property(nonatomic) _Bool profileOffersReenroll; // @synthesize profileOffersReenroll=_profileOffersReenroll;
@property(nonatomic) __weak id <MCProfileViewControllerDelegate> profileViewControllerDelegate; // @synthesize profileViewControllerDelegate=_profileViewControllerDelegate;
@property(nonatomic) _Bool installComplete; // @synthesize installComplete=_installComplete;
@property(nonatomic) unsigned long long installProfileSource; // @synthesize installProfileSource=_installProfileSource;
@property(nonatomic) long long profileViewMode; // @synthesize profileViewMode=_profileViewMode;
@property(readonly, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
- (id)_tableView:(id)arg1 removeButtonForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000045c3f
- (id)_tableView:(id)arg1 buttonForRowAtIndexPath:(id)arg2 text:(id)arg3 color:(id)arg4;	// IMP=0x0000000000045b2c
- (id)_tableView:(id)arg1 elevatedPayloadCellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004565f
- (id)_tableView:(id)arg1 profileMoreDetailsCellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000045504
- (id)_tableView:(id)arg1 profileCellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000045368
- (int)_profileDetailsModeForElevatedPayloadAtIndexPath:(id)arg1;	// IMP=0x0000000000045234
- (_Bool)_isSectionPopulated:(long long)arg1;	// IMP=0x0000000000045134
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000045093
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000045086
- (id)_emptyViewForHeaderFooter;	// IMP=0x0000000000044ff8
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000044f5e
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000044ec4
- (double)_heightForHeaderFooterInSection:(long long)arg1;	// IMP=0x0000000000044e98
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000044e83
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000044e6e
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x0000000000044e59
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000044e44
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044be0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044989
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004483e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000044833
- (_Bool)_delegateCanPoll;	// IMP=0x00000000000447f0
- (_Bool)_delegateDisplayPoll;	// IMP=0x0000000000044757
- (_Bool)_delegateCanUpdate;	// IMP=0x0000000000044714
- (_Bool)_delegateCanRemove;	// IMP=0x00000000000446d1
- (void)_poll;	// IMP=0x0000000000044666
- (void)_updateProfile;	// IMP=0x00000000000445fb
- (void)_removeProfile;	// IMP=0x0000000000044590
- (_Bool)_shouldShowPollButton;	// IMP=0x000000000004457e
- (_Bool)_shouldShowRemoveButton;	// IMP=0x00000000000444ed
- (_Bool)_shouldShowUpdateButton;	// IMP=0x000000000004449d
- (_Bool)_showManagedPayloads;	// IMP=0x0000000000044488
- (void)setProfile:(id)arg1;	// IMP=0x00000000000441da
- (void)_rmConfigsChanged:(id)arg1;	// IMP=0x0000000000044063
- (void)_tableChanged:(id)arg1;	// IMP=0x0000000000043f77
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000043f0d
- (void)_setup;	// IMP=0x0000000000043cf7
- (id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3;	// IMP=0x0000000000043c63
- (id)initWithMDMProfileForRMAccount;	// IMP=0x00000000000439cd
- (id)initWithProfile:(id)arg1 viewMode:(long long)arg2;	// IMP=0x00000000000439b0

@end

