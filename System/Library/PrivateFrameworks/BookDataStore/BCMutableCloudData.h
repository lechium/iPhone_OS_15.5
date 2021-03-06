//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookDataStore/BCCloudData-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCloudData : NSObject <BCCloudData, NSSecureCoding>
{
    _Bool _deletedFlag;	// 8 = 0x8
    long long _editGeneration;	// 16 = 0x10
    long long _syncGeneration;	// 24 = 0x18
    NSDate *_modificationDate;	// 32 = 0x20
    CKRecord *_systemFields;	// 40 = 0x28
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 48 = 0x30
    NSString *_localRecordID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cde3
- (void).cxx_destruct;	// IMP=0x000000000001d0bb
@property(copy, nonatomic) NSString *localRecordID; // @synthesize localRecordID=_localRecordID;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
@property(copy, nonatomic) CKRecord *systemFields; // @synthesize systemFields=_systemFields;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long syncGeneration; // @synthesize syncGeneration=_syncGeneration;
@property(nonatomic) long long editGeneration; // @synthesize editGeneration=_editGeneration;
@property(nonatomic) _Bool deletedFlag; // @synthesize deletedFlag=_deletedFlag;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001cf06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001cdeb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ccbf
- (id)configuredRecordFromAttributes;	// IMP=0x000000000001cc2b
- (void)incrementEditGeneration;	// IMP=0x000000000001cbf9
- (id)zoneName;	// IMP=0x000000000001c94e
- (id)identifier;	// IMP=0x000000000001c90b
- (id)recordType;	// IMP=0x000000000001c8c3
@property(readonly, copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000001c778
- (id)initWithCloudData:(id)arg1;	// IMP=0x000000000001c613
- (id)init;	// IMP=0x000000000001c593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

