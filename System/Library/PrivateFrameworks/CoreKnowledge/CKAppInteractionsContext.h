//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>
{
    MISSING_TYPE *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;	// 8 = 0x8
    MISSING_TYPE *numberOfDiscardedDonationsByIntentTypeAndBundleId;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002d70
- (void).cxx_destruct;	// IMP=0x00000000000036d0
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;	// IMP=0x00000000000035e0
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000002de0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002d40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002880
- (id)init;	// IMP=0x00000000000024c0

@end

