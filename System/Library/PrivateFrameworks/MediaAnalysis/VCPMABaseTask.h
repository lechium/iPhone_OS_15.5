//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPMADTaskProtocol-Protocol.h>

@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _canceled;	// 9 = 0x9
    CDUnknownBlockType _cancelBlock;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000079435
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;	// IMP=0x000000000007919b
- (_Bool)run:(id *)arg1;	// IMP=0x000000000007904b
- (_Bool)isCanceled;	// IMP=0x000000000007902c
- (void)cancel;	// IMP=0x0000000000079021
- (_Bool)autoCancellable;	// IMP=0x0000000000079019
- (float)resourceRequirement;	// IMP=0x000000000007900b
- (void)dealloc;	// IMP=0x0000000000078e2d
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078dae
- (id)init;	// IMP=0x0000000000078da0

@end

