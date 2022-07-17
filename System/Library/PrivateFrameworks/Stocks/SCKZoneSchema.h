//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSArray, NSString;

@interface SCKZoneSchema : NSObject
{
    _Bool _atomic;	// 8 = 0x8
    CKRecordZoneID *_zoneID;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    NSArray *_recordSchemas;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010618
@property(copy, nonatomic) NSArray *recordSchemas; // @synthesize recordSchemas=_recordSchemas;
@property(readonly, nonatomic, getter=isAtomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)validateRecords:(id)arg1;	// IMP=0x0000000000010516
- (_Bool)isValidRecord:(id)arg1;	// IMP=0x000000000001025b
- (id)schemaForRecordType:(id)arg1;	// IMP=0x0000000000010088
@property(readonly, copy, nonatomic) NSArray *allRecordFieldNames;
- (id)initWithName:(id)arg1 atomic:(_Bool)arg2 recordSchemas:(id)arg3;	// IMP=0x000000000000fdfe

@end
