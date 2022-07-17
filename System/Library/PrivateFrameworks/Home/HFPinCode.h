//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HMAccessCodeUserInformation, NSMutableSet, NSSet, NSString;

@interface HFPinCode : NSObject <NSCopying>
{
    NSMutableSet *_accessoryAccessCodes;	// 8 = 0x8
    NSMutableSet *_accessories;	// 16 = 0x10
    HMAccessCodeUserInformation *_userLabel;	// 24 = 0x18
    NSString *_pinCodeValue;	// 32 = 0x20
}

+ (id)na_identity;	// IMP=0x00000000002675eb
- (void).cxx_destruct;	// IMP=0x0000000000268658
@property(readonly, copy, nonatomic) NSString *pinCodeValue; // @synthesize pinCodeValue=_pinCodeValue;
@property(retain, nonatomic) HMAccessCodeUserInformation *userLabel; // @synthesize userLabel=_userLabel;
@property(readonly, nonatomic) NSSet *accessories;
- (void)removeAccessories:(id)arg1;	// IMP=0x00000000002680fe
- (void)addAccessories:(id)arg1;	// IMP=0x0000000000267ea9
@property(readonly, nonatomic) _Bool hasRestrictions;
- (void)removeAccessoryAccessCode:(id)arg1;	// IMP=0x0000000000267d5e
- (void)addAccessoryAccessCode:(id)arg1;	// IMP=0x0000000000267cd3
@property(readonly, nonatomic) NSSet *accessoryAccessCodes;
- (id)description;	// IMP=0x0000000000267a8f
- (unsigned long long)hash;	// IMP=0x0000000000267a34
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002679be
- (id)copyWithNewPinCodeValue:(id)arg1;	// IMP=0x000000000026751b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026744e
- (id)initWithLabel:(id)arg1 accessCodeValue:(id)arg2 accessoryAccessCodes:(id)arg3;	// IMP=0x000000000026735a
- (id)initWithAccessoryAccessCode:(id)arg1;	// IMP=0x0000000000267286
- (id)initWithHomeAccessCode:(id)arg1;	// IMP=0x0000000000267191

@end
