//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WLKSharedFileStorage;

@interface WLKUpNextDeltaStore : NSObject
{
    WLKSharedFileStorage *_fileStorage;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000021132
- (void).cxx_destruct;	// IMP=0x0000000000021262
- (void)delete:(CDUnknownBlockType)arg1;	// IMP=0x000000000002124c
- (void)merge:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021236
- (void)write:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021220
- (void)read:(CDUnknownBlockType)arg1;	// IMP=0x000000000002120a
- (id)init;	// IMP=0x0000000000021187

@end

