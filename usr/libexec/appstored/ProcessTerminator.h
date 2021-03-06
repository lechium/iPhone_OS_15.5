//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSString, RBSTerminationAssertion;

@interface ProcessTerminator : NSObject
{
    NSConditionLock *_condition;	// 8 = 0x8
    RBSTerminationAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000192e4b
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000192e08
- (_Bool)terminateProcessWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x0010000000192da9
- (_Bool)terminateProcessBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000192c14
- (void)dealloc;	// IMP=0x0010000000192bb4
- (id)initWithPredicate:(id)arg1 explanation:(id)arg2;	// IMP=0x0010000000192a86
- (id)initWithBundleID:(id)arg1 explanation:(id)arg2;	// IMP=0x0010000000192a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

