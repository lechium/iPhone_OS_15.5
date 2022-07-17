//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GEOMediaLink : NSObject
{
    int _mediaType;	// 8 = 0x8
    int _mediaSubType;	// 12 = 0xc
    NSString *_adamID;	// 16 = 0x10
    NSArray *_thirdPartyLinks;	// 24 = 0x18
    long long _relatedCollectionItemIndex;	// 32 = 0x20
    unsigned long long _position;	// 40 = 0x28
}

+ (id)mediaLinkFromProto:(id)arg1;	// IMP=0x0000000000a2dc9b
- (void).cxx_destruct;	// IMP=0x0000000000a2e0cc
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic) long long relatedCollectionItemIndex; // @synthesize relatedCollectionItemIndex=_relatedCollectionItemIndex;
@property(readonly, nonatomic) NSArray *thirdPartyLinks; // @synthesize thirdPartyLinks=_thirdPartyLinks;
@property(readonly, nonatomic) int mediaSubType; // @synthesize mediaSubType=_mediaSubType;
@property(readonly, nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
- (id)initWithAdamID:(id)arg1 mediaType:(int)arg2 mediaSubType:(int)arg3 thirdPartyLinks:(id)arg4 relatedCollectionItemIndex:(long long)arg5 position:(unsigned long long)arg6;	// IMP=0x0000000000a2dfba

@end
