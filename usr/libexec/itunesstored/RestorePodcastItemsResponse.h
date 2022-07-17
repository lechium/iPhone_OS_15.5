//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary;

@interface RestorePodcastItemsResponse : NSObject
{
    NSMutableDictionary *_itemErrors;	// 8 = 0x8
    NSArray *_requestItems;	// 16 = 0x10
    NSArray *_responseDownloads;	// 24 = 0x18
    NSError *_responseError;	// 32 = 0x20
}

@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(copy, nonatomic) NSArray *responseDownloads; // @synthesize responseDownloads=_responseDownloads;
@property(copy, nonatomic) NSArray *requestItems; // @synthesize requestItems=_requestItems;
- (void)setError:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x00100000001a3180
- (id)errorForItemIdentifier:(id)arg1;	// IMP=0x00100000001a3159
- (void)dealloc;	// IMP=0x00100000001a3101

@end
