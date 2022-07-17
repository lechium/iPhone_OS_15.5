//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCDerivedPersonalizationData-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying>
{
    NSDictionary *_aggregatesByFeatureKey;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a0ed3
- (void).cxx_destruct;	// IMP=0x00000000002a0edb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a0e64
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a0d52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a0d47
- (id)aggregateForFeatureKey:(id)arg1;	// IMP=0x00000000002a0d28
- (id)aggregatesForFeatureKeys:(id)arg1;	// IMP=0x00000000002a0d09
- (id)init;	// IMP=0x00000000002a0bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
