//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NFC
{
}

+ (id)_propertySettersForNFC;	// IMP=0x0040000000290f5b
+ (id)anyInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x0010000000290d90
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000290cf7
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0010000000290cc3
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0010000000290c50
+ (void)insertNFCPayload:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000290bc5
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002909af
+ (id)databaseTable;	// IMP=0x00100000002909a2
- (id)nfcPayload;	// IMP=0x0040000000290e1c
- (id)initWithNFCPayload:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002909de

@end
