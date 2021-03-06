//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand
{
    CAMCaptureGraphConfiguration *__knownGraphConfiguration;	// 8 = 0x8
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046e99
@property(retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // @synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration;
@property(readonly, nonatomic) CAMCaptureGraphConfiguration *_knownGraphConfiguration; // @synthesize _knownGraphConfiguration=__knownGraphConfiguration;
- (id)userInfo;	// IMP=0x0000000000045796
- (long long)_resolvedVideoConfigurationFromContext:(id)arg1;	// IMP=0x000000000019aece
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000030882
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019ae2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ad5b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019ac7b
- (id)initWithKnownGraphConfiguration:(id)arg1;	// IMP=0x000000000001e779

@end

