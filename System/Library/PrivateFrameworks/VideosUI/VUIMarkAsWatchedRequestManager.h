//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIMarkAsWatchedRequestManager : NSObject
{
    NSMutableDictionary *_ongoingItemIDOperationDictionary;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000a9f07
- (void).cxx_destruct;	// IMP=0x00000000000aa89c
@property(retain, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary; // @synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary;
- (void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 adamID:(id)arg4;	// IMP=0x00000000000aa013
- (id)init;	// IMP=0x00000000000a9fd2
- (id)_init;	// IMP=0x00000000000a9f6c

@end

