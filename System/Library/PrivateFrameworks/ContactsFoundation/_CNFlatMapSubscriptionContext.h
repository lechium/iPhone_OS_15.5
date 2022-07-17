//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNQueue, NSMutableArray;
@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject
{
    CNQueue *_decorators;	// 8 = 0x8
    NSMutableArray *_tokens;	// 16 = 0x10
    id <CNScheduler> _downstream;	// 24 = 0x18
    id <CNScheduler> _resourceLock;	// 32 = 0x20
    _Bool _operatorReceiving;	// 40 = 0x28
    _Bool _observerReceiving;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x0000000000069a97
@property(readonly, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly, nonatomic) id <CNScheduler> downstream; // @synthesize downstream=_downstream;
@property(readonly, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) CNQueue *decorators; // @synthesize decorators=_decorators;
@property(nonatomic, getter=isObserverReceiving) _Bool observerReceiving; // @synthesize observerReceiving=_observerReceiving;
@property(nonatomic, getter=isOperatorReceiving) _Bool operatorReceiving; // @synthesize operatorReceiving=_operatorReceiving;
- (id)initWithSchedulerProvider:(id)arg1;	// IMP=0x0000000000069957

@end
