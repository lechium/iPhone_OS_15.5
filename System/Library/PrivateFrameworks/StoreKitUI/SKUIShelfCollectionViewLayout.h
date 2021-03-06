//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

#import <StoreKitUI/SKUIShelfCollectionViewLayout-Protocol.h>

@class NSString, SKUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout>
{
    SKUIShelfLayoutData *_layoutData;	// 8 = 0x8
}

+ (Class)layoutAttributesClass;	// IMP=0x000000000011ca4a
+ (_Bool)collectionViewCanClipToBounds;	// IMP=0x000000000011ca42
+ (double)snapToBoundariesDecelerationRate;	// IMP=0x000000000011ca34
- (void).cxx_destruct;	// IMP=0x000000000011d7e6
@property(retain, nonatomic) SKUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;	// IMP=0x000000000011d7b9
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000011d4c5
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000011d172
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000011ca78
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000011ca5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

