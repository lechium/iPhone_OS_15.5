//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HAPTLVCreator : HMFObject
{
    struct {
        char *ptr;
        unsigned long long len;
        unsigned long long maxLen;
        char *mallocedPtr;
        unsigned char inlineBuffer[300];
    } _tlv;	// 8 = 0x8
    _Bool _addHasFailed;	// 344 = 0x158
}

+ (id)creatorWithBufferSize:(unsigned long long)arg1;	// IMP=0x00000000001240c3
+ (id)creator;	// IMP=0x0000000000124095
- (_Bool)addTLV:(unsigned long long)arg1 uuid:(id)arg2;	// IMP=0x0000000000124000
- (_Bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3;	// IMP=0x0000000000123f76
- (_Bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3;	// IMP=0x0000000000123eed
- (_Bool)addTLV:(unsigned long long)arg1 number:(id)arg2;	// IMP=0x0000000000123e77
- (_Bool)addTLV:(unsigned long long)arg1 string:(id)arg2;	// IMP=0x0000000000123dc0
- (_Bool)addTLV:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0000000000123d17
- (id)serialize;	// IMP=0x0000000000123cca
- (void)dealloc;	// IMP=0x0000000000123c8a
- (id)initWithBufferSize:(unsigned long long)arg1;	// IMP=0x0000000000123c2a

@end
