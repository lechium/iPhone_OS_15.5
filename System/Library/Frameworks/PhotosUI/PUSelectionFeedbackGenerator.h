//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface PUSelectionFeedbackGenerator : NSObject
{
    UISelectionFeedbackGenerator *_feedbackGenerator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ea2c9
@property(readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (void)performFeedback;	// IMP=0x00000000003ea282
- (void)prepareFeedback;	// IMP=0x00000000003ea245
- (id)init;	// IMP=0x00000000003ea12a

@end
