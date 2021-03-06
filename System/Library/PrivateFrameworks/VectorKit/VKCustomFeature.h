//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@class GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding>
{
    struct shared_ptr<md::LabelExternalFeature> _feature;	// 8 = 0x8
    id <VKCustomFeatureDataSource> _dataSource;	// 24 = 0x18
    _Bool _isGlobalFeature;	// 32 = 0x20
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOFeatureStyleAttributes *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _featureStyleAttributesPtr;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d3b6e
- (id).cxx_construct;	// IMP=0x00000000004d46aa
- (void).cxx_destruct;	// IMP=0x00000000004d4655
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d3faf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d3b76
- (void)setBuildingFaceAzimuth:(float)arg1;	// IMP=0x00000000004d3b1d
- (void)setBuildingHeight:(float)arg1;	// IMP=0x00000000004d3acc
- (void)setPlaceholderIconWithSize:(struct CGSize)arg1 anchorPoint:(struct CGPoint)arg2 isRound:(_Bool)arg3;	// IMP=0x00000000004d3823
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;	// IMP=0x00000000004d3751
- (short)venueFloorOrdinal;	// IMP=0x00000000004d3715
- (void)setVenueFloorOrdinal:(short)arg1;	// IMP=0x00000000004d36d1
- (unsigned long long)venueComponentID;	// IMP=0x00000000004d3696
- (void)setVenueComponentID:(unsigned long long)arg1;	// IMP=0x00000000004d3653
- (unsigned long long)venueLevelID;	// IMP=0x00000000004d3618
- (void)setVenueLevelID:(unsigned long long)arg1;	// IMP=0x00000000004d35d5
- (unsigned long long)venueBuildingID;	// IMP=0x00000000004d359a
- (void)setVenueBuildingID:(unsigned long long)arg1;	// IMP=0x00000000004d3557
- (unsigned long long)venueID;	// IMP=0x00000000004d351c
- (void)setVenueID:(unsigned long long)arg1;	// IMP=0x00000000004d34d9
- (unsigned long long)businessID;	// IMP=0x00000000004d34a1
- (void)setBusinessID:(unsigned long long)arg1;	// IMP=0x00000000004d3461
- (_Bool)isInjectedFeature;	// IMP=0x00000000004d3450
- (void *)feature;	// IMP=0x00000000004d3446
- (void)setText:(id)arg1 locale:(id)arg2;	// IMP=0x00000000004d3398
- (void)setTextDisplayMode:(unsigned char)arg1;	// IMP=0x00000000004d337f
- (void)setSortKey:(int)arg1;	// IMP=0x00000000004d3372
- (void)setMaxZoom:(float)arg1;	// IMP=0x00000000004d3363
- (void)setMinZoom:(float)arg1;	// IMP=0x00000000004d3354
- (id)styleAttributes;	// IMP=0x00000000004d334a
- (void)setStyleAttributes:(id)arg1;	// IMP=0x00000000004d326b
- (unsigned long long)featureID;	// IMP=0x00000000004d325d
- (void)setFeatureID:(unsigned long long)arg1;	// IMP=0x00000000004d324f
- (id)dataSource;	// IMP=0x00000000004d3245
- (void)setDataSource:(id)arg1;	// IMP=0x00000000004d323b
- (id)initLineWithCoordinates:(const CDStruct_071ac149 *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004d2f11
- (id)_initInternalFeatureWithCoordinate:(CDStruct_071ac149)arg1;	// IMP=0x00000000004d2efd
- (id)init;	// IMP=0x00000000004d2ec6
- (id)initWithCoordinate3D:(CDStruct_071ac149)arg1;	// IMP=0x00000000004d2eaf
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000004d2e66
- (id)_initWithCoordinate:(CDStruct_071ac149)arg1 isInjected:(_Bool)arg2;	// IMP=0x00000000004d2cc6
- (void *)lineFeature;	// IMP=0x00000000004d2cb2
- (void *)pointFeature;	// IMP=0x00000000004d2c9e
- (_Bool)isGlobalFeature;	// IMP=0x00000000004d2c95
- (_Bool)isLineFeature;	// IMP=0x00000000004d2c84
- (_Bool)isPointFeature;	// IMP=0x00000000004d2c73

@end

