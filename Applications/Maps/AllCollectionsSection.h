//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionsFilterSizeController, MKPlaceCollectionsSizeController, NSString;

__attribute__((visibility("hidden")))
@interface AllCollectionsSection : NSObject
{
    MKPlaceCollectionsSizeController *_collectionsSizeController;	// 8 = 0x8
    CollectionsFilterSizeController *_filtersSizeController;	// 16 = 0x10
    long long _kind;	// 24 = 0x18
    struct {
        long long columnCount;
        NSString *sectionIdentifier;
        long long cellKind;
        long long viewKind;
    } _configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000633347
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) CollectionsFilterSizeController *filtersSizeController; // @synthesize filtersSizeController=_filtersSizeController;
@property(retain, nonatomic) MKPlaceCollectionsSizeController *collectionsSizeController; // @synthesize collectionsSizeController=_collectionsSizeController;
@property(nonatomic) CDStruct_f6ae2b44 configuration; // @synthesize configuration=_configuration;
- (id)layoutSectionForLoadingUsingTraitEnvironment:(id)arg1;	// IMP=0x00100000006330de
- (id)layoutSectionForCollectionsUsingTraitsEnvironment:(id)arg1 usingWidth:(double)arg2;	// IMP=0x0010000000632b5b
- (id)layoutForSectionUsingTraitsEnvironment:(id)arg1 usingWidth:(double)arg2;	// IMP=0x0010000000632ac7
- (void)setupConfiguration;	// IMP=0x0010000000632a5d
- (id)initWithSectionIndex:(long long)arg1 usingMaxWidth:(double)arg2 usingTraitEnvironment:(id)arg3;	// IMP=0x0010000000632953

@end

