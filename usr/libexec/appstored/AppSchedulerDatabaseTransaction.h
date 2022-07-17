//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface AppSchedulerDatabaseTransaction
{
    NSMutableArray *_jettisonCandidates;	// 8 = 0x8
}

+ (id)_queryJettisonCandidatesOnConnection:(id)arg1;	// IMP=0x004000000010d1bf
+ (id)_queryActiveInstallationStatisticsOnConnection:(id)arg1;	// IMP=0x001000000010cfb5
- (void).cxx_destruct;	// IMP=0x002000000010dadd
- (_Bool)_verifyBootstrapCompleteOrNotRequired:(id)arg1;	// IMP=0x001000000010d8cb
- (_Bool)_verifyActiveInstallation:(id)arg1;	// IMP=0x001000000010d711
- (id)_findJettisonCandidateForPriority:(long long)arg1;	// IMP=0x001000000010d59a
- (id)scheduleMaximumActiveCount:(unsigned long long)arg1 evaluateUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c3b6
- (id)jettisonActiveInstallationsToReduceActiveCountTo:(unsigned long long)arg1 forReason:(long long)arg2;	// IMP=0x001000000010c0a5
- (void)bootstrapSourceType:(long long)arg1 enumerateUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000010bcbf
- (void)bootstrapResetSourceType:(long long)arg1 withError:(id)arg2;	// IMP=0x001000000010b988

@end
