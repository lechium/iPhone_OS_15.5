//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface WBSSiteMetadataResponse : NSObject
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)responseWithURL:(id)arg1;	// IMP=0x000000000007ac14
- (void).cxx_destruct;	// IMP=0x000000000007acf9
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithURL:(id)arg1;	// IMP=0x000000000007ac71
- (id)init;	// IMP=0x000000000007ac5d

@end

