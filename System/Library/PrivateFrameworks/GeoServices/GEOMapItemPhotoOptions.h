//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOMapItemPhotoOptions : NSObject
{
    _Bool _allowSmaller;	// 8 = 0x8
    long long _preferredCropStyle;	// 16 = 0x10
    long long _preferredFormat;	// 24 = 0x18
}

+ (id)defaultPhotoOptionsWithCropStyle:(long long)arg1;	// IMP=0x0000000000388e8a
+ (id)defaultPhotoOptionsWithAllowSmaller:(_Bool)arg1;	// IMP=0x0000000000388e51
@property(readonly, nonatomic) long long preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(readonly, nonatomic) long long preferredCropStyle; // @synthesize preferredCropStyle=_preferredCropStyle;
@property(readonly, nonatomic) _Bool allowSmaller; // @synthesize allowSmaller=_allowSmaller;
- (id)initWithAllowSmaller:(_Bool)arg1 cropStyle:(long long)arg2 format:(long long)arg3;	// IMP=0x0000000000388e00

@end

