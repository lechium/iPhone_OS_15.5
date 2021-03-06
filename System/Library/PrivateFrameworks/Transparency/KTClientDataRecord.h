//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding>
{
    _Bool _verified;	// 8 = 0x8
    NSData *_clientData;	// 16 = 0x10
    unsigned long long _applicationVersion;	// 24 = 0x18
    NSData *_clientDataHash;	// 32 = 0x20
    NSDate *_markedForDeletion;	// 40 = 0x28
    NSDate *_addedDate;	// 48 = 0x30
    NSDate *_expiry;	// 56 = 0x38
    NSDate *_escrowExpiry;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004785b
- (void).cxx_destruct;	// IMP=0x00000000000486f9
@property(retain) NSDate *escrowExpiry; // @synthesize escrowExpiry=_escrowExpiry;
@property(retain) NSDate *expiry; // @synthesize expiry=_expiry;
@property _Bool verified; // @synthesize verified=_verified;
@property(retain) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(retain) NSDate *markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(retain) NSData *clientDataHash; // @synthesize clientDataHash=_clientDataHash;
@property unsigned long long applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain) NSData *clientData; // @synthesize clientData=_clientData;
@property(readonly) NSData *clientDataVRFOutput;
@property(readonly) NSDate *deletionEscrowExpiry;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000481e1
- (id)initWithSingleDataRecord:(id)arg1;	// IMP=0x0000000000047f86
- (id)initWithMutation:(id)arg1;	// IMP=0x0000000000047cfb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047a5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047863
- (id)description;	// IMP=0x00000000000477a7
- (id)debugDescription;	// IMP=0x00000000000476f3

@end

