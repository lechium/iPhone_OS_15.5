//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PurplePageLoadTestRunner
{
    NSMutableDictionary *_pptResults;	// 184 = 0xb8
    NSMutableDictionary *_iterationResults;	// 192 = 0xc0
    _Bool _showLoadTime;	// 200 = 0xc8
    _Bool _showFirstVisualLayoutTime;	// 201 = 0xc9
    _Bool _showRenderTime;	// 202 = 0xca
    _Bool _showRenderFps;	// 203 = 0xcb
}

- (void).cxx_destruct;	// IMP=0x00000000000b2c15
@property(nonatomic) _Bool showRenderFps; // @synthesize showRenderFps=_showRenderFps;
@property(nonatomic) _Bool showRenderTime; // @synthesize showRenderTime=_showRenderTime;
@property(nonatomic) _Bool showFirstVisualLayoutTime; // @synthesize showFirstVisualLayoutTime=_showFirstVisualLayoutTime;
@property(nonatomic) _Bool showLoadTime; // @synthesize showLoadTime=_showLoadTime;
- (void)writeOutputData;	// IMP=0x00000000000b29c4
- (void)collectPPTResults;	// IMP=0x00000000000b1cd3
- (void)pptResultFor:(id)arg1 measure:(id)arg2 time:(double)arg3;	// IMP=0x00000000000b1cb2
- (void)pptResultFor:(id)arg1 measure:(id)arg2 value:(double)arg3 units:(id)arg4;	// IMP=0x00000000000b1b4c
- (void)finishedTestRunner;	// IMP=0x00000000000b1ab8
- (void)finishedTestRunnerIteration;	// IMP=0x00000000000b1a7a
- (void)startingTestRunner;	// IMP=0x00000000000b19ff
- (id)initRenderTestWithName:(id)arg1 browserController:(id)arg2 showRenderTime:(_Bool)arg3 showFPS:(_Bool)arg4;	// IMP=0x00000000000b1993
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000000b18cc

@end
