//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding>
{
    long long _isVoiceOverTouchEnabled;	// 8 = 0x8
    long long _isVibrationDisabled;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000044d0f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045030
@property(readonly, nonatomic) long long isVibrationDisabled; // @synthesize isVibrationDisabled=_isVibrationDisabled;
@property(readonly, nonatomic) long long isVoiceOverTouchEnabled; // @synthesize isVoiceOverTouchEnabled=_isVoiceOverTouchEnabled;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000044dfc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000044d17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044d04
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000044c5d
- (unsigned long long)hash;	// IMP=0x0000000000044bbe
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000449f6
- (id)description;	// IMP=0x00000000000449e2
- (id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2;	// IMP=0x000000000004499a
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000004509f

@end

