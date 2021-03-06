//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/NSCopying-Protocol.h>

@class NSDictionary, NSURL;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>
{
    NSURL *_url;	// 8 = 0x8
    NSDictionary *_extraInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007abb3
@property(readonly, copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ab94
- (id)description;	// IMP=0x000000000007ab53
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007aa0d
- (unsigned long long)hash;	// IMP=0x000000000007a9f7
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000000007a93d
- (id)init;	// IMP=0x000000000007a927

@end

