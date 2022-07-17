//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionHandler, NSArray, NSAttributedString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface PlaceContextViewModel : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIColor *_imageTintColor;	// 24 = 0x18
    double _imageContinuousCornerRadius;	// 32 = 0x20
    NSAttributedString *_attributedString;	// 40 = 0x28
    NSAttributedString *_highlightedAttributedString;	// 48 = 0x30
    NSArray *_placeCollections;	// 56 = 0x38
    CollectionHandler *_userGeneratedCollection;	// 64 = 0x40
    NSArray *_stringHighlightRanges;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000005718f0
@property(copy, nonatomic) NSArray *stringHighlightRanges; // @synthesize stringHighlightRanges=_stringHighlightRanges;
@property(copy, nonatomic) CollectionHandler *userGeneratedCollection; // @synthesize userGeneratedCollection=_userGeneratedCollection;
@property(copy, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(copy, nonatomic) NSAttributedString *highlightedAttributedString; // @synthesize highlightedAttributedString=_highlightedAttributedString;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) double imageContinuousCornerRadius; // @synthesize imageContinuousCornerRadius=_imageContinuousCornerRadius;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)userGeneratedCollectionContainingMapItem:(id)arg1;	// IMP=0x0010000000571613
- (_Bool)isRTL;	// IMP=0x00100000005715c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005714c7
- (unsigned long long)hash;	// IMP=0x0010000000571488
@property(readonly, nonatomic) _Bool isTappable;
- (id)initWithMapItem:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x0010000000570f55
- (id)initWithUGCRatingsWithMapItem:(id)arg1;	// IMP=0x0010000000570e46
- (id)initWithUGCUserSubmittedRecommendationWithReviewedPlace:(id)arg1;	// IMP=0x0010000000570d8a
- (id)initWithChargerNumberString:(id)arg1;	// IMP=0x0010000000570c34
- (id)initWithUserGeneratedCollection:(id)arg1;	// IMP=0x0010000000570999
- (id)initWithRatingsWithMapItem:(id)arg1;	// IMP=0x001000000057088a
- (id)initWithCurrentLocation;	// IMP=0x0010000000570702
- (id)initWithPlaceCollections:(id)arg1;	// IMP=0x0010000000570440
- (id)initWithPlaceCollection:(id)arg1;	// IMP=0x00100000005700e3
- (id)attributedStringWithString:(id)arg1 stringHighlightRanges:(id)arg2;	// IMP=0x001000000056fe6c
- (id)attributedStringHighlightedWithString:(id)arg1 stringHighlightRanges:(id)arg2;	// IMP=0x001000000056fbf5
- (id)initWithType:(unsigned long long)arg1 image:(id)arg2 attributedString:(id)arg3;	// IMP=0x001000000056fb50
- (id)initWithType:(unsigned long long)arg1 image:(id)arg2 string:(id)arg3 stringHighlightRanges:(id)arg4;	// IMP=0x001000000056fa43

@end
