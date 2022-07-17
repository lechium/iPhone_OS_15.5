//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMMLogEventSubmitting-Protocol.h>

@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler;
@protocol HMDLogEventDailyProvider;

@protocol HMDStereoPairDailyCountProviderContext <HMMLogEventSubmitting>
@property(readonly) __weak HMDLogEventDailyScheduler *scheduler;
@property(readonly) __weak HMDHomeMediaSystemHandler *mediaSystemController;
- (void)registerLogEventDailyProvider:(id <HMDLogEventDailyProvider>)arg1;
@end
