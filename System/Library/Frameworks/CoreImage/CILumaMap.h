//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILumaMap
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *_tableImage;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x00000000000ea086
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000ea0cb
- (const char *)lumaTable;	// IMP=0x00000000000ea0c3
- (void)setDefaults;	// IMP=0x00000000000ea0ae
- (id)_kernel;	// IMP=0x00000000000ea08e
- (void)dealloc;	// IMP=0x00000000000ea03f

@end

