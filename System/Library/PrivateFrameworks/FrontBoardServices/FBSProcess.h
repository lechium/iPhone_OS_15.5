//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSProcessInternal-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessHandle, NSString, RBSProcessIdentity;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding>
{
    BSProcessHandle *_handle;	// 8 = 0x8
    RBSProcessIdentity *_identity;	// 16 = 0x10
    BSMachPortTaskNameRight *_taskNameRight;	// 24 = 0x18
    _Bool _running;	// 32 = 0x20
}

+ (id)currentProcess;	// IMP=0x000000000004dd4f
- (void).cxx_destruct;	// IMP=0x000000000004e20f
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_taskNameRight;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004e1ea
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004e19a
- (id)succinctDescriptionBuilder;	// IMP=0x000000000004e0be
- (id)succinctDescription;	// IMP=0x000000000004e06e
@property(readonly, copy) NSString *description;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;	// IMP=0x000000000004e03f
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;	// IMP=0x000000000004e037
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;	// IMP=0x000000000004e02f
@property(readonly, retain, nonatomic) RBSProcessIdentity *identity;
@property(readonly, retain, nonatomic) BSProcessHandle *handle;
@property(readonly, nonatomic) int pid;
- (void)dealloc;	// IMP=0x000000000004dfbb
- (id)init;	// IMP=0x000000000004de8d
- (id)_initForCurrentProcess;	// IMP=0x000000000004ddb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
