//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

#import <BaseBoardUI/BSUIDateLabel-Protocol.h>

@class NSDate, NSString, NSTimer;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel>
{
    NSDate *_timeZoneRelativeEndDate;	// 8 = 0x8
    NSDate *_effectiveAllDayStartDate;	// 16 = 0x10
    NSDate *_effectiveAllDayLastValidDate;	// 24 = 0x18
    NSDate *_effectiveAllDayEndDate;	// 32 = 0x20
    _Bool _effectiveAllDay;	// 40 = 0x28
    _Bool _isCoalescingUpdates;	// 41 = 0x29
    _Bool _needsUpdateFromCoalesce;	// 42 = 0x2a
    NSTimer *_updateTimer;	// 48 = 0x30
    _Bool _allDay;	// 56 = 0x38
    _Bool _isTimestamp;	// 57 = 0x39
    id <BSUIDateLabelDelegate> _delegate;	// 64 = 0x40
    long long _labelType;	// 72 = 0x48
    NSDate *_timeZoneRelativeStartDate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000011cd9
@property(readonly, nonatomic) NSDate *timeZoneRelativeStartDate; // @synthesize timeZoneRelativeStartDate=_timeZoneRelativeStartDate;
@property(nonatomic) _Bool isTimestamp; // @synthesize isTimestamp=_isTimestamp;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(nonatomic) __weak id <BSUIDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
- (void)stopCoalescingUpdates;	// IMP=0x0000000000011c16
- (void)startCoalescingUpdates;	// IMP=0x0000000000011c05
- (void)update;	// IMP=0x0000000000011bd9
- (void)_forceUpdate;	// IMP=0x00000000000119b2
- (void)updateTextIfNecessary;	// IMP=0x00000000000119a6
- (void)_updateTimerFired:(id)arg1;	// IMP=0x000000000001197a
- (id)constructLabelString;	// IMP=0x0000000000010912
- (_Bool)isEffectiveAllDay;	// IMP=0x00000000000104ab
- (_Bool)isDateWithinEffectiveAllDayRange:(id)arg1;	// IMP=0x0000000000010318
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;	// IMP=0x00000000000101f4
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;	// IMP=0x000000000000ff92
- (void)setTimeZoneRelativeEndDate:(id)arg1;	// IMP=0x000000000000ff0b
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;	// IMP=0x000000000000fe84
- (void)prepareForReuse;	// IMP=0x000000000000fa26
- (void)dealloc;	// IMP=0x000000000000f8f6
- (id)init;	// IMP=0x000000000000f7f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
