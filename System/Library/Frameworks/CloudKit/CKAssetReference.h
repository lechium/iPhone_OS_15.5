//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSData, NSString;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordID *_recordID;	// 8 = 0x8
    long long _databaseScope;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
    NSData *_fileSignature;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4ce8
- (void).cxx_destruct;	// IMP=0x00000000000a50a6
@property(readonly, copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(readonly, copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)description;	// IMP=0x00000000000a5062
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000a4ed0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4d96
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4cf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4cdd
- (unsigned long long)hash;	// IMP=0x00000000000a4c0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4a33
- (id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4;	// IMP=0x00000000000a4779

@end

