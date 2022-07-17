//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetKeyServiceType-Protocol.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType>
{
    NFLazy *_session;	// 8 = 0x8
    NFLazy *_requestEncoder;	// 16 = 0x10
    NFPromise *_endpointURLPromise;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000100534
- (void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fefaf

@end
