//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPDistanceDescriptorProtocol-Protocol.h>

@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol>
{
    VNImageprint *_imagePrint;	// 8 = 0x8
}

+ (id)descriptorWithData:(id)arg1;	// IMP=0x000000000007aa6f
+ (id)descriptorWithImage:(struct __CVBuffer *)arg1;	// IMP=0x000000000007aa39
+ (int)preferredPixelFormat;	// IMP=0x000000000007aa2e
+ (_Bool)usePHAssetData;	// IMP=0x000000000007aa26
- (void).cxx_destruct;	// IMP=0x000000000007b16f
- (int)computeDistance:(float *)arg1 toDescriptor:(id)arg2;	// IMP=0x000000000007b0ca
- (id)serialize;	// IMP=0x000000000007b0b2
- (id)initWithData:(id)arg1;	// IMP=0x000000000007aef2
- (id)initWithImage:(struct __CVBuffer *)arg1;	// IMP=0x000000000007aacd

@end

