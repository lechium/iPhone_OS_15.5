//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKLocationVirtualConferenceSearchFieldsDelegate-Protocol.h>
#import <EventKitUI/EKUILocationSearchModelDelegate-Protocol.h>
#import <EventKitUI/EKUIManagedViewController-Protocol.h>
#import <EventKitUI/UISearchBarDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>
#import <EventKitUI/VirtualConferenceRoomTypeSelectionDelegate-Protocol.h>

@class EKCalendarItem, EKLocationVirtualConferenceSearchFieldsView, EKStructuredLocation, EKUIConferenceRoom, EKUILocationRowModel, EKUILocationSearchModel, EKVirtualConference, EKVirtualConferenceRoomType, NSError, NSMutableDictionary, NSString, UISearchBar, UITableView, _UINavigationControllerPalette;

@interface EKLocationEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKLocationVirtualConferenceSearchFieldsDelegate, EKUILocationSearchModelDelegate, VirtualConferenceRoomTypeSelectionDelegate, EKUIManagedViewController>
{
    UITableView *_tableView;	// 72 = 0x48
    _UINavigationControllerPalette *_palette;	// 80 = 0x50
    UISearchBar *_searchBar;	// 88 = 0x58
    EKLocationVirtualConferenceSearchFieldsView *_searchFieldsView;	// 96 = 0x60
    EKUILocationSearchModel *_searchModel;	// 104 = 0x68
    EKCalendarItem *_calendarItem;	// 112 = 0x70
    EKVirtualConferenceRoomType *_checkedRoomType;	// 120 = 0x78
    _Bool _shouldShowCheckedVirtualConference;	// 128 = 0x80
    NSMutableDictionary *_cachedConferenceRooms;	// 136 = 0x88
    struct CGSize _preferredContentSize;	// 144 = 0x90
    _Bool _supportsStructuredLocations;	// 160 = 0xa0
    _Bool _tableConstraintsInstalled;	// 161 = 0xa1
    _Bool _rotating;	// 162 = 0xa2
    _Bool _wasFirstResponder;	// 163 = 0xa3
    _Bool _needsSave;	// 164 = 0xa4
    _Bool _autoFillSelectedTextField;	// 165 = 0xa5
    _Bool _forceSingleTextField;	// 166 = 0xa6
    _Bool _conferenceTextFieldSelected;	// 167 = 0xa7
    _Bool _disableConferenceTextField;	// 168 = 0xa8
    _Bool _pendingVirtualConference;	// 169 = 0xa9
    unsigned long long _supportedSearchTypes;	// 176 = 0xb0
    EKUILocationRowModel *_locationViewModel;	// 184 = 0xb8
    EKUILocationRowModel *_conferenceViewModel;	// 192 = 0xc0
    EKStructuredLocation *_selectedLocation;	// 200 = 0xc8
    EKUIConferenceRoom *_selectedConferenceRoom;	// 208 = 0xd0
    EKVirtualConference *_selectedVirtualConference;	// 216 = 0xd8
    NSError *_pendingVirtualConferenceError;	// 224 = 0xe0
    CDUnknownBlockType _viewDidAppearBlock;	// 232 = 0xe8
}

