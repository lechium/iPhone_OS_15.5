//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLBackgroundJobStatusStopWorkerEvent
{
    NSString *_worker;	// 16 = 0x10
    unsigned long long _pendingJobsCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005d06e1
@property unsigned long long pendingJobsCount; // @synthesize pendingJobsCount=_pendingJobsCount;
@property(retain) NSString *worker; // @synthesize worker=_worker;
- (id)statusDump;	// IMP=0x00000000005d05d5

@end

