//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSSQLBlockRequestContext
{
    CDUnknownBlockType _workBlock;	// 88 = 0x58
}

- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x0000000000010f15
- (_Bool)isWritingRequest;	// IMP=0x0000000000010f0d
- (void)dealloc;	// IMP=0x0000000000010ebf
- (id)initWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x0000000000010e5f

@end

