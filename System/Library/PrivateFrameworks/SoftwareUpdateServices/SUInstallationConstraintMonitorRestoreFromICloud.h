//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SUInstallationConstraintMonitorRestoreFromICloud
{
    _Bool _queue_isRestoring;	// 16 = 0x10
    int _queue_restoreToken;	// 20 = 0x14
}

- (void)_queue_restoreStateChanged;	// IMP=0x000000000000da60
- (unsigned long long)unsatisfiedConstraints;	// IMP=0x000000000000da18
- (void)dealloc;	// IMP=0x000000000000d9cb
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;	// IMP=0x000000000000d95e

@end
