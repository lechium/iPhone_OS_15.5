//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EKCalendarItemCalendarEditItem
{
    unsigned long long _entityType;	// 32 = 0x20
}

- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x0000000000069526
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000691ab
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000068df5
- (_Bool)_shouldShowSourceForCalendar:(id)arg1;	// IMP=0x0000000000068bd3
- (_Bool)requiresReconfigurationOnSave;	// IMP=0x0000000000068bcb
- (_Bool)shouldAppearWithVisibility:(int)arg1;	// IMP=0x0000000000068bae
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;	// IMP=0x00000000000689b5
- (id)init;	// IMP=0x00000000000689a1
- (id)initWithEntityType:(unsigned long long)arg1;	// IMP=0x000000000006895d

@end

