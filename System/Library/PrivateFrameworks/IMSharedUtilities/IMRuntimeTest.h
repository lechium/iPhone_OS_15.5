//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject
{
    IMRuntimeTestRun *_testRun;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

+ (void)testLog:(id)arg1;	// IMP=0x000000000003d2d9
+ (id)testName;	// IMP=0x000000000003d092
+ (id)logHandle;	// IMP=0x000000000003ce2e
- (void).cxx_destruct;	// IMP=0x000000000003d4b0
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) IMRuntimeTestRun *testRun; // @synthesize testRun=_testRun;
- (void)testLog:(id)arg1;	// IMP=0x000000000003d1be
- (void)finishTestAfterInterval:(double)arg1;	// IMP=0x000000000003d12f
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d0a4
- (id)testName;	// IMP=0x000000000003d078
- (void)runTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000003cf8b
- (Class)testRunClass;	// IMP=0x000000000003cf7a
- (void)finishTest;	// IMP=0x000000000003cea4
- (id)logHandle;	// IMP=0x000000000003ce8a
- (void)startTest;	// IMP=0x000000000003ce28
- (void)tearDown;	// IMP=0x000000000003ce22
- (void)setUp;	// IMP=0x000000000003ce1c

@end
