//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation
{
    id _object;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009c3cd9
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void)main;	// IMP=0x00000000009c3bc7
- (id)initWithObject:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000009c3af2

@end
