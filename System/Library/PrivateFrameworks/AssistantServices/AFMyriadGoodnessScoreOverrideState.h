//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFMyriadGoodnessScoreOverrideState : NSObject <NSCopying, NSSecureCoding>
{
    long long _overrideOption;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cde67
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce1bc
- (void).cxx_destruct;	// IMP=0x00000000000cdff9
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long overrideOption; // @synthesize overrideOption=_overrideOption;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cdf45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cde6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cde5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cdd8d
- (unsigned long long)hash;	// IMP=0x00000000000cdd1a
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000cdb5a
- (id)description;	// IMP=0x00000000000cdb46
- (id)initWithOverrideOption:(long long)arg1 reason:(id)arg2;	// IMP=0x00000000000cdac8
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce22b

@end

