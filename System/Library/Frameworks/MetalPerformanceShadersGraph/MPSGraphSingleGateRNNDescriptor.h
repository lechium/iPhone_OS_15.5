//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@interface MPSGraphSingleGateRNNDescriptor : NSObject <NSCopying>
{
    _Bool _hasMask;	// 8 = 0x8
    _Bool _hasInitState;	// 9 = 0x9
    _Bool _reverse;	// 10 = 0xa
    _Bool _training;	// 11 = 0xb
    _Bool _bidirectional;	// 12 = 0xc
    unsigned long long _activation;	// 16 = 0x10
}

+ (id)descriptor;	// IMP=0x0000000000085912
@property(nonatomic) _Bool bidirectional; // @synthesize bidirectional=_bidirectional;
@property(nonatomic) unsigned long long activation; // @synthesize activation=_activation;
@property(nonatomic) _Bool training; // @synthesize training=_training;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008593e

@end

