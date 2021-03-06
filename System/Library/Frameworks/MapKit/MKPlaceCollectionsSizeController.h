//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKCollectionsSizeProvider-Protocol.h>

@class NSString;

@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider>
{
    _Bool _isSingleCollection;	// 8 = 0x8
    _Bool _isMarzipan;	// 9 = 0x9
    double _defaultCollectionHeight;	// 16 = 0x10
    double _defaultCollectionWidth;	// 24 = 0x18
    CDStruct_7ddafc85 _collectionsConfiguration;	// 32 = 0x20
    struct UIEdgeInsets _sectionInset;	// 48 = 0x30
}

@property(nonatomic) _Bool isMarzipan; // @synthesize isMarzipan=_isMarzipan;
@property(nonatomic) _Bool isSingleCollection; // @synthesize isSingleCollection=_isSingleCollection;
@property(nonatomic) CDStruct_7ddafc85 collectionsConfiguration; // @synthesize collectionsConfiguration=_collectionsConfiguration;
@property(nonatomic) double defaultCollectionWidth; // @synthesize defaultCollectionWidth=_defaultCollectionWidth;
@property(nonatomic) double defaultCollectionHeight; // @synthesize defaultCollectionHeight=_defaultCollectionHeight;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
- (double)minimumInterItemSpacing;	// IMP=0x000000000023a76c
- (struct UIEdgeInsets)sectionInsets;	// IMP=0x000000000023a74d
- (struct CGSize)sizeForCollectionWithMaxCollectionsWidth:(double)arg1;	// IMP=0x000000000023a4d4
- (id)initWithCollectionsConfiguration:(CDStruct_7ddafc85)arg1 isSingleCollection:(_Bool)arg2 usingTraitCollections:(id)arg3 inContext:(long long)arg4;	// IMP=0x000000000023a25f
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 inContext:(long long)arg2;	// IMP=0x000000000023a230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

