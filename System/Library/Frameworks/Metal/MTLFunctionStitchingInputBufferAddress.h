//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionStitchingInputNodeSPI-Protocol.h>

@class NSString;

@interface MTLFunctionStitchingInputBufferAddress : NSObject <MTLFunctionStitchingInputNodeSPI>
{
    _Bool _dereference;	// 8 = 0x8
    unsigned long long _bindIndex;	// 16 = 0x10
    unsigned long long _byteOffset;	// 24 = 0x18
}

@property(nonatomic) _Bool dereference; // @synthesize dereference=_dereference;
@property(nonatomic) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property(nonatomic) unsigned long long bindIndex; // @synthesize bindIndex=_bindIndex;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b042f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b03c9
- (id)initWithBindIndex:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 dereference:(_Bool)arg3;	// IMP=0x00000000000b03b4
- (id)initWithBindIndex:(unsigned long long)arg1;	// IMP=0x00000000000b0370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
