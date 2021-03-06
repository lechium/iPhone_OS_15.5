//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, NSString;
@protocol DESPluginManaging, MLRTrialManaging, OS_dispatch_queue;

@interface MLRTrialTaskWorker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <MLRTrialManaging> _trialManager;	// 16 = 0x10
    id <DESPluginManaging> _plugin;	// 24 = 0x18
    _Bool _alwaysRun;	// 32 = 0x20
    _Bool _requestedToStop;	// 33 = 0x21
    DESDebugRecord *_debugRecord;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00200000000081d8
- (void).cxx_destruct;	// IMP=0x0020000000009ba2
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) _Bool requestedToStop; // @synthesize requestedToStop=_requestedToStop;
- (id)telemetryResponse;	// IMP=0x0010000000009b87
- (void)stop;	// IMP=0x0010000000009b1b
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009211
- (_Bool)_DASAllowTask:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000904d
- (_Bool)_pluginSupportTrialTask:(id *)arg1;	// IMP=0x0010000000008f1e
- (void)_performAfterTask:(id)arg1 duration:(double)arg2 error:(id)arg3;	// IMP=0x0010000000008b9c
- (_Bool)updateTaskAfterCompletion:(id)arg1 taskID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000089d5
- (_Bool)canRunTask:(id)arg1;	// IMP=0x00100000000083cc
- (id)initWithTrialManager:(id)arg1 plugin:(id)arg2 alwaysRun:(_Bool)arg3;	// IMP=0x0010000000008226

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

