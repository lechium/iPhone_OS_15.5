//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKAbstractCalendarEditor, EKCalendar;

@interface EKSubscribedCalendarEditItemViewController
{
    EKCalendar *_calendar;	// 72 = 0x48
    EKAbstractCalendarEditor *_calendarEditor;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000563f1
- (void)save;	// IMP=0x00000000000563d4
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000562b8
- (void)loadView;	// IMP=0x00000000000560e2
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2;	// IMP=0x0000000000055fc7

@end
