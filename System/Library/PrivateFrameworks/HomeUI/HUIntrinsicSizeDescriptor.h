//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>

@class NSNumber, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable>
{
    unsigned long long _flexType;	// 8 = 0x8
    NSNumber *_aspectRatio;	// 16 = 0x10
    struct CGSize _intrinsicSize;	// 24 = 0x18
}

+ (id)na_identity;	// IMP=0x0000000000178a0c
+ (id)descriptorWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2;	// IMP=0x0000000000178865
+ (id)descriptorWithAspectRatio:(double)arg1;	// IMP=0x00000000001787d8
+ (id)noIntrinsicSizeDescriptor;	// IMP=0x00000000001787a4
- (void).cxx_destruct;	// IMP=0x0000000000178ca9
@property(readonly, copy, nonatomic) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) unsigned long long flexType; // @synthesize flexType=_flexType;
@property(readonly, nonatomic) struct CGSize intrinsicSize; // @synthesize intrinsicSize=_intrinsicSize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000178bb4
- (id)initWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3;	// IMP=0x0000000000178978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

