//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNQueue;

@interface _CNLazyArrayOperatorTakeLast
{
    CNQueue *_buffer;	// 16 = 0x10
    _Bool _haveFilledBuffer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000044881
- (void)fillBuffer;	// IMP=0x000000000004478d
- (id)nextObject;	// IMP=0x0000000000044749
- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x00000000000446b5

@end
