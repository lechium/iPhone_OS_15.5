//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation
{
}

- (_Bool)_savePCSDataToCache;	// IMP=0x000000000028e503
- (_Bool)_decryptPCS;	// IMP=0x000000000028e4fb
- (_Bool)_fetchPCSDataFromServer;	// IMP=0x000000000028e236
- (_Bool)_fetchPCSDataFromDatabase;	// IMP=0x000000000028d956
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;	// IMP=0x000000000028d5f1
- (_Bool)hasAllPCSData;	// IMP=0x000000000028d5a9
- (id)itemTypeName;	// IMP=0x000000000028d59c
@property(retain, nonatomic) CKDSharePCSData *sharePCSData;
@property(readonly, nonatomic) CKRecordID *shareID;

@end

