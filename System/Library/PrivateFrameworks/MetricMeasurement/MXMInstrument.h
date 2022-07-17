//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MXMInstrument : NSObject
{
    _Bool _didQuiesce;	// 8 = 0x8
    NSArray *_instrumentals;	// 16 = 0x10
    NSURL *_performanceTraceFileURL;	// 24 = 0x18
    NSData *_perfMetricsPerfdata;	// 32 = 0x20
    NSString *_performanceTraceFileSandboxExtensionToken;	// 40 = 0x28
    CDStruct_33f31899 *_currentIteration;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_instrumentalsQueue;	// 56 = 0x38
}

+ (id)instrumentWithInstrumentals:(id)arg1;	// IMP=0x00000000000195a7
+ (id)activeInstrument;	// IMP=0x00000000000193cb
+ (void)load;	// IMP=0x00000000000193b8
- (void).cxx_destruct;	// IMP=0x000000000001da9f
@property(readonly) _Bool didQuiesce; // @synthesize didQuiesce=_didQuiesce;
@property(readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue; // @synthesize instrumentalsQueue=_instrumentalsQueue;
@property CDStruct_33f31899 *currentIteration; // @synthesize currentIteration=_currentIteration;
@property(readonly) NSString *performanceTraceFileSandboxExtensionToken; // @synthesize performanceTraceFileSandboxExtensionToken=_performanceTraceFileSandboxExtensionToken;
@property(readonly) NSData *perfMetricsPerfdata; // @synthesize perfMetricsPerfdata=_perfMetricsPerfdata;
@property(readonly) NSURL *performanceTraceFileURL; // @synthesize performanceTraceFileURL=_performanceTraceFileURL;
@property(readonly, nonatomic) NSArray *instrumentals; // @synthesize instrumentals=_instrumentals;
- (void)dealloc;	// IMP=0x000000000001d9c8
- (id)_validOptionKeys;	// IMP=0x000000000001d90b
- (id)_defaultValueWithOption:(id)arg1;	// IMP=0x000000000001d7c4
- (id)_valueWithOption:(id)arg1 userOptions:(id)arg2;	// IMP=0x000000000001d71c
- (id)_makeInstrumentalsForIteration:(id)arg1 shouldCopy:(_Bool)arg2;	// IMP=0x000000000001d512
- (void)_makePerfDataFromMXMResults:(id)arg1 testName:(id)arg2;	// IMP=0x000000000001cf20
- (id)measureAutomatically:(unsigned long long)arg1 options:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001be3f
- (id)measureAutomatically:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001be28
- (id)measureWithOptions:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001be0b
- (id)measureBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bdef
- (id)stopWithError:(id *)arg1;	// IMP=0x000000000001b7c7
- (id)stop;	// IMP=0x000000000001b7b3
- (_Bool)startWithError:(id *)arg1;	// IMP=0x000000000001b368
- (void)start;	// IMP=0x000000000001b354
- (id)_transitionWithState:(unsigned long long)arg1 iteration:(const CDStruct_33f31899 *)arg2 instrumentals:(id)arg3;	// IMP=0x000000000001aa23
- (void)_setupAndRunWithIteration:(CDStruct_33f31899 *)arg1 spawnThread:(_Bool)arg2 attrs:(struct _opaque_pthread_attr_t *)arg3 pthread:(struct _opaque_pthread_t **)arg4 returnCode:(unsigned long long *)arg5;	// IMP=0x0000000000019b70
- (void)_prepareIteration:(CDStruct_33f31899 *)arg1 options:(id)arg2 instrumentals:(id)arg3 errors:(id)arg4;	// IMP=0x000000000001971a
- (id)initWithInstrumentals:(id)arg1;	// IMP=0x00000000000195f0
@property _Bool active;

@end
