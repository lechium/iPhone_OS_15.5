//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSSet, NSString, SVXUserFeedback;

__attribute__((visibility("hidden")))
@interface SVXUserFeedbackNode : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    SVXUserFeedback *_feedback;	// 24 = 0x18
    NSSet *_dependentNodes;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055f3f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000564b1
- (void).cxx_destruct;	// IMP=0x00000000000561ce
@property(readonly, copy, nonatomic) NSSet *dependentNodes; // @synthesize dependentNodes=_dependentNodes;
@property(readonly, copy, nonatomic) SVXUserFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000560d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055f47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055f34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055db3
- (unsigned long long)hash;	// IMP=0x0000000000055d16
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000055a93
- (id)description;	// IMP=0x0000000000055a7f
- (id)initWithIdentifier:(id)arg1 duration:(double)arg2 feedback:(id)arg3 dependentNodes:(id)arg4;	// IMP=0x000000000005598a
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056520

@end
