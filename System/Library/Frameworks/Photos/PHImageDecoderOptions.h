//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHImageDecoderOptions : NSObject
{
    _Bool _shouldLoadGainMap;	// 8 = 0x8
    _Bool _optimizeForDrawing;	// 9 = 0x9
    _Bool _highPriority;	// 10 = 0xa
    _Bool _waitUntilComplete;	// 11 = 0xb
    _Bool _allowFallbackDecoder;	// 12 = 0xc
    _Bool _preferSWDecode;	// 13 = 0xd
    long long _contentMode;	// 16 = 0x10
    long long _resizeMode;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
    struct CGRect _normalizedCropRect;	// 48 = 0x30
}

@property(nonatomic) _Bool preferSWDecode; // @synthesize preferSWDecode=_preferSWDecode;
@property(nonatomic) _Bool allowFallbackDecoder; // @synthesize allowFallbackDecoder=_allowFallbackDecoder;
@property(nonatomic) _Bool waitUntilComplete; // @synthesize waitUntilComplete=_waitUntilComplete;
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic) _Bool optimizeForDrawing; // @synthesize optimizeForDrawing=_optimizeForDrawing;
@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) _Bool shouldLoadGainMap; // @synthesize shouldLoadGainMap=_shouldLoadGainMap;
@property(readonly, nonatomic) _Bool shouldCrop;
@property(readonly, nonatomic) long long maximumLongSideLength;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d6ca
- (id)init;	// IMP=0x000000000006d692

@end
