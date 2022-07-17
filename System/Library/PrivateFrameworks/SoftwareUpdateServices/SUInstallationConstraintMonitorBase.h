//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintMonitor-Protocol.h>

@class SUDownload;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SUDownload *_download;	// 16 = 0x10
    unsigned long long _representedConstraints;	// 24 = 0x18
    id <SUInstallationConstraintMonitorDelegate> _queue_delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013fe5
- (_Bool)isSatisfied;	// IMP=0x0000000000013fb6
@property(nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
@property(readonly, nonatomic) unsigned long long unsatisfiedConstraints;
@property(readonly, nonatomic) unsigned long long representedConstraints;
@property(readonly, retain, nonatomic) SUDownload *download;
- (void)dealloc;	// IMP=0x0000000000013ea0
- (id)initOnQueue:(id)arg1 withRepresentedInstallationConstraints:(unsigned long long)arg2 andDownload:(id)arg3;	// IMP=0x0000000000013e24
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;	// IMP=0x0000000000013dc2

@end
