//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ArtworkURLFormatter : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000123396
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;	// IMP=0x0010000000122f05
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3;	// IMP=0x0010000000122ee9
- (id)urlWithHeight:(long long)arg1 width:(long long)arg2;	// IMP=0x0010000000122ed0
@property(readonly) long long width;
@property(readonly) NSURL *url;
@property(readonly) long long height;
- (id)initWithString:(id)arg1;	// IMP=0x0010000000122db8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000122d4d

@end
