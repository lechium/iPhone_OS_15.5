//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SUInstallationConstraintMonitorSync
{
    _Bool _queue_isSyncing;	// 16 = 0x10
}

- (void)_queue_setSyncing:(_Bool)arg1;	// IMP=0x000000000000b105
- (unsigned long long)unsatisfiedConstraints;	// IMP=0x000000000000b0bd
- (void)dealloc;	// IMP=0x000000000000b08e
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;	// IMP=0x000000000000b03c

@end
