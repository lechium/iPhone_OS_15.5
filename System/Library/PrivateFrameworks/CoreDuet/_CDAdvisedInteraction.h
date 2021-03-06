//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString, _CDContact;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_reasons;	// 8 = 0x8
    _CDContact *_contact;	// 16 = 0x10
    NSString *_account;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    long long _mechanism;	// 40 = 0x28
    double _score;	// 48 = 0x30
    long long _similarOutgoingInteractionsCount;	// 56 = 0x38
    long long _similarIncomingInteractionsCount;	// 64 = 0x40
    long long _similarBidirectionalInteractionsCount;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024492
- (void).cxx_destruct;	// IMP=0x0000000000024e92
@property long long similarBidirectionalInteractionsCount; // @synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount;
@property long long similarIncomingInteractionsCount; // @synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount;
@property long long similarOutgoingInteractionsCount; // @synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount;
@property double score; // @synthesize score=_score;
@property long long mechanism; // @synthesize mechanism=_mechanism;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) _CDContact *contact; // @synthesize contact=_contact;
- (void)addReasons:(id)arg1;	// IMP=0x0000000000024d0b
- (void)addReason:(long long)arg1;	// IMP=0x0000000000024c82
@property(retain) NSSet *reasons;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024a51
- (id)description;	// IMP=0x000000000002486f
- (id)descriptionOfReasons:(id)arg1;	// IMP=0x00000000000246dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024615
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002449a

@end

