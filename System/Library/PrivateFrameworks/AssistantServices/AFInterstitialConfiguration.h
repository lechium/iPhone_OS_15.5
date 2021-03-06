//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isVoiceTrigger;	// 8 = 0x8
    _Bool _isDucking;	// 9 = 0x9
    _Bool _isTwoShot;	// 10 = 0xa
    long long _style;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    long long _gender;	// 32 = 0x20
    NSString *_recordRoute;	// 40 = 0x28
    unsigned long long _speechEndHostTime;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000152cba
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000015354e
- (void).cxx_destruct;	// IMP=0x000000000015317c
@property(readonly, nonatomic) unsigned long long speechEndHostTime; // @synthesize speechEndHostTime=_speechEndHostTime;
@property(readonly, nonatomic) _Bool isTwoShot; // @synthesize isTwoShot=_isTwoShot;
@property(readonly, nonatomic) _Bool isDucking; // @synthesize isDucking=_isDucking;
@property(readonly, nonatomic) _Bool isVoiceTrigger; // @synthesize isVoiceTrigger=_isVoiceTrigger;
@property(readonly, copy, nonatomic) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000152f4f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000152cc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000152caf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000152ae8
- (unsigned long long)hash;	// IMP=0x000000000015293f
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000015255c
- (id)description;	// IMP=0x0000000000152548
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(_Bool)arg5 isDucking:(_Bool)arg6 isTwoShot:(_Bool)arg7 speechEndHostTime:(unsigned long long)arg8;	// IMP=0x0000000000152462
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001535bd

@end

