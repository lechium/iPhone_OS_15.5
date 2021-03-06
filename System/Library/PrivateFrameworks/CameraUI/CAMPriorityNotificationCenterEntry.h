//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMPriorityNotificationCenterEntry : NSObject
{
    id _observer;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    id _object;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f39d5
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (id)description;	// IMP=0x00000000000f38e4
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0000000000003fbc

@end

