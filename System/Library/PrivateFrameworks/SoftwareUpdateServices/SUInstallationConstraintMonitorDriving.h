//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SUInstallationConstraintMonitorDriving
{
    _Bool _queue_isDriving;	// 16 = 0x10
}

- (unsigned long long)unsatisfiedConstraints;	// IMP=0x00000000000113b5
- (void)_handleVehicularStateChangeNotification:(id)arg1;	// IMP=0x000000000001134a
- (void)_queue_pollSatisfied;	// IMP=0x000000000001120e
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;	// IMP=0x0000000000011145

@end
