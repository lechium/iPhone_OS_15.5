//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSMutableCopying-Protocol.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    _Bool _isSecure;	// 24 = 0x18
    _Bool _hasSetMaxLength;	// 25 = 0x19
    unsigned long long _maxLength;	// 32 = 0x20
    long long _keyboardType;	// 40 = 0x28
    long long _autocorrectionType;	// 48 = 0x30
    long long _autocapitalizationType;	// 56 = 0x38
}

+ (id)_definitionsFromSerializedDefinitions:(id)arg1;	// IMP=0x0000000000014d74
- (void).cxx_destruct;	// IMP=0x00000000000153bb
@property(readonly, nonatomic) _Bool _hasSetMaxLength; // @synthesize _hasSetMaxLength;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_isSecure;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015339
- (void)_copyPropertiesToDefinition:(id)arg1;	// IMP=0x00000000000152c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000152b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015182
- (unsigned long long)hash;	// IMP=0x0000000000015103
- (id)build;	// IMP=0x0000000000014f2f
- (id)_initWithDictionary:(id)arg1;	// IMP=0x0000000000014a57
- (id)init;	// IMP=0x00000000000149d6

@end

