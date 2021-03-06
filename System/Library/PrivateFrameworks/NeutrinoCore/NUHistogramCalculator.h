//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUHistogramCalculator : NSObject
{
    long long _binCount;	// 8 = 0x8
    CDStruct_59a221c9 _range;	// 16 = 0x10
    CDStruct_68f7c993 _colorMatrix;	// 32 = 0x20
}

@property(nonatomic) CDStruct_68f7c993 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) CDStruct_59a221c9 range; // @synthesize range=_range;
@property(nonatomic) long long binCount; // @synthesize binCount=_binCount;
- (id)_computeHistogramForBufferRGBAhHLG:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000365af
- (id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000358e6
- (id)computeHistogramFromBuffer:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000035023
- (id)init;	// IMP=0x0000000000034fb2

@end

