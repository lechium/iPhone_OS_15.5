//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFMyriadGoodnessScoreOverrideState, AFMyriadPerceptualAudioHash;

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;	// 16 = 0x10
    AFMyriadGoodnessScoreOverrideState *_overrideState;	// 24 = 0x18
    long long _activationSource;	// 32 = 0x20
    unsigned long long _activationExpirationTime;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037fcf
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000385b4
- (void).cxx_destruct;	// IMP=0x00000000000382d2
@property(readonly, nonatomic) unsigned long long activationExpirationTime; // @synthesize activationExpirationTime=_activationExpirationTime;
@property(readonly, nonatomic) long long activationSource; // @synthesize activationSource=_activationSource;
@property(readonly, copy, nonatomic) AFMyriadGoodnessScoreOverrideState *overrideState; // @synthesize overrideState=_overrideState;
@property(readonly, copy, nonatomic) AFMyriadPerceptualAudioHash *perceptualAudioHash; // @synthesize perceptualAudioHash=_perceptualAudioHash;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038177
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037fd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037fc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037e65
- (unsigned long long)hash;	// IMP=0x0000000000037d68
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000037a7a
- (id)description;	// IMP=0x0000000000037a66
- (id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2 overrideState:(id)arg3 activationSource:(long long)arg4 activationExpirationTime:(unsigned long long)arg5;	// IMP=0x0000000000037992
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038623

@end

