//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSOptional;

@interface VSStateTransition : NSObject
{
    VSOptional *_previousState;	// 8 = 0x8
    VSOptional *_triggeringEvent;	// 16 = 0x10
    VSOptional *_nextState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000014057
@property(retain, nonatomic) VSOptional *nextState; // @synthesize nextState=_nextState;
@property(retain, nonatomic) VSOptional *triggeringEvent; // @synthesize triggeringEvent=_triggeringEvent;
@property(retain, nonatomic) VSOptional *previousState; // @synthesize previousState=_previousState;
- (id)init;	// IMP=0x0000000000013f7a

@end

