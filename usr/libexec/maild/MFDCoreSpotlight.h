//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MFDCoreSpotlight
{
}

+ (id)exportedInterface;	// IMP=0x0020000000065bc1
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000065c6a
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000065be1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
