//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamInsights/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHTokenizedURL : NSObject <NSCopying>
{
    NSString *_host;	// 8 = 0x8
    NSString *_originalURLPath;	// 16 = 0x10
    NSMutableDictionary *_tokenDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008f8f
@property(retain, nonatomic) NSMutableDictionary *tokenDictionary; // @synthesize tokenDictionary=_tokenDictionary;
@property(copy, nonatomic) NSString *originalURLPath; // @synthesize originalURLPath=_originalURLPath;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008e16
- (id)description;	// IMP=0x0000000000008dc6
- (_Bool)containsTokens;	// IMP=0x0000000000008b42
- (id)URLRepresentation;	// IMP=0x0000000000008955
@property(readonly, copy, nonatomic) NSString *tokenURLPath;
- (id)tokenForTokenType:(long long)arg1;	// IMP=0x00000000000086a9
- (_Bool)updateToken:(long long)arg1 withValue:(id)arg2;	// IMP=0x0000000000008580
- (id)initWithHost:(id)arg1 URLPath:(id)arg2;	// IMP=0x00000000000084bd
- (id)initWithString:(id)arg1;	// IMP=0x0000000000008428

@end

