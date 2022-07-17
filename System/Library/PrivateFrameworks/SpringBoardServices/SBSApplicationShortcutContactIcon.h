//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SBSApplicationShortcutContactIcon
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSData *_imageData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000031749
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000315c7
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000313a9
- (unsigned long long)hash;	// IMP=0x00000000000312da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030fad
- (id)_initForSubclass;	// IMP=0x0000000000030f21
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3;	// IMP=0x0000000000030e31
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000000030d6a
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x0000000000030cf0

@end
