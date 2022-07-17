//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICPredictionSourcing-Protocol.h>

@class NSCondition, NSString, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting>
{
    NSCondition *_ppBrokerLoadedCondition;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    PPQuickTypeBroker *_ppBroker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a722
@property(retain) PPQuickTypeBroker *ppBroker; // @synthesize ppBroker=_ppBroker;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;	// IMP=0x000000000000a6f9
- (_Bool)doesSupportTriggerSourceType:(unsigned char)arg1;	// IMP=0x000000000000a6ed
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;	// IMP=0x000000000000a59a
- (void)hibernate;	// IMP=0x000000000000a538
- (void)warmUp;	// IMP=0x000000000000a38b
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a02c
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000096fc
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000092f3
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id *)arg5;	// IMP=0x000000000000878e
- (id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3;	// IMP=0x00000000000082c0
- (_Bool)_populateError:(id *)arg1 withExplanations:(id)arg2;	// IMP=0x0000000000007fb4
- (id)name;	// IMP=0x0000000000007fa6
- (id)getPPBroker;	// IMP=0x0000000000007dc7
- (id)_makePPQuickTypeBroker;	// IMP=0x0000000000007d3e
- (id)init;	// IMP=0x0000000000007b20

@end
