//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKCalendarChooserDelegate-Protocol.h>

@class EKCalendar, EKCalendarChooser, EKEvent, EKEventStore, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItemViewController <EKCalendarChooserDelegate>
{
    EKEventStore *_store;	// 72 = 0x48
    EKCalendarChooser *_chooser;	// 80 = 0x50
    unsigned long long _entityType;	// 88 = 0x58
    EKCalendar *_selectedCalendar;	// 96 = 0x60
    _Bool _limitToSource;	// 104 = 0x68
    _Bool _onlyShowUnmanagedSources;	// 105 = 0x69
    EKEvent *_event;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001191e0
@property(nonatomic) _Bool onlyShowUnmanagedSources; // @synthesize onlyShowUnmanagedSources=_onlyShowUnmanagedSources;
@property(nonatomic) __weak EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool limitToSource; // @synthesize limitToSource=_limitToSource;
- (void)calendarChooserSelectionDidChange:(id)arg1;	// IMP=0x0000000000119161
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000119045
@property(retain, nonatomic) EKCalendar *selectedCalendar;
- (void)loadView;	// IMP=0x0000000000118c14
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;	// IMP=0x0000000000118c00
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3;	// IMP=0x0000000000118beb
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4;	// IMP=0x0000000000118ad7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
