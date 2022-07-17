//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>

@class DNDSIDSRecordID, DNDSIDSRecordMetadata, NSDate, NSMutableDictionary, NSString;

@interface DNDSIDSRecord : NSObject <DNDSBackingStoreRecord>
{
    NSMutableDictionary *_data;	// 8 = 0x8
    DNDSIDSRecordMetadata *_metadata;	// 16 = 0x10
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x0000000000045d92
- (void).cxx_destruct;	// IMP=0x0000000000045f3c
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000045e7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045d87
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000045c80
@property(readonly) unsigned long long hash;
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000045c2b
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000045c15
@property(readonly, copy, nonatomic) DNDSIDSRecordMetadata *metadata;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(readonly, copy, nonatomic) NSDate *lastModified;
@property(readonly, copy, nonatomic) DNDSIDSRecordID *recordID;
- (id)_initWithMetadata:(id)arg1 data:(id)arg2;	// IMP=0x0000000000045ae6
- (id)initWithMetadata:(id)arg1;	// IMP=0x0000000000045ad2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
