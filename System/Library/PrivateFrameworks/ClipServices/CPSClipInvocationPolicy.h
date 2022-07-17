//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClipServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPSClipInvocationPolicy : NSObject <NSSecureCoding>
{
    _Bool _eligible;	// 8 = 0x8
    long long _reason;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001de46
+ (id)invocationPolicyWithAMSDict:(id)arg1;	// IMP=0x000000000001d85d
+ (void)requestAccountPolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d00e
+ (id)ineligiblePolicyWithReason:(long long)arg1;	// IMP=0x000000000001cfdd
+ (id)eligiblePolicy;	// IMP=0x000000000001cfb4
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic, getter=isEligible) _Bool eligible; // @synthesize eligible=_eligible;
- (id)description;	// IMP=0x000000000001de4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ddd3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dd31
@property(readonly, nonatomic) _Bool canShowHeroImage;
@property(readonly, nonatomic, getter=isIneligibleDueToContentRestriction) _Bool ineligibleDueToContentRestriction;
@property(readonly, nonatomic, getter=isRecoverable) _Bool recoverable;
- (id)localizedMessageForClipMetadata:(id)arg1;	// IMP=0x000000000001db3c
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)initWithEligible:(_Bool)arg1 reason:(long long)arg2;	// IMP=0x000000000001cf50

@end
