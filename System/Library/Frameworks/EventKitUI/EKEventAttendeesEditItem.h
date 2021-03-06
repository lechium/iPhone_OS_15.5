//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKParticipant, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem
{
    EKParticipant *_selfOrganizer;	// 32 = 0x20
    NSString *_searchAccountID;	// 40 = 0x28
    NSOperationQueue *_availabilityQueue;	// 48 = 0x30
    long long _numberOfConflicts;	// 56 = 0x38
}

+ (id)_noneInviteesLocalizedString;	// IMP=0x00000000000b0437
- (void).cxx_destruct;	// IMP=0x00000000000b10bd
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x00000000000b09ae
- (_Bool)forceRefreshInviteesItemOnSave;	// IMP=0x00000000000b09a6
- (_Bool)forceRefreshStartAndEndDatesOnSave;	// IMP=0x00000000000b099e
- (_Bool)forceTableReloadOnSave;	// IMP=0x00000000000b0996
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000b092d
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000b0805
- (id)attendeesWithoutSelfOrganizerAndLocations;	// IMP=0x00000000000b048f
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b00ff
- (void)refreshFromCalendarItemAndStore;	// IMP=0x00000000000aeef7
- (_Bool)shouldAppearWithVisibility:(int)arg1;	// IMP=0x00000000000ae7d9
- (_Bool)requiresReconfigurationOnSave;	// IMP=0x00000000000ae7d1
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x00000000000ae735
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;	// IMP=0x00000000000ae6f1
- (void)dealloc;	// IMP=0x00000000000ae6a8
- (id)init;	// IMP=0x00000000000ae606

@end

