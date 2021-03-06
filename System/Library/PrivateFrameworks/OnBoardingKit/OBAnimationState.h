//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OBAnimationState : NSObject
{
    NSString *_name;	// 8 = 0x8
    double _transitionDuration;	// 16 = 0x10
    double _transitionSpeed;	// 24 = 0x18
    NSString *_darkName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b4fa
@property(retain, nonatomic) NSString *darkName; // @synthesize darkName=_darkName;
@property(nonatomic) double transitionSpeed; // @synthesize transitionSpeed=_transitionSpeed;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)stateForLayer:(id)arg1;	// IMP=0x000000000002b38e
- (id)initWithStateName:(id)arg1 darkStateName:(id)arg2 transitionDuration:(double)arg3 transitionSpeed:(double)arg4;	// IMP=0x000000000002b2dd
- (id)initWithStateName:(id)arg1 transitionDuration:(double)arg2 transitionSpeed:(double)arg3;	// IMP=0x000000000002b24c

@end

