//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject
{
    NSDictionary *_artworkDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017359d
@property(readonly, nonatomic) NSDictionary *artworkDictionary; // @synthesize artworkDictionary=_artworkDictionary;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;	// IMP=0x00000000001731d5
@property(readonly, nonatomic) NSString *URLString;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (id)colorWithKind:(id)arg1;	// IMP=0x0000000000172e4d
- (id)initWithArtworkDictionary:(id)arg1;	// IMP=0x0000000000172de2

@end
