//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer;

@interface ReplayErrorTransport : NSObject
{
    GTTransport_replayer *_transport;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ebe76
- (void)sendErrorToHost:(id)arg1;	// IMP=0x00100000000ebd47
- (id)initWithTransport:(id)arg1;	// IMP=0x00100000000ebcdc

@end
