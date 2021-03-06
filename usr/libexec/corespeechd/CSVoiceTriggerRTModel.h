//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject
{
    NSData *_modelData;	// 8 = 0x8
    NSString *_modelLocale;	// 16 = 0x10
    NSString *_modelHash;	// 24 = 0x18
    NSData *_digest;	// 32 = 0x20
    NSData *_signature;	// 40 = 0x28
    MISSING_TYPE *_certificate;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000037ca1
- (void).cxx_destruct;	// IMP=0x002000000003862c
@property(readonly, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(readonly, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(readonly, nonatomic) NSString *modelLocale; // @synthesize modelLocale=_modelLocale;
@property(readonly, nonatomic) NSData *modelData; // @synthesize modelData=_modelData;
- (id)description;	// IMP=0x0010000000038482
- (id)builtInRTModelDictionary;	// IMP=0x0010000000038348
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000038265
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003817b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000037f21
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3;	// IMP=0x0010000000037e6a
- (id)initWithHash:(id)arg1 locale:(id)arg2;	// IMP=0x0010000000037dd1
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6;	// IMP=0x0010000000037ca9

@end

