//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVariableBoxBlur
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputRadiusImage;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0000000000175755
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputRadiusImage; // @synthesize inputRadiusImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001758d8

@end
