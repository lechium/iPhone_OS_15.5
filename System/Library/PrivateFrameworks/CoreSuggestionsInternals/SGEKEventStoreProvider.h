//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGEKEventStoreProvider : NSObject
{
    CDUnknownBlockType _newEKEventStoreGetter;	// 8 = 0x8
    CDUnknownBlockType _callBlockWithEKEventStoreForReading;	// 16 = 0x10
}

+ (id)defaultEKStoreProvider;	// IMP=0x00000000000583d0
- (void).cxx_destruct;	// IMP=0x00000000000583a8
- (id)initWithNewEKEventStoreGetter:(CDUnknownBlockType)arg1 callBlockWithEKEventStoreForReading:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058304

@end
