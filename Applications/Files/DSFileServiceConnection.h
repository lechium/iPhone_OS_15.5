//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DSFileServiceConnection : NSObject
{
    CDUnknownBlockType _didUpdateInProgressOperationsHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000050ce
@property(copy, nonatomic) CDUnknownBlockType didUpdateInProgressOperationsHandler; // @synthesize didUpdateInProgressOperationsHandler=_didUpdateInProgressOperationsHandler;
- (void)requestInProgressOperationsWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000509e
- (id)init;	// IMP=0x001000000000506f

@end

