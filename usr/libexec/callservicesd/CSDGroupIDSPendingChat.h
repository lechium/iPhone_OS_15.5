//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, TUHandle;

@interface CSDGroupIDSPendingChat : NSObject
{
    MISSING_TYPE *uuid;	// 3894848 = 0x3b6e40
    MISSING_TYPE *handle;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002a22c0
- (id)init;	// IMP=0x00100000002a2290
- (id)initWithUUID:(id)arg1 handle:(id)arg2;	// IMP=0x00100000002a21e0
@property(nonatomic, readonly) TUHandle *handle; // @synthesize handle;
@property(nonatomic, readonly) NSUUID *uuid;

@end

