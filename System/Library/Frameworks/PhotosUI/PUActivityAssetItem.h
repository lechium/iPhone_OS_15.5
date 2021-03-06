//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying>
{
    _Bool _excludeLiveness;	// 8 = 0x8
    _Bool _excludeLocation;	// 9 = 0x9
    _Bool _excludeCaption;	// 10 = 0xa
    _Bool _excludeAccessibilityDescription;	// 11 = 0xb
    PHAsset *_asset;	// 16 = 0x10
}

+ (id)itemsForAssets:(id)arg1;	// IMP=0x0000000000020a60
- (void).cxx_destruct;	// IMP=0x0000000000020a50
@property(nonatomic) _Bool excludeAccessibilityDescription; // @synthesize excludeAccessibilityDescription=_excludeAccessibilityDescription;
@property(nonatomic) _Bool excludeCaption; // @synthesize excludeCaption=_excludeCaption;
@property(nonatomic) _Bool excludeLocation; // @synthesize excludeLocation=_excludeLocation;
@property(nonatomic) _Bool excludeLiveness; // @synthesize excludeLiveness=_excludeLiveness;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (unsigned long long)hash;	// IMP=0x00000000000209ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020952
- (id)description;	// IMP=0x000000000002083a
- (_Bool)isEqualToActivityAssetItem:(id)arg1;	// IMP=0x00000000000206dd
- (id)localIdentifier;	// IMP=0x0000000000020552
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000204f2
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000002040c
- (id)init;	// IMP=0x0000000000020399

@end

