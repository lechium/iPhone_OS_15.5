//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SignpostCommitInterval
{
    unsigned int _transactionSeed;	// 32 = 0x20
    int _pid;	// 36 = 0x24
    unsigned long long _threadID;	// 40 = 0x28
    NSString *_processName;	// 48 = 0x30
    NSString *_executablePath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000023bbe
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned int transactionSeed; // @synthesize transactionSeed=_transactionSeed;
- (id)initWithCommitInterval:(id)arg1;	// IMP=0x0000000000023996

@end

