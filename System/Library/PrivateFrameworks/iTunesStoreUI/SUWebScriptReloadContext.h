//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface SUWebScriptReloadContext : NSObject <NSCopying>
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_referringUserAgent;	// 16 = 0x10
    NSURL *_referrerURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ffb1
@property(retain, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *referringUserAgent; // @synthesize referringUserAgent=_referringUserAgent;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)_copyScriptDictionaryRepresentation;	// IMP=0x000000000010fdf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fd27

@end

