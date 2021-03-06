//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIHighKey : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputStrength;	// 80 = 0x50
}

+ (id)kernel;	// IMP=0x000000000000ae41
- (void).cxx_destruct;	// IMP=0x000000000000b99f
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000000b202

@end

