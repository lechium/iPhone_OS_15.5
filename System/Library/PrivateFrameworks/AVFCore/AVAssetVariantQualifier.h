//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSSecureCoding-Protocol.h>

@class AVAssetVariant, NSPredicate;

@interface AVAssetVariantQualifier : NSObject <NSSecureCoding, NSCopying>
{
    NSPredicate *_predicate;	// 8 = 0x8
    AVAssetVariant *_variant;	// 16 = 0x10
    long long _environmentalConditions;	// 24 = 0x18
}

+ (id)predicateForPresentationHeight:(double)arg1 operatorType:(unsigned long long)arg2;	// IMP=0x0000000000121338
+ (id)predicateForPresentationWidth:(double)arg1 operatorType:(unsigned long long)arg2;	// IMP=0x00000000001212f8
+ (id)predicateForChannelCount:(long long)arg1 mediaSelectionOption:(id)arg2 operatorType:(unsigned long long)arg3;	// IMP=0x00000000001212ae
+ (id)assetVariantQualifierWithVariant:(id)arg1;	// IMP=0x000000000012127d
+ (id)assetVariantQualifierWithPredicate:(id)arg1;	// IMP=0x000000000012124c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012141d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001213d6
- (id)_variant;	// IMP=0x00000000001213cc
- (id)_predicate;	// IMP=0x00000000001213c2
- (void)dealloc;	// IMP=0x0000000000121378
- (id)initWithVariant:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000012112f
- (_Bool)_validatePredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001210d0
@property(nonatomic) long long environmentalConditions;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001214f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000121425

@end
