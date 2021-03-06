//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBSetupAssistantProgressController.h>

@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController
{
    NSDateComponentsFormatter *_durationFormatter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d2c5
@property(retain) NSDateComponentsFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
- (id)timeRemainingString:(double)arg1;	// IMP=0x000000000000d0e9
- (void)setProgress:(double)arg1;	// IMP=0x000000000000d0aa
- (void)setTimeRemainingEstimate:(double)arg1;	// IMP=0x000000000000d05e
- (void)viewDidLoad;	// IMP=0x000000000000cf0a
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x000000000000ce52

@end

