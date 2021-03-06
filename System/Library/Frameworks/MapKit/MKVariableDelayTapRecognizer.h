//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer
{
    double originalMaximumIntervalBetweenSuccessiveTaps;	// 8 = 0x8
    id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d9bd9
@property(nonatomic) __weak id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; // @synthesize tapDelayDelegate;
- (void)reset;	// IMP=0x00000000000d9b42
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d99c2
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000d995f

@end

