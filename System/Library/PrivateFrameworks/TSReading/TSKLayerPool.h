//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSKLayerPool : NSObject
{
    NSMutableArray *mLayerPool;	// 8 = 0x8
    Class mLayerClass;	// 16 = 0x10
    id mLayerDelegate;	// 24 = 0x18
}

@property(nonatomic) id layerDelegate; // @synthesize layerDelegate=mLayerDelegate;
@property(nonatomic) Class layerClass; // @synthesize layerClass=mLayerClass;
- (void)returnLayerToPool:(id)arg1;	// IMP=0x00000000000a3281
- (id)requestLayerFromPool;	// IMP=0x00000000000a31d4
- (void)dealloc;	// IMP=0x00000000000a3199
- (id)init;	// IMP=0x00000000000a3135

@end
