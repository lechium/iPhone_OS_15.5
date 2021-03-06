//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLDeviceConfiguration : NSObject
{
    _Bool _isPad;	// 8 = 0x8
    _Bool _isTV;	// 9 = 0x9
    _Bool _isWatch;	// 10 = 0xa
    _Bool _isMac;	// 11 = 0xb
    _Bool _isRidingCrudSnow;	// 12 = 0xc
    _Bool _isRidingPowderSnow;	// 13 = 0xd
    _Bool _supportsASTC;	// 14 = 0xe
    _Bool _isMigrationService;	// 15 = 0xf
    _Bool _isRetina;	// 16 = 0x10
    double _screenScale;	// 24 = 0x18
    struct CGSize _logicalScreenSize;	// 32 = 0x20
}

+ (id)defaultDeviceConfiguration;	// IMP=0x000000000003d5c4
@property(readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) _Bool isRetina; // @synthesize isRetina=_isRetina;
@property(readonly, nonatomic) struct CGSize logicalScreenSize; // @synthesize logicalScreenSize=_logicalScreenSize;
@property(nonatomic) _Bool isMigrationService; // @synthesize isMigrationService=_isMigrationService;
@property(nonatomic) _Bool supportsASTC; // @synthesize supportsASTC=_supportsASTC;
@property(readonly, nonatomic) _Bool isRidingPowderSnow; // @synthesize isRidingPowderSnow=_isRidingPowderSnow;
@property(readonly, nonatomic) _Bool isRidingCrudSnow; // @synthesize isRidingCrudSnow=_isRidingCrudSnow;
@property(nonatomic) _Bool isMac; // @synthesize isMac=_isMac;
@property(nonatomic) _Bool isWatch; // @synthesize isWatch=_isWatch;
@property(nonatomic) _Bool isTV; // @synthesize isTV=_isTV;
@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(readonly, nonatomic) unsigned long long logicalScreenPixelSize;
@property(readonly, nonatomic) _Bool shouldUseNanoThumbnailFormats; // @dynamic shouldUseNanoThumbnailFormats;
- (id)description;	// IMP=0x000000000003d3ba
- (id)initWithLogicalScreenSize:(struct CGSize)arg1 screenScale:(double)arg2 deviceClass:(void *)arg3 isRidingCrudSnow:(_Bool)arg4 isRidingPowderSnow:(_Bool)arg5 supportsASTC:(_Bool)arg6 isMigrationService:(_Bool)arg7;	// IMP=0x000000000003d277

@end

