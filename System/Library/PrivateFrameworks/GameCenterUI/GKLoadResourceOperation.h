//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface GKLoadResourceOperation : NSOperation
{
    CDUnknownBlockType _outputBlock;	// 8 = 0x8
    long long __loadReason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000129a79
@property(nonatomic, setter=_setLoadReason:) long long _loadReason; // @synthesize _loadReason=__loadReason;
@property(copy) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
- (void)main;	// IMP=0x0000000000129a1a
- (void)didCompleteWithResource:(id)arg1 error:(id)arg2;	// IMP=0x000000000012998f

@end

