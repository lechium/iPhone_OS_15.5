//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableDictionary *_cloudRecordByDatabaseZone;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001db165
- (void).cxx_destruct;	// IMP=0x00000000001dbf4f
@property(retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone; // @synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone;
- (id)countByZoneID;	// IMP=0x00000000001dbdec
- (long long)count;	// IMP=0x00000000001dbd1d
- (id)allRecordIDs;	// IMP=0x00000000001dbc1a
- (id)allRecordNames;	// IMP=0x00000000001dbb17
- (id)allRecordsWithRecordType:(id)arg1;	// IMP=0x00000000001db9e4
- (id)allObjects;	// IMP=0x00000000001db8e1
- (id)allItems;	// IMP=0x00000000001db7de
- (void)addCloudRecord:(id)arg1;	// IMP=0x00000000001db68a
- (void)applyCloudRecordDatabase:(id)arg1;	// IMP=0x00000000001db558
- (id)descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;	// IMP=0x00000000001db32c
- (id)description;	// IMP=0x00000000001db316
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001db2a8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001db16d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001db0e0

@end

