//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionStitchingInputNodeSPI-Protocol.h>

@class NSString;

@interface MTLFunctionStitchingInputTexture : NSObject <MTLFunctionStitchingInputNodeSPI>
{
    unsigned long long _bindIndex;	// 8 = 0x8
}

@property(nonatomic) unsigned long long bindIndex; // @synthesize bindIndex=_bindIndex;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b05ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b05b9
- (id)initWithBindIndex:(unsigned long long)arg1;	// IMP=0x00000000000b0581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
