//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICQOffer;

@interface PXCloudQuotaOfferProvider
{
    _Bool _offerHasAssetCounts;	// 8 = 0x8
    ICQOffer *_offer;	// 16 = 0x10
}

+ (id)currentOfferProvider;	// IMP=0x000000000032d8f8
- (void).cxx_destruct;	// IMP=0x000000000032cf14
@property(readonly, nonatomic) _Bool offerHasAssetCounts; // @synthesize offerHasAssetCounts=_offerHasAssetCounts;
@property(readonly, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;
- (void)_currentOfferChangedNotification:(id)arg1;	// IMP=0x000000000032cd9a
- (void)_queue_initialSetup;	// IMP=0x000000000032cce0
- (void)_queue_getCurrentOffer;	// IMP=0x000000000032cb60
- (void)_updateCurrentOffer:(id)arg1;	// IMP=0x000000000032caa3
- (void)setOfferHasAssetCounts:(_Bool)arg1;	// IMP=0x000000000032c9a8
- (void)setOffer:(id)arg1;	// IMP=0x000000000032c791
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000032c762
- (void)dealloc;	// IMP=0x000000000032c67d
- (id)init;	// IMP=0x000000000032c524

@end

