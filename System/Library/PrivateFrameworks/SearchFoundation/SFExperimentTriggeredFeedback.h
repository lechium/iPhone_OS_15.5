//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFCounterfactualInfo;

@interface SFExperimentTriggeredFeedback
{
    SFCounterfactualInfo *_counterfactual;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c7591
- (void).cxx_destruct;	// IMP=0x00000000001c757e
@property(retain, nonatomic) SFCounterfactualInfo *counterfactual; // @synthesize counterfactual=_counterfactual;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c744f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c7339
- (id)initWithCfDiffered:(_Bool)arg1 cfUsed:(_Bool)arg2 cfError:(unsigned long long)arg3;	// IMP=0x00000000001c7271
- (id)init;	// IMP=0x00000000001c7242

@end

