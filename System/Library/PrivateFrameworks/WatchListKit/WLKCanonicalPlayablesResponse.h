//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WLKCanonicalPlayablesResponse : NSObject
{
    _Bool _watchListable;	// 8 = 0x8
    _Bool _watchListed;	// 9 = 0x9
    NSDictionary *_dictionary;	// 16 = 0x10
    NSString *_canonicalID;	// 24 = 0x18
    unsigned long long _contentType;	// 32 = 0x20
    NSArray *_playables;	// 40 = 0x28
}

+ (id)_parseChannelsFromPayload:(id)arg1;	// IMP=0x000000000004d8bc
- (void).cxx_destruct;	// IMP=0x000000000004da92
@property(readonly, nonatomic) NSArray *playables; // @synthesize playables=_playables;
@property(readonly, nonatomic, getter=isWatchListed) _Bool watchListed; // @synthesize watchListed=_watchListed;
@property(readonly, nonatomic, getter=isWatchListable) _Bool watchListable; // @synthesize watchListable=_watchListable;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)init;	// IMP=0x000000000004d87d
- (id)initWithDictionaryV3:(id)arg1;	// IMP=0x000000000004d3a6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004d13f

@end
