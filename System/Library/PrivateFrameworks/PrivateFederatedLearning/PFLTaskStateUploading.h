//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStateUploading : NSObject <PFLTaskState>
{
    NSData *_privatizedDiff;	// 8 = 0x8
    long long _diffCount;	// 16 = 0x10
    NSDictionary *_metrics;	// 24 = 0x18
    NSNumber *_numValidationSamples;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018871
- (void).cxx_destruct;	// IMP=0x0000000000018fa9
@property(readonly, nonatomic) NSNumber *numValidationSamples; // @synthesize numValidationSamples=_numValidationSamples;
@property(readonly, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) long long diffCount; // @synthesize diffCount=_diffCount;
@property(readonly, nonatomic) NSData *privatizedDiff; // @synthesize privatizedDiff=_privatizedDiff;
- (void)suspend;	// IMP=0x0000000000018f7b
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018bfc
- (id)initWithPrivatizedDiff:(id)arg1 diffCount:(long long)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4;	// IMP=0x0000000000018b39
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018980
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018879
- (unsigned long long)tag;	// IMP=0x0000000000018866

@end