+ (id)_sectionNameForSection:(unsigned long long)arg1;	// IMP=0x00000000000c49c2
+ (id)_boldTitleFont;	// IMP=0x00000000000c37f6
- (void).cxx_destruct;	// IMP=0x00000000000c5d74
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearBlock; // @synthesize viewDidAppearBlock=_viewDidAppearBlock;
@property(retain, nonatomic) NSError *pendingVirtualConferenceError; // @synthesize pendingVirtualConferenceError=_pendingVirtualConferenceError;
@property(nonatomic) _Bool pendingVirtualConference; // @synthesize pendingVirtualConference=_pendingVirtualConference;
@property(retain, nonatomic) EKVirtualConference *selectedVirtualConference; // @synthesize selectedVirtualConference=_selectedVirtualConference;
@property(retain, nonatomic) EKUIConferenceRoom *selectedConferenceRoom; // @synthesize selectedConferenceRoom=_selectedConferenceRoom;
@property(retain, nonatomic) EKStructuredLocation *selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(retain, nonatomic) EKUILocationRowModel *conferenceViewModel; // @synthesize conferenceViewModel=_conferenceViewModel;
@property(retain, nonatomic) EKUILocationRowModel *locationViewModel; // @synthesize locationViewModel=_locationViewModel;
@property(nonatomic) _Bool disableConferenceTextField; // @synthesize disableConferenceTextField=_disableConferenceTextField;
@property(nonatomic) _Bool conferenceTextFieldSelected; // @synthesize conferenceTextFieldSelected=_conferenceTextFieldSelected;
@property(nonatomic) _Bool forceSingleTextField; // @synthesize forceSingleTextField=_forceSingleTextField;
@property(nonatomic) _Bool autoFillSelectedTextField; // @synthesize autoFillSelectedTextField=_autoFillSelectedTextField;
@property(nonatomic) unsigned long long supportedSearchTypes; // @synthesize supportedSearchTypes=_supportedSearchTypes;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
- (void)pendingVideoConferenceUpdated:(id)arg1;	// IMP=0x00000000000c593e
- (void)selectedRoomType:(id)arg1;	// IMP=0x00000000000c56e2
- (void)selectedTextFieldChanged:(id)arg1;	// IMP=0x00000000000c55c7
- (void)textFieldDoneTapped:(id)arg1;	// IMP=0x00000000000c55b5
- (void)textField:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000c55a0
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000000000c558e
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000000c5579
- (void)searchDoneTapped;	// IMP=0x00000000000c516f
- (void)searchTextChanged:(id)arg1;	// IMP=0x00000000000c4f3b
- (void)searchBecomeFirstResponder;	// IMP=0x00000000000c4ecf
- (void)searchResignFirstResponder;	// IMP=0x00000000000c4e63
- (_Bool)searchIsFirstResponder;	// IMP=0x00000000000c4df0
- (id)searchText;	// IMP=0x00000000000c4d68
- (void)setSearchText:(id)arg1;	// IMP=0x00000000000c4cc6
- (id)_focusedTextField;	// IMP=0x00000000000c4c7d
- (_Bool)_singleSearchBar;	// IMP=0x00000000000c4c59
@property(readonly) _Bool conferenceViewModelRemoved;
@property(readonly) _Bool locationViewModelRemoved;
- (_Bool)canManagePresentationStyle;	// IMP=0x00000000000c4b11
- (_Bool)wantsManagement;	// IMP=0x00000000000c4b09
- (id)_cellForConferenceRoom:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000c4a48
- (void)virtualConferenceSearchUpdated:(id)arg1;	// IMP=0x00000000000c47b4
- (void)eventsSearchUpdated:(id)arg1;	// IMP=0x00000000000c4797
- (void)frequentsSearchUpdated:(id)arg1;	// IMP=0x00000000000c477a
- (void)mapSearchUpdated:(id)arg1;	// IMP=0x00000000000c475d
- (void)recentsSearchUpdated:(id)arg1;	// IMP=0x00000000000c4740
- (void)contactsSearchUpdated:(id)arg1;	// IMP=0x00000000000c4723
- (void)conferenceRoomSearchUpdated:(id)arg1;	// IMP=0x00000000000c46a3
- (void)currentLocationUpdated:(id)arg1;	// IMP=0x00000000000c4686
- (_Bool)shouldIncludeConferenceRoom:(id)arg1;	// IMP=0x00000000000c4308
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000c3ccb
- (id)calendarItemForSearchModel:(id)arg1;	// IMP=0x00000000000c3cb6
- (id)pinImage;	// IMP=0x00000000000c3c3f
- (id)contactsImage;	// IMP=0x00000000000c3b69
- (id)locationArrowImage;	// IMP=0x00000000000c39e6
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000c388b
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c3869
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c2229
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000c2218
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000c1f60
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x00000000000c1f3f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c1814
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000c1499
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000c148e
- (id)conferenceRoomForRecent:(id)arg1;	// IMP=0x00000000000c124c
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00000000000c0d87
- (void)useAsString:(id)arg1;	// IMP=0x00000000000c0bed
- (_Bool)showAvailableConferenceTypesAsRows;	// IMP=0x00000000000c0b5e
- (_Bool)showingCurrentLocationRow;	// IMP=0x00000000000c0a3b
- (_Bool)showingTextRow;	// IMP=0x00000000000c09cc
- (_Bool)presentModally;	// IMP=0x00000000000c099c
- (void)_setupViewsAndConstraints;	// IMP=0x00000000000bfaa9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000bf9cb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000bf83e
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000bf826
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000000bf80e
- (void)viewDidLoad;	// IMP=0x00000000000bf0a2
- (id)title;	// IMP=0x00000000000bf04a
- (void)setViewAppearedBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf038
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;	// IMP=0x00000000000bee97
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;	// IMP=0x00000000000bee80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

