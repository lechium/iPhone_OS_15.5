//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress;

@interface PLProgressFollower : NSObject
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    NSProgress *_sourceProgress;	// 16 = 0x10
    NSProgress *_outputProgress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000541494
@property(retain) NSProgress *outputProgress; // @synthesize outputProgress=_outputProgress;
@property(readonly) NSProgress *sourceProgress; // @synthesize sourceProgress=_sourceProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000054135a
- (void)dealloc;	// IMP=0x0000000000541307
- (id)initWithSourceProgress:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005411d4

@end

