//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUICAAnimationFactory-Protocol.h>

@class CCUICASpringAnimationParameters, NSString;

@interface CCUICASpringAnimationFactory : NSObject <CCUICAAnimationFactory>
{
    CCUICASpringAnimationParameters *_parameters;	// 8 = 0x8
    double _speed;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000289d5
- (id)_animation;	// IMP=0x0000000000028759
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000028751
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000000286df
@property(readonly, nonatomic) double animationDuration; // @dynamic animationDuration;
- (id)initWithParameters:(id)arg1 speed:(double)arg2;	// IMP=0x0000000000028612

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
