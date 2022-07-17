//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostSerializable-Protocol.h>

@class NSArray, NSString;

@interface SignpostSupportCompositorInterval <SignpostSerializable>
{
    NSArray *_contributingPids;	// 32 = 0x20
}

+ (id)serializationTypeNumber;	// IMP=0x0000000000013b93
- (void).cxx_destruct;	// IMP=0x0000000000023983
@property(retain, nonatomic) NSArray *contributingPids; // @synthesize contributingPids=_contributingPids;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSignpostSupportCompositorInterval:(id)arg1;	// IMP=0x000000000002374b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000236db
- (id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 timebaseRatio:(double)arg3 contributingPids:(id)arg4;	// IMP=0x000000000002361d
- (id)humanReadableDictionaryRepresentation;	// IMP=0x0000000000013bbe
- (id)humanReadableType;	// IMP=0x0000000000013bb1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013ba3
- (id)serializeableDictionaryWithShouldRedact:(_Bool)arg1;	// IMP=0x0000000000013b9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
