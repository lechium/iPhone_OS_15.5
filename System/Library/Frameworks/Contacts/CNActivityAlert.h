//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    _Bool _ignoreMute;	// 8 = 0x8
    NSString *_sound;	// 16 = 0x10
    NSString *_vibration;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046b4e
- (void).cxx_destruct;	// IMP=0x0000000000046db8
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property(copy, nonatomic) NSString *vibration; // @synthesize vibration=_vibration;
@property(copy, nonatomic) NSString *sound; // @synthesize sound=_sound;
- (_Bool)isValid:(id *)arg1;	// IMP=0x0000000000046b56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046ab4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000468ea
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004625d
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046066
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004602a
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(_Bool)arg3 userInfo:(id)arg4;	// IMP=0x0000000000045f2b
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(_Bool)arg3;	// IMP=0x0000000000045f16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

