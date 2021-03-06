//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject
{
    id <EFScheduler> _scheduler;	// 8 = 0x8
    id _object;	// 16 = 0x10
}

+ (id)trampolineWithScheduler:(id)arg1 object:(id)arg2;	// IMP=0x000000000003273c
- (void).cxx_destruct;	// IMP=0x0000000000032dee
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000032d00
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000032c95
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000032c47
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000032bc1
- (id)description;	// IMP=0x0000000000032b24
- (id)debugDescription;	// IMP=0x0000000000032a7c
- (id)_initWithScheduler:(id)arg1 object:(id)arg2;	// IMP=0x0000000000032938

@end

