//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDOntologyDatabaseAvailabilityObserver-Protocol.h>
#import <HealthDaemon/HDProfileReadyObserver-Protocol.h>
#import <HealthDaemon/HDUserDomainConceptObserver-Protocol.h>

@class HDProfile, NSString;

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDProfileReadyObserver, HDUserDomainConceptObserver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _batchSize;	// 16 = 0x10
    _Bool _hasScheduledProcessing;	// 24 = 0x18
    _Bool _ignoresAutomaticProcessingTriggers;	// 25 = 0x19
    HDProfile *_profile;	// 32 = 0x20
    CDUnknownBlockType _unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004d8f8c
@property(copy, nonatomic) CDUnknownBlockType unitTesting_userDomainConceptProcessingManagerDidFinishProcessing; // @synthesize unitTesting_userDomainConceptProcessingManagerDidFinishProcessing=_unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property(nonatomic) _Bool ignoresAutomaticProcessingTriggers; // @synthesize ignoresAutomaticProcessingTriggers=_ignoresAutomaticProcessingTriggers;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)unitTesting_overrideDefaultBatchSize:(long long)arg1;	// IMP=0x00000000004d8f23
- (void)unitTesting_triggerUserDomainConceptProcessing;	// IMP=0x00000000004d8f10
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;	// IMP=0x00000000004d7f0c
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;	// IMP=0x00000000004d7f06
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;	// IMP=0x00000000004d7ef5
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;	// IMP=0x00000000004d7ee4
- (void)ontologyDatabase:(id)arg1 didBecomeAvailable:(_Bool)arg2;	// IMP=0x00000000004d794b
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x00000000004d783f
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000004d77a1
- (id)init;	// IMP=0x00000000004d7727

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
