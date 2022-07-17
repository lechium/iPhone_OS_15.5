//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface HMITaskServiceServer
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _nextTaskID;	// 12 = 0xc
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000000519d4
- (void).cxx_destruct;	// IMP=0x0000000000051a14
@property int nextTaskID; // @synthesize nextTaskID=_nextTaskID;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)buildUpdateTorsoModelTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051857
- (id)buildSubmitFeedbackTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051791
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000516a9
- (id)buildTuriTrialUpdateTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051658
- (id)buildHomePersonClusteringTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051123
- (id)buildFaceMisclassificationTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050f24
- (id)buildRemovePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050da7
- (id)buildUpdatePersonsModelTaskFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005066d
- (_Bool)cancelTask:(int)arg1;	// IMP=0x00000000000504b1
- (int)submitTask:(id)arg1 completionHander:(CDUnknownBlockType)arg2;	// IMP=0x00000000000502f0
- (int)submitTaskWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004fe40
- (int)getNextTaskID;	// IMP=0x000000000004fdcf
- (id)init;	// IMP=0x000000000004fd3c

@end
