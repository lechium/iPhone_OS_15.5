//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAESubscribedCalendarSummary, EKICSPreviewController, NSArray;

@interface EKCalendarPreviewEventsEditItem
{
    DAESubscribedCalendarSummary *_previewSummary;	// 24 = 0x18
    NSArray *_previewEventViews;	// 32 = 0x20
    EKICSPreviewController *_previewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ebd56
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000000ebc62
- (id)headerTitle;	// IMP=0x00000000000ebc0a
- (id)chooseEventsForPreview:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000eb801
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000eb04e
- (id)initWithPreviewSummary:(id)arg1;	// IMP=0x00000000000eaf58

@end
