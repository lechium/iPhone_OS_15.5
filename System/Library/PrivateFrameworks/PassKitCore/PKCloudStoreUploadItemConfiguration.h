//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet;
@protocol PKCloudStoreCoding;

@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding>
{
    unsigned long long _itemType;	// 8 = 0x8
    _Bool _detectConflicts;	// 16 = 0x10
    _Bool _returnRecords;	// 17 = 0x11
    NSObject<PKCloudStoreCoding> *_item;	// 24 = 0x18
    NSSet *_cloudStoreZones;	// 32 = 0x20
    NSDictionary *_recordSpecificKeys;	// 40 = 0x28
    unsigned long long _codingType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000259233
- (void).cxx_destruct;	// IMP=0x0000000000259630
@property(nonatomic) _Bool returnRecords; // @synthesize returnRecords=_returnRecords;
@property(nonatomic) _Bool detectConflicts; // @synthesize detectConflicts=_detectConflicts;
@property(nonatomic) unsigned long long codingType; // @synthesize codingType=_codingType;
@property(copy, nonatomic) NSDictionary *recordSpecificKeys; // @synthesize recordSpecificKeys=_recordSpecificKeys;
@property(retain, nonatomic) NSSet *cloudStoreZones; // @synthesize cloudStoreZones=_cloudStoreZones;
@property(retain, nonatomic) NSObject<PKCloudStoreCoding> *item; // @synthesize item=_item;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002594c8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025923b
- (id)description;	// IMP=0x00000000002590d4
- (unsigned long long)hash;	// IMP=0x0000000000259030
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x0000000000258fb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000258f49
- (id)initWithItem:(id)arg1 recordSpecificKeys:(id)arg2;	// IMP=0x0000000000258e9c
- (id)initWithItem:(id)arg1;	// IMP=0x0000000000258e88

@end

