//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFWallpaperEditCollection, NAFuture;
@protocol HFHomeKitObject><HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject
{
    _Bool _hkObjectNewlyCreated;	// 8 = 0x8
    id <HFHomeKitObject><HMApplicationData> _hkObject;	// 16 = 0x10
    long long _namedWallpaperCollectionType;	// 24 = 0x18
    NAFuture *_initialEditCollectionFuture;	// 32 = 0x20
    HFWallpaperEditCollection *_updatedEditCollection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014ebcf
@property(retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection; // @synthesize updatedEditCollection=_updatedEditCollection;
@property(retain, nonatomic) NAFuture *initialEditCollectionFuture; // @synthesize initialEditCollectionFuture=_initialEditCollectionFuture;
@property(nonatomic) _Bool hkObjectNewlyCreated; // @synthesize hkObjectNewlyCreated=_hkObjectNewlyCreated;
@property(nonatomic) long long namedWallpaperCollectionType; // @synthesize namedWallpaperCollectionType=_namedWallpaperCollectionType;
@property(retain, nonatomic) id <HFHomeKitObject><HMApplicationData> hkObject; // @synthesize hkObject=_hkObject;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;	// IMP=0x000000000014e9bb
- (id)commitWallpaper;	// IMP=0x000000000014e0b9
- (void)setWallpaper:(id)arg1 image:(id)arg2;	// IMP=0x000000000014e06d
- (id)wallpaperEditCollectionFuture;	// IMP=0x000000000014dfba
- (id)description;	// IMP=0x000000000014de09
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;	// IMP=0x000000000014dd93

@end
