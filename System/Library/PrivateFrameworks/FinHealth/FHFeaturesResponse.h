//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FinHealth/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface FHFeaturesResponse : NSObject <NSSecureCoding>
{
    NSArray *_smartFeatures;	// 8 = 0x8
    NSArray *_aggregateFeatures;	// 16 = 0x10
    NSArray *_compoundFeatures;	// 24 = 0x18
    NSString *_transactionIdentifier;	// 32 = 0x20
    NSArray *_aggregateFeaturesWithProcessingWindow;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008850
- (void).cxx_destruct;	// IMP=0x000000000000908a
@property(readonly, copy, nonatomic) NSArray *aggregateFeaturesWithProcessingWindow; // @synthesize aggregateFeaturesWithProcessingWindow=_aggregateFeaturesWithProcessingWindow;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSArray *compoundFeatures; // @synthesize compoundFeatures=_compoundFeatures;
@property(readonly, copy, nonatomic) NSArray *aggregateFeatures; // @synthesize aggregateFeatures=_aggregateFeatures;
@property(readonly, copy, nonatomic) NSArray *smartFeatures; // @synthesize smartFeatures=_smartFeatures;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008eec
- (unsigned long long)hash;	// IMP=0x0000000000008de0
- (id)description;	// IMP=0x0000000000008cba
- (id)initWithSmartFeatures:(id)arg1 aggregateFeatureswithProcessingWindow:(id)arg2 compoundFeatures:(id)arg3 transactionID:(id)arg4;	// IMP=0x0000000000008bc9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008901
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008858

@end

