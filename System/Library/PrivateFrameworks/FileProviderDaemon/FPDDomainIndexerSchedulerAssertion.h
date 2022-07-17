//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDProcessMonitorDelegate-Protocol.h>
#import <FileProviderDaemon/FPIndexingAssertion-Protocol.h>

@class FPDProcessMonitor, NSString;

@interface FPDDomainIndexerSchedulerAssertion : NSObject <FPDProcessMonitorDelegate, FPIndexingAssertion>
{
    FPDProcessMonitor *_monitor;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    _Bool _forceForeground;	// 20 = 0x14
    CDUnknownBlockType _unregisterForceRunning;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000048a69
- (void)processMonitor:(id)arg1 didBecomeForeground:(_Bool)arg2;	// IMP=0x0000000000048959
- (void)dealloc;	// IMP=0x000000000004891b
- (void)stop;	// IMP=0x000000000004886a
- (void)start;	// IMP=0x00000000000487d6
- (id)initWithPID:(int)arg1 forceForeground:(_Bool)arg2;	// IMP=0x0000000000048790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
