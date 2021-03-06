//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKReference, NSString;

@interface CKEncryptedReference <CKRecordValue, NSCopying, NSSecureCoding>
{
}

- (id)_recordIDFromPRecordIdentifier:(id)arg1;	// IMP=0x000000000010c13b
- (id)_referenceFromPReference:(id)arg1;	// IMP=0x000000000010bfa9
- (id)_pReferenceFromReference:(id)arg1;	// IMP=0x000000000010bd5e
- (id)value;	// IMP=0x000000000010bd4c
@property(readonly, nonatomic) CKReference *reference;
- (id)initWithReference:(id)arg1;	// IMP=0x000000000010bad6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

