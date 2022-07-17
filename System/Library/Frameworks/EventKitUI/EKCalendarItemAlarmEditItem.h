//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKCalendarItemAlarmEditItem
{
    unsigned long long _disclosedSubitem;	// 32 = 0x20
    NSArray *_alarms;	// 40 = 0x28
    _Bool _userChangedAlarm;	// 48 = 0x30
    _Bool _hasLeaveNowAlarm;	// 49 = 0x31
    _Bool _canHaveLeaveNowAlarm;	// 50 = 0x32
    EKAlarmsViewModel *_alarmsViewModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000108e71
@property(retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // @synthesize alarmsViewModel=_alarmsViewModel;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x0000000000108e15
- (_Bool)_alarmsMatchCalendarItem;	// IMP=0x0000000000108b8f
- (void)ttlLocationStatusChanged:(id)arg1;	// IMP=0x00000000001089ce
- (void)refreshFromCalendarItemAndStore;	// IMP=0x000000000010898d
- (void)_updateAlarms;	// IMP=0x0000000000108803
- (_Bool)_calendarItemHasLeaveNowAlarm;	// IMP=0x0000000000108759
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x00000000001083b6
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000107e97
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x0000000000107c52
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000107bdd
- (unsigned long long)numberOfSubitems;	// IMP=0x0000000000107a6d
- (void)setCalendarItem:(id)arg1 store:(id)arg2;	// IMP=0x0000000000107868

@end
