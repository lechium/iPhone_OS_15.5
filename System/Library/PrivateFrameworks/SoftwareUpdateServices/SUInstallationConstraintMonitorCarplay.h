//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/CARSessionObserving-Protocol.h>

@class CARSessionStatus, NSString;

@interface SUInstallationConstraintMonitorCarplay <CARSessionObserving>
{
    _Bool _queue_CarplayConnected;	// 16 = 0x10
    CARSessionStatus *_queue_carSessionStatus;	// 24 = 0x18
}

- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x000000000002f4c2
- (void)sessionDidConnect:(id)arg1;	// IMP=0x000000000002f457
- (void)_queue_carplayDidChange;	// IMP=0x000000000002f32c
- (unsigned long long)unsatisfiedConstraints;	// IMP=0x000000000002f2e4
- (void)dealloc;	// IMP=0x000000000002f296
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;	// IMP=0x000000000002f129

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

