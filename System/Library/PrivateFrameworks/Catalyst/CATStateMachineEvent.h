//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CATStateMachineEvent : NSObject
{
    id _trigger;	// 8 = 0x8
    id _context;	// 16 = 0x10
}

+ (id)eventWithTrigger:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b2fb
- (void).cxx_destruct;	// IMP=0x000000000002b496
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) id trigger; // @synthesize trigger=_trigger;
- (id)initWithEventTrigger:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b367
- (id)description;	// IMP=0x000000000002b2ab

@end
