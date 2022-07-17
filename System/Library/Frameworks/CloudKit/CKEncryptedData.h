//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKEncryptable-Protocol.h>
#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKEncryptable, CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSData *_encryptedData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010b090
- (void).cxx_destruct;	// IMP=0x000000000010b2b5
@property(copy, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b1a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b098
@property(readonly, nonatomic) _Bool needsDecryption;
@property(readonly, nonatomic) _Bool needsEncryption;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010aeff
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;	// IMP=0x000000000010ae2b
@property(readonly) unsigned long long hash;
- (id)value;	// IMP=0x000000000010add5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010ad27
- (id)initWithValue:(id)arg1;	// IMP=0x000000000010a839
- (id)initWithEncryptedData:(id)arg1;	// IMP=0x000000000010a7c6
- (id)initWithData:(id)arg1;	// IMP=0x000000000010a691
- (id)init;	// IMP=0x000000000010a61d
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000412b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
