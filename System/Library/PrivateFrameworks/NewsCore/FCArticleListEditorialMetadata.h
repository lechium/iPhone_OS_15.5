//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject
{
    NSDate *_publishDate;	// 8 = 0x8
    NSDictionary *_articleMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025325d
@property(retain, nonatomic) NSDictionary *articleMetadata; // @synthesize articleMetadata=_articleMetadata;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002530c7

@end

