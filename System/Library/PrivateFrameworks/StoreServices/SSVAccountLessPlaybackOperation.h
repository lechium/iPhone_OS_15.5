//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSVAccountLessPlaybackOperation
{
    NSString *_assetStoreFrontIdentifier;	// 8 = 0x8
    NSMutableDictionary *_httpHeaderFields;	// 16 = 0x10
    NSString *_itemIdentifier;	// 24 = 0x18
    CDUnknownBlockType _responseBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014bf5f
- (id)_requestBodyData;	// IMP=0x000000000014bddf
- (void)main;	// IMP=0x000000000014b604
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x000000000014b4a2
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x000000000014b36a
@property(copy, nonatomic) NSDictionary *HTTPHeaderFields; // @synthesize HTTPHeaderFields=_httpHeaderFields;
@property(copy) CDUnknownBlockType responseBlock;
@property(copy) NSString *itemIdentifier;
@property(copy, nonatomic) NSString *assetStoreFrontIdentifier;

@end

