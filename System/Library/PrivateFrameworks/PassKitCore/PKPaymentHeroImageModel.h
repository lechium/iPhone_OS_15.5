//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PKPaymentHeroImageModel : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSString *_imageSha;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000106048
@property(readonly, nonatomic) NSString *imageSha; // @synthesize imageSha=_imageSha;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000105f0c

@end
