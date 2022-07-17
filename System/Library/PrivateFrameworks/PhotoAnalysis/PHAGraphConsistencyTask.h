//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PGGraphUpdateListener-Protocol.h>
#import <PhotoAnalysis/PHATask-Protocol.h>

@class MAProgressReporter, NSString, PGGraphUpdateManager;
@protocol OS_dispatch_semaphore;

@interface PHAGraphConsistencyTask : NSObject <PHATask, PGGraphUpdateListener>
{
    PGGraphUpdateManager *_updateManager;	// 8 = 0x8
    MAProgressReporter *_progressReporter;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007182c
- (void)graphUpdateDidStop;	// IMP=0x000000000007181a
- (void)graphUpdateIsConsistent;	// IMP=0x0000000000071808
- (void)graphUpdateMadeProgress:(double)arg1;	// IMP=0x00000000000717ae
- (_Bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007158a
- (void)markTaskAsCompleted;	// IMP=0x000000000007157c
- (_Bool)shouldRunWithGraphManager:(id)arg1;	// IMP=0x000000000007152b
@property(readonly, nonatomic) double period;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
