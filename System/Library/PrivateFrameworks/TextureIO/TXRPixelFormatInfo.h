//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TXRPixelFormatInfo : NSObject
{
}

+ (unsigned char)componentsPerPixel:(unsigned long long)arg1;	// IMP=0x00000000000c6e9c
+ (struct TXRImageMemoryLayout)packedMemoryLayoutForFormat:(unsigned long long)arg1 dimensions: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000c6bd4
+ (_Bool)isGammaEncoded:(unsigned long long)arg1;	// IMP=0x00000000000c6b4d
+ (_Bool)hasAlpha:(unsigned long long)arg1;	// IMP=0x00000000000c6adc
+ (_Bool)isCompressed:(unsigned long long)arg1;	// IMP=0x00000000000c6a7c
+ (_Bool)isASTC:(unsigned long long)arg1;	// IMP=0x00000000000c6a55
+ (_Bool)isETC2:(unsigned long long)arg1;	// IMP=0x00000000000c6a34
+ (_Bool)isPVRTC:(unsigned long long)arg1;	// IMP=0x00000000000c6a20
+ (_Bool)isBC6to7:(unsigned long long)arg1;	// IMP=0x00000000000c6a0c
+ (_Bool)isBC1to5:(unsigned long long)arg1;	// IMP=0x00000000000c69eb
+ (_Bool)isSRGB:(unsigned long long)arg1;	// IMP=0x00000000000c6979
+ (_Bool)isFloat:(unsigned long long)arg1;	// IMP=0x00000000000c691f
+ (_Bool)isInteger:(unsigned long long)arg1;	// IMP=0x00000000000c68e4
+ (unsigned char)pixelBytes:(unsigned long long)arg1;	// IMP=0x00000000000c6670

@end
