//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDStereoPairDailyCountProviderContext-Protocol.h>

@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler, NSString;

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext>
{
    HMDHomeMediaSystemHandler *_mediaSystemController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000716100
@property(readonly) __weak HMDHomeMediaSystemHandler *mediaSystemController; // @synthesize mediaSystemController=_mediaSystemController;
@property(readonly) __weak HMDLogEventDailyScheduler *scheduler;
- (id)initWithMediaSystemController:(id)arg1;	// IMP=0x000000000071606d
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x0000000000715fe3
- (void)submitLogEvent:(id)arg1;	// IMP=0x0000000000715f6d
- (void)registerLogEventDailyProvider:(id)arg1;	// IMP=0x0000000000715efb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
