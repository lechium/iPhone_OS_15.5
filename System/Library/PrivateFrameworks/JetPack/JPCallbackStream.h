//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface JPCallbackStream
{
    CDUnknownBlockType _readCallback;	// 8 = 0x8
    CDUnknownBlockType _seekForwardCallback;	// 16 = 0x10
    CDUnknownBlockType _seekToEndCallback;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001c07
@property(copy, nonatomic) CDUnknownBlockType seekToEndCallback; // @synthesize seekToEndCallback=_seekToEndCallback;
@property(copy, nonatomic) CDUnknownBlockType seekForwardCallback; // @synthesize seekForwardCallback=_seekForwardCallback;
@property(copy, nonatomic) CDUnknownBlockType readCallback; // @synthesize readCallback=_readCallback;
- (id)initWithReadCallback:(CDUnknownBlockType)arg1 seekForwardCallback:(CDUnknownBlockType)arg2 seekToEndCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001a9e

@end

