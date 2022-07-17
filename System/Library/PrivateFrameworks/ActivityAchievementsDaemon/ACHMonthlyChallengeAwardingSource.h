//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHAchievementProgressProviding-Protocol.h>
#import <ActivityAchievementsDaemon/ACHEarnedInstanceAwarding-Protocol.h>
#import <ActivityAchievementsDaemon/HDCurrentActivitySummaryHelperObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDDataObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, ACHEarnedInstanceStore, ACHMonthlyChallengeDataSource, ACHTemplateStore, HDProfile, NSString;

@interface ACHMonthlyChallengeAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>
{
    unsigned char _creatorDevice;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    ACHEarnedInstanceAwardingEngine *_engine;	// 24 = 0x18
    ACHAchievementProgressEngine *_progressProvider;	// 32 = 0x20
    ACHTemplateStore *_templateStore;	// 40 = 0x28
    ACHEarnedInstanceStore *_earnedInstanceStore;	// 48 = 0x30
    ACHMonthlyChallengeDataSource *_monthlyDataSource;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003824
@property(nonatomic) unsigned char creatorDevice; // @synthesize creatorDevice=_creatorDevice;
@property(nonatomic) __weak ACHMonthlyChallengeDataSource *monthlyDataSource; // @synthesize monthlyDataSource=_monthlyDataSource;
@property(nonatomic) __weak ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(nonatomic) __weak ACHAchievementProgressEngine *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(nonatomic) __weak ACHEarnedInstanceAwardingEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)_requestIncrementalEvaluation;	// IMP=0x00000000000035a1
- (id)_monthlyChallengeTemplatesForHistoricalInterval:(id)arg1;	// IMP=0x00000000000031fc
- (id)_earnedInstancesForInterval:(id)arg1;	// IMP=0x00000000000028fe
- (id)_evaluationEnvironmentForTemplate:(id)arg1;	// IMP=0x00000000000027d9
- (id)currentGoalQuantityForTemplate:(id)arg1;	// IMP=0x00000000000026a6
- (id)currentProgressQuantityForTemplate:(id)arg1;	// IMP=0x0000000000002573
- (_Bool)providesProgressForTemplate:(id)arg1;	// IMP=0x000000000000239b
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000002217
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;	// IMP=0x00000000000020e8
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;	// IMP=0x0000000000001fb9
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000001c1d
@property(readonly, nonatomic) NSString *uniqueName;
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000001b27
- (id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 earnedInstanceStore:(id)arg4 monthlyDataSource:(id)arg5 creatorDevice:(unsigned char)arg6 progressProvider:(id)arg7;	// IMP=0x00000000000019b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
