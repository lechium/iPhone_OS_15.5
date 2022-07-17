//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOURLWithHeaders, NSMutableDictionary, NSURL, NSURLComponents;

@interface GEOURLComponentsWithHeaders : NSObject
{
    NSURLComponents *_URLComponents;	// 8 = 0x8
    NSMutableDictionary *_headerFields;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000840853
@property(readonly, nonatomic) NSMutableDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property(readonly, nonatomic) GEOURLWithHeaders *URLWithHeaders;
@property(readonly, nonatomic) NSURL *URL;
- (void)updateQueryItemsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000008406f0
- (id)initWithString:(id)arg1;	// IMP=0x0000000000840672
- (id)initWithURL:(id)arg1;	// IMP=0x00000000008405ef
- (id)init;	// IMP=0x00000000008405af
- (id)initWithURLComponents:(id)arg1;	// IMP=0x00000000008404ea

@end
