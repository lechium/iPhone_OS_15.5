//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NGMRollingBitmaskBuffer : NSObject
{
    unsigned int _upper_buffer_index;	// 8 = 0x8
    unsigned int _valid_values_buffer_size;	// 12 = 0xc
    char *_valid_values_buffer;	// 16 = 0x10
}

@property unsigned int valid_values_buffer_size; // @synthesize valid_values_buffer_size=_valid_values_buffer_size;
@property char *valid_values_buffer; // @synthesize valid_values_buffer=_valid_values_buffer;
@property unsigned int upper_buffer_index; // @synthesize upper_buffer_index=_upper_buffer_index;
- (void)dealloc;	// IMP=0x0000000000009d2d
- (id)bufferData;	// IMP=0x0000000000009cca
- (_Bool)processIncomingCounter:(unsigned int)arg1;	// IMP=0x0000000000009ba9
- (id)initWithData:(id)arg1 upperBufferIndex:(unsigned int)arg2;	// IMP=0x0000000000009afd
- (id)init;	// IMP=0x0000000000009aa2

@end

