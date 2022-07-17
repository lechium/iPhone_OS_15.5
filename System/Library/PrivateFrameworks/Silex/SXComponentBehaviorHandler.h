//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SXComponentBehavior, SXComponentView, UIView;

@interface SXComponentBehaviorHandler : NSObject
{
    _Bool _isSetup;	// 8 = 0x8
    SXComponentView *_componentView;	// 16 = 0x10
    SXComponentBehavior *_behavior;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000111c13
@property(readonly, nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(readonly, nonatomic) SXComponentBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) SXComponentView *componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) _Bool requiresContinuousUpdates;
@property(readonly, nonatomic) UIView *behaviorView;
- (void)destroyWithBehaviorController:(id)arg1;	// IMP=0x0000000000111b1d
- (void)updateWithBehaviorController:(id)arg1;	// IMP=0x0000000000111b17
- (void)setupWithBehaviorController:(id)arg1;	// IMP=0x0000000000111ac6
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;	// IMP=0x0000000000111a2d

@end
