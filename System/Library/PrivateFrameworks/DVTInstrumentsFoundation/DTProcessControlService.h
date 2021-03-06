//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTProcessControlServiceAuthorizedMethods-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods>
{
    NSMutableArray *_pids;	// 8 = 0x8
    NSMutableArray *_sources;	// 16 = 0x10
    NSMutableDictionary *_activeIODispatchSources;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_deathNoteQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_synchronousRedirectionQueue;	// 40 = 0x28
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x000000000003a46d
- (void).cxx_destruct;	// IMP=0x000000000003c0e2
- (void)watchOutputFileName:(id)arg1 directory:(id)arg2 forPid:(int)arg3;	// IMP=0x000000000003bd3f
- (void)watchOutputFileDescriptor:(int)arg1 forPid:(int)arg2;	// IMP=0x000000000003b999
- (void)handleRedirectionIterationForFileDescriptor:(int)arg1 forPid:(int)arg2 withDispatchSource:(id)arg3;	// IMP=0x000000000003b8d8
- (int)maybeRedirectFromFileDescriptor:(int)arg1 fromPid:(int)arg2 withScratchBuffer:(char *)arg3 ofByteLength:(unsigned long long)arg4;	// IMP=0x000000000003b7aa
- (id)requestDisableMemoryLimitsForPid:(int)arg1;	// IMP=0x000000000003b67d
- (int)cleanupPid:(int)arg1;	// IMP=0x000000000003b672
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;	// IMP=0x000000000003b457
- (void)_performMemoryWarningForPid:(int)arg1;	// IMP=0x000000000003b434
- (void)sendSignal:(id)arg1 toPid:(id)arg2;	// IMP=0x000000000003b307
- (void)killPid:(id)arg1;	// IMP=0x000000000003b2eb
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;	// IMP=0x000000000003b292
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000003b26f
- (void)suspendPid:(id)arg1;	// IMP=0x000000000003b0ef
- (void)resumePid:(id)arg1;	// IMP=0x000000000003af33
- (void)stopObservingPid:(id)arg1;	// IMP=0x000000000003ae67
- (void)startObservingPid:(id)arg1;	// IMP=0x000000000003a738
- (id)initWithChannel:(id)arg1;	// IMP=0x000000000003a4d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

