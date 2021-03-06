//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/_ICPredictionSourcing-Protocol.h>

@class NSString;

@interface _ICInternalSource : NSObject <_ICPredictionSourcing>
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000f784
- (void)propogateMetrics:(id)arg1 data:(id)arg2;	// IMP=0x000000000000f77e
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;	// IMP=0x000000000000f778
- (_Bool)doesSupportTriggerSourceType:(unsigned char)arg1;	// IMP=0x000000000000f76c
- (void)hibernate;	// IMP=0x000000000000f766
- (void)warmUp;	// IMP=0x000000000000f760
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f74b
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f736
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;	// IMP=0x000000000000f28c
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000e949
- (id)name;	// IMP=0x000000000000e93b
- (id)init;	// IMP=0x000000000000e8ea

@end

