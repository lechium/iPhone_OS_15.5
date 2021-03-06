//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PurchaseDownloadsTransaction
{
}

- (long long)_nextBatchIdentifier;	// IMP=0x00400000001d0c9e
- (double)_maxOrderIdentifier;	// IMP=0x00100000001d0bff
- (_Bool)_insertPurchases:(id)arg1 forClient:(id)arg2 orderIdentifier:(double)arg3 orderSpacing:(double)arg4;	// IMP=0x00100000001d08c7
- (void)_getInsertOrderID:(double *)arg1 nextOrderID:(double *)arg2 afterPurchaseID:(long long)arg3;	// IMP=0x00100000001d0532
- (_Bool)_cancelDownloadForPurchaseIdentifier:(long long)arg1;	// IMP=0x00100000001d02ac
- (_Bool)_addPlaceholderDownloadForPurchase:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x00100000001cffe0
- (id)_addEntityForPurchase:(id)arg1 managerIdentifier:(long long)arg2 orderIdentifier:(double)arg3;	// IMP=0x00100000001cfda8
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 withClientIdentifier:(id)arg3;	// IMP=0x00100000001cde00
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2;	// IMP=0x00100000001cdde7
- (_Bool)replaceDownloadsInQuery:(id)arg1 withStoreDownloads:(id)arg2 accountID:(id)arg3;	// IMP=0x00100000001cc540
- (_Bool)resetPurchasedAutoUpdateForStoreItemID:(id)arg1;	// IMP=0x00100000001cc252
- (_Bool)movePurchasesWithIdentifiers:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2;	// IMP=0x00100000001cbf3d
- (_Bool)insertPurchases:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001cbe44
- (id)existingDownloadForPurchase:(id)arg1;	// IMP=0x00100000001cb86a
- (_Bool)deletePurchaseWithIdentifier:(long long)arg1;	// IMP=0x00100000001cb7d3
- (_Bool)cancelPurchaseWithIdentifier:(long long)arg1 applyingProperties:(id)arg2;	// IMP=0x00100000001cb665
- (_Bool)addPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001cb5e0

@end

