//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying>
{
    NSArray *_scopedModelNames;	// 8 = 0x8
    NSString *_layerName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015d4f8
@property(copy, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(copy, nonatomic) NSArray *scopedModelNames; // @synthesize scopedModelNames=_scopedModelNames;
- (unsigned long long)hash;	// IMP=0x000000000015d336
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015d2c3
- (_Bool)isEqualToMLLayerPath:(id)arg1;	// IMP=0x000000000015d16e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015d096
- (void)appendPathComponent:(id)arg1;	// IMP=0x000000000015cfdd
- (id)init;	// IMP=0x000000000015cfbd
- (id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2;	// IMP=0x000000000015cf06

@end

