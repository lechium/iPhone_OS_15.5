//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class DNDSIDSRecordID, NSDate, NSString;

@interface DNDSIDSRecordMetadata : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    DNDSIDSRecordID *_recordID;	// 8 = 0x8
    NSDate *_lastModified;	// 16 = 0x10
    _Bool _deleted;	// 24 = 0x18
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x00000000000961bf
- (void).cxx_destruct;	// IMP=0x000000000009646e
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) DNDSIDSRecordID *recordID; // @synthesize recordID=_recordID;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x000000000009631d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096191
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096186
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000095e42
@property(readonly) unsigned long long hash;
- (id)_initWithRecordMetadata:(id)arg1;	// IMP=0x0000000000095d4b
- (id)initWithRecordID:(id)arg1 lastModified:(id)arg2 deleted:(_Bool)arg3;	// IMP=0x0000000000095c8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
