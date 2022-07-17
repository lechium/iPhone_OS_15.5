//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject
{
    _Bool _loading;	// 8 = 0x8
    _Bool _hasLoaded;	// 9 = 0x9
    NSURL *_URL;	// 16 = 0x10
    NSDictionary *_headerFields;	// 24 = 0x18
    TPSURLSessionItem *_URLSessionItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000799d
@property(retain, nonatomic) TPSURLSessionItem *URLSessionItem; // @synthesize URLSessionItem=_URLSessionItem;
@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)processData:(id)arg1 formattedData:(id)arg2;	// IMP=0x0000000000007924
- (void)clearData;	// IMP=0x000000000000791e
- (void)cancel;	// IMP=0x00000000000078dd
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000077e0
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006e73
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000006e0b
- (void)dealloc;	// IMP=0x0000000000006d95

@end
