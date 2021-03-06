//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVContentKeySession, NSMutableArray, NSMutableSet;

@interface FCAVAssetKeyFetchRequest : NSObject
{
    _Bool _forceRefresh;	// 8 = 0x8
    AVContentKeySession *_contentKeySession;	// 16 = 0x10
    NSMutableSet *_remainingKeyURIs;	// 24 = 0x18
    NSMutableArray *_errorsEncountered;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000029537c

@end

