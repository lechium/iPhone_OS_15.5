//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHASEEnvelope, PHASENumberMetaParameterDefinition;

@interface PHASEMappedMetaParameterDefinition
{
    PHASEEnvelope *_envelope;	// 32 = 0x20
    PHASENumberMetaParameterDefinition *_inputMetaParameterDefinition;	// 40 = 0x28
}

+ (id)new;	// IMP=0x000000000001f6e8
- (void).cxx_destruct;	// IMP=0x000000000001f9e3
@property(readonly, nonatomic) PHASENumberMetaParameterDefinition *inputMetaParameterDefinition; // @synthesize inputMetaParameterDefinition=_inputMetaParameterDefinition;
@property(readonly, nonatomic) PHASEEnvelope *envelope; // @synthesize envelope=_envelope;
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2;	// IMP=0x000000000001f8df
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2 uid:(id)arg3;	// IMP=0x000000000001f8cd
- (id)initWithInputMetaParameterDefinition:(id)arg1 envelope:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000001f7f8
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3;	// IMP=0x000000000001f7ba
- (id)initWithValue:(double)arg1 minimum:(double)arg2 maximum:(double)arg3 identifier:(id)arg4;	// IMP=0x000000000001f77c
- (id)initWithValue:(double)arg1;	// IMP=0x000000000001f73e
- (id)initWithValue:(double)arg1 identifier:(id)arg2;	// IMP=0x000000000001f700
- (id)init;	// IMP=0x000000000001f6aa

// Remaining properties
@property(readonly, nonatomic) double maximum; // @dynamic maximum;
@property(readonly, nonatomic) double minimum; // @dynamic minimum;

@end
