//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKComplicationTemplate, CLKComplicationTimelineEntry, NSDate;

@interface NTKTimelineSetupOperation
{
    NSDate *_endDate;	// 40 = 0x28
    unsigned long long _privacyBehavior;	// 48 = 0x30
    unsigned long long _timelineAnimationBehavior;	// 56 = 0x38
    CLKComplicationTimelineEntry *_currentEntry;	// 64 = 0x40
    CLKComplicationTemplate *_alwaysOnTemplate;	// 72 = 0x48
    CDUnknownBlockType _handler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000363d9
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)_invokeHandler;	// IMP=0x00000000000362dd
- (void)_getAlwaysOnTemplate;	// IMP=0x0000000000036109
- (void)_getCurrentEntry;	// IMP=0x0000000000035e3b
- (void)_getTimelineAnimationBehavior;	// IMP=0x0000000000035d94
- (void)_getPrivacyBehavior;	// IMP=0x0000000000035ced
- (void)_getEndDate;	// IMP=0x0000000000035b83
- (void)_cancel;	// IMP=0x0000000000035b6f
- (void)_start;	// IMP=0x0000000000035b5d

@end
