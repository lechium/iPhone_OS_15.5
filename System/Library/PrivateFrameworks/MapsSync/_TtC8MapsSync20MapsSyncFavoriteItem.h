//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemStorage, MISSING_TYPE, NSNumber, NSSet, NSString;

@interface _TtC8MapsSync20MapsSyncFavoriteItem
{
    MISSING_TYPE *_contactHandles;	// 0 = 0x0
    MISSING_TYPE *_customName;	// 0 = 0x0
    MISSING_TYPE *_hidden;	// 0 = 0x0
    MISSING_TYPE *_mapItemStorage;	// 0 = 0x0
    MISSING_TYPE *_originatingAddressString;	// 0 = 0x0
    MISSING_TYPE *_type;	// 0 = 0x0
    MISSING_TYPE *_source;	// 0 = 0x0
    MISSING_TYPE *_shortcutIdentifier;	// 0 = 0x0
    MISSING_TYPE *_version;	// 0 = 0x0
    MISSING_TYPE *_latitude;	// 0 = 0x0
    MISSING_TYPE *_longitude;	// 0 = 0x0
    MISSING_TYPE *_muid;	// 0 = 0x0
}

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009f770
+ (id)fetchFavoriteItemForShortcutIdentifier:(id)arg1;	// IMP=0x00000000000a71d0
+ (id)fetchFavoriteItemForIdentifier:(id)arg1;	// IMP=0x00000000000a7140
+ (void)fetch:(long long)arg1:(long long)arg2:(id)arg3 sort:(long long)arg4 ascending:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000a7060
- (void).cxx_destruct;	// IMP=0x00000000000a0420
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a02b0
- (Class)managedObjectClass;	// IMP=0x00000000000a0120
- (Class)mutableObjectClass;	// IMP=0x00000000000a0100
- (void)setPropertiesWithObject:(id)arg1;	// IMP=0x00000000000a00a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009fba0
@property(nonatomic, readonly) NSNumber *muid;
@property(nonatomic, readonly) NSNumber *longitude;
@property(nonatomic, readonly) NSNumber *latitude;
@property(nonatomic, readonly) short version;
@property(nonatomic, readonly) NSString *shortcutIdentifier;
@property(nonatomic, readonly) short source;
@property(nonatomic, readonly) short type;
@property(nonatomic, readonly) NSString *originatingAddressString;
@property(nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property(nonatomic, readonly) _Bool hidden;
@property(nonatomic, readonly) NSString *customName;
@property(nonatomic, readonly) NSSet *contactHandles;
@property(nonatomic, readonly) NSString *description;
- (id)initWithObject:(id)arg1;	// IMP=0x000000000009ec70

@end

