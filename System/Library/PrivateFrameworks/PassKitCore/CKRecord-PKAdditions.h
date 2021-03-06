//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (PKAdditions)
+ (id)pk_recordWithSystemFieldsData:(id)arg1;	// IMP=0x00000000001c4e91
- (id)pk_systemFieldsData;	// IMP=0x00000000001c4f3c
- (_Bool)pk_isRemoteAsset;	// IMP=0x00000000001c4dfc
- (_Bool)pk_isPassCatalog;	// IMP=0x00000000001c4d67
- (_Bool)pk_isPass;	// IMP=0x00000000001c4cd2
- (id)_dictionaryFromStringValue:(id)arg1;	// IMP=0x00000000001c4b89
- (id)_arrayFromStringValue:(id)arg1;	// IMP=0x00000000001c4a40
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x00000000001c47f8
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x00000000001c46d2
- (id)pk_share;	// IMP=0x00000000001c4693
- (id)pk_participantWithLookupInfo:(id)arg1;	// IMP=0x00000000001c4449
- (id)pk_participantWithPhoneNumber:(id)arg1;	// IMP=0x00000000001c43bf
- (id)pk_participantWithEmailAddress:(id)arg1;	// IMP=0x00000000001c4335
- (id)pk_participantWithRecipientHandle:(id)arg1;	// IMP=0x00000000001c42b9
- (id)pk_copyRecordForNewRecordZone:(id)arg1;	// IMP=0x00000000001c3d48
- (unsigned long long)pk_hash;	// IMP=0x00000000001c37fa
- (id)description;	// IMP=0x00000000001c3797
- (id)pk_description;	// IMP=0x00000000001c3186
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000001c3043
- (id)pk_referenceForKey:(id)arg1;	// IMP=0x00000000001c2fdf
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;	// IMP=0x00000000001c2f92
- (unsigned long long)pk_uint64ForKey:(id)arg1;	// IMP=0x00000000001c2f45
- (int)pk_intForKey:(id)arg1;	// IMP=0x00000000001c2ef8
- (long long)pk_integerForKey:(id)arg1;	// IMP=0x00000000001c2eab
- (_Bool)pk_boolForKey:(id)arg1;	// IMP=0x00000000001c2e5e
- (id)pk_arrayForKey:(id)arg1;	// IMP=0x00000000001c2ced
- (id)pk_dictionaryForKey:(id)arg1;	// IMP=0x00000000001c2c8e
- (id)pk_urlForKey:(id)arg1;	// IMP=0x00000000001c2c2e
- (id)pk_decimalNumberForKey:(id)arg1;	// IMP=0x00000000001c2bce
- (id)pk_locationForKey:(id)arg1;	// IMP=0x00000000001c2b6a
- (id)pk_dataForKey:(id)arg1;	// IMP=0x00000000001c2b06
- (id)pk_dateForKey:(id)arg1;	// IMP=0x00000000001c2aa2
- (id)pk_numberForKey:(id)arg1;	// IMP=0x00000000001c2a3e
- (id)pk_stringForKey:(id)arg1;	// IMP=0x00000000001c29da
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000001c2872
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;	// IMP=0x00000000001c2825
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;	// IMP=0x00000000001c27d8
- (int)pk_encryptedIntForKey:(id)arg1;	// IMP=0x00000000001c278b
- (long long)pk_encryptedIntegerForKey:(id)arg1;	// IMP=0x00000000001c273e
- (_Bool)pk_encryptedBoolForKey:(id)arg1;	// IMP=0x00000000001c26f1
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c234d
- (id)pk_encryptedDictionaryForKey:(id)arg1;	// IMP=0x00000000001c22ee
- (id)pk_encryptedUrlForKey:(id)arg1;	// IMP=0x00000000001c228e
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;	// IMP=0x00000000001c222e
- (id)pk_encryptedLocationForKey:(id)arg1;	// IMP=0x00000000001c21ca
- (id)pk_encryptedDataForKey:(id)arg1;	// IMP=0x00000000001c2166
- (id)pk_encryptedDateForKey:(id)arg1;	// IMP=0x00000000001c2102
- (id)pk_encryptedNumberForKey:(id)arg1;	// IMP=0x00000000001c209e
- (id)pk_encryptedUUIDForKey:(id)arg1;	// IMP=0x00000000001c203a
- (id)pk_encryptedStringForKey:(id)arg1;	// IMP=0x00000000001c1fd6
@end

