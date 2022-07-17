//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTBlockBasedScrollTestParameters-Protocol.h>
#import <RecapPerformanceTesting/RPTTestParameters-Protocol.h>

@class NSArray, NSString;

@interface RPTGroupScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTTestParameters>
{
    NSString *testName;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_parameters;	// 24 = 0x18
}

+ (id)newWithTestName:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000071c8
- (void).cxx_destruct;	// IMP=0x000000000000758e
@property(retain, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *testName; // @synthesize testName;
- (CDUnknownBlockType)composerBlock;	// IMP=0x0000000000007278
- (void)prepareWithComposer:(id)arg1;	// IMP=0x0000000000007138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool managesTestStartAndEnd;
@property(readonly) Class superclass;

@end
