//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <NewsPersonalization/FCPersonalizedGrouping-Protocol.h>

@class MISSING_TYPE;

@interface _TtC19NewsPersonalization21XavierGroupingService : _TtCs12_SwiftObject <FCPersonalizedGrouping>
{
    MISSING_TYPE *cloudContext;	// 16 = 0x10
    MISSING_TYPE *personalizationTreatment;	// 24 = 0x18
    MISSING_TYPE *favoritesPersonalizer;	// 32 = 0x20
    MISSING_TYPE *deviceIsiPad;	// 40 = 0x28
    MISSING_TYPE *paidAccessChecker;	// 48 = 0x30
    MISSING_TYPE *isRunningPPT;	// 56 = 0x38
}

- (id)bestOfGroupFromFeedItems:(id)arg1 scoreProfiles:(id)arg2 configurationSet:(long long)arg3;	// IMP=0x0000000000022ac0
- (id)bestOfGroupFromHeadlines:(id)arg1 configurationSet:(long long)arg2;	// IMP=0x0000000000022710

@end

