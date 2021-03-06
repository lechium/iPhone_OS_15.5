//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKCompactCollectionsSizeProvider-Protocol.h>

@class NSString;

@interface MKPlaceCompactCollectionSizeController : NSObject <MKCompactCollectionsSizeProvider>
{
    long long _context;	// 8 = 0x8
    double _defaultCompactCollectionHeight;	// 16 = 0x10
    double _defaultCompactCollectionWidth;	// 24 = 0x18
    CDStruct_7ddafc85 _configuration;	// 32 = 0x20
    struct UIEdgeInsets _sectionInset;	// 48 = 0x30
}

@property(nonatomic) double defaultCompactCollectionWidth; // @synthesize defaultCompactCollectionWidth=_defaultCompactCollectionWidth;
@property(nonatomic) double defaultCompactCollectionHeight; // @synthesize defaultCompactCollectionHeight=_defaultCompactCollectionHeight;
@property(nonatomic) CDStruct_7ddafc85 configuration; // @synthesize configuration=_configuration;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
- (double)minimumInterItemSpacing;	// IMP=0x00000000001eb5c6
- (struct UIEdgeInsets)sectionInsets;	// IMP=0x00000000001eb5a7
- (struct CGSize)sizeForCollectionWithMaxCollectionsWidth:(double)arg1;	// IMP=0x00000000001eb477
- (id)initWithCollectionsConfiguration:(CDStruct_7ddafc85)arg1 usingTraitCollections:(id)arg2 inContext:(long long)arg3;	// IMP=0x00000000001eb2e9
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 inContext:(long long)arg2;	// IMP=0x00000000001eb2c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

