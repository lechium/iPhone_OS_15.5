//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class CKDistributedTimestampClockVector, CKDistributedTimestampStateVector, NSString;

@interface CKAtomBatchMetadata : NSObject <NSCopying, NSSecureCoding>
{
    CKDistributedTimestampClockVector *_previousVector;	// 8 = 0x8
    CKDistributedTimestampStateVector *_contentsVector;	// 16 = 0x10
    CKDistributedTimestampStateVector *_removalsVector;	// 24 = 0x18
    CKDistributedTimestampClockVector *_dependenciesVector;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dc0e3
+ (id)replacementBatchMetadatasForBatchDirectory:(id)arg1 withMergeableValuePreviousStateVector:(id)arg2 currentStateVector:(id)arg3;	// IMP=0x00000000000cf264
- (void).cxx_destruct;	// IMP=0x00000000000dd45d
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector; // @synthesize dependenciesVector=_dependenciesVector;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector; // @synthesize removalsVector=_removalsVector;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector; // @synthesize contentsVector=_contentsVector;
@property(readonly, nonatomic) CKDistributedTimestampClockVector *previousVector; // @synthesize previousVector=_previousVector;
- (_Bool)_validate:(id *)arg1;	// IMP=0x00000000000dcdd1
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000dcbc4
- (id)description;	// IMP=0x00000000000dca46
- (unsigned long long)hash;	// IMP=0x00000000000dc921
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc475
- (_Bool)isEqualToBatchMetadata:(id)arg1;	// IMP=0x00000000000dc463
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc30f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc0eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbfd0
- (id)initWithIdentifier:(id)arg1 previousStateVector:(id)arg2 currentStateVector:(id)arg3;	// IMP=0x00000000000dbe5f
- (id)initWithIdentifier:(id)arg1 previousVector:(id)arg2 contentsVector:(id)arg3 removalsVector:(id)arg4 dependenciesVector:(id)arg5;	// IMP=0x00000000000dbbc6
- (id)initWithPreviousStateVector:(id)arg1 currentStateVector:(id)arg2;	// IMP=0x00000000000dbb0d

@end

