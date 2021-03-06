//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>

@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying>
{
    UIImage *_rawImage;	// 8 = 0x8
    long long _scaleMode;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    double _sdkDeviceScale;	// 32 = 0x20
    long long _maskMode;	// 40 = 0x28
    double _cornerRadius;	// 48 = 0x30
    struct CGSize _maxSDKSize;	// 56 = 0x38
    struct CGSize _maxDeviceSize;	// 72 = 0x48
}

+ (id)keyWithRawImage:(id)arg1 maxSDKSize:(struct CGSize)arg2 maxDeviceSize:(struct CGSize)arg3 cornerRadius:(double)arg4;	// IMP=0x000000000004e1d9
+ (id)keyWithRawImage:(id)arg1 maxSDKSize:(struct CGSize)arg2 maxDeviceSize:(struct CGSize)arg3 maskMode:(long long)arg4;	// IMP=0x000000000004e146
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x000000000004e0c5
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 sdkDeviceScale:(double)arg3 maskMode:(long long)arg4;	// IMP=0x000000000004e050
- (void).cxx_destruct;	// IMP=0x000000000004e7dd
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) long long maskMode; // @synthesize maskMode=_maskMode;
@property(readonly, nonatomic) double sdkDeviceScale; // @synthesize sdkDeviceScale=_sdkDeviceScale;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize maxDeviceSize; // @synthesize maxDeviceSize=_maxDeviceSize;
@property(readonly, nonatomic) struct CGSize maxSDKSize; // @synthesize maxSDKSize=_maxSDKSize;
@property(readonly, nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e773
- (unsigned long long)hash;	// IMP=0x000000000004e452
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e278

@end

