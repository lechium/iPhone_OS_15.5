//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCANFContent, FCWebContent, NSString;

@interface FCArticleContent : NSObject
{
    NSString *_articleID;	// 8 = 0x8
    unsigned long long _contentType;	// 16 = 0x10
    FCWebContent *_webContent;	// 24 = 0x18
    FCANFContent *_anfContent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a1171
@property(retain, nonatomic) FCANFContent *anfContent; // @synthesize anfContent=_anfContent;
@property(retain, nonatomic) FCWebContent *webContent; // @synthesize webContent=_webContent;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (unsigned long long)hash;	// IMP=0x00000000001a10ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a0fe4
- (id)initWithArticleID:(id)arg1 webContent:(id)arg2;	// IMP=0x00000000001a0f80
- (id)initWithArticleID:(id)arg1 anfContent:(id)arg2;	// IMP=0x00000000001a0f1c
- (id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2;	// IMP=0x00000000001a0d9f
- (id)initWithContext:(id)arg1 articleRecord:(id)arg2;	// IMP=0x00000000001a0abd

@end
