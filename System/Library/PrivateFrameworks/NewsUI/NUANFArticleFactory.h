//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleFactory-Protocol.h>

@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject <NUArticleFactory>
{
    long long _qualityOfService;	// 8 = 0x8
    long long _relativePriority;	// 16 = 0x10
    FCArticleController *_articleController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001511a
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (id)createArticleForHeadline:(id)arg1;	// IMP=0x0000000000015065
- (id)createArticlesForArticleIDs:(id)arg1;	// IMP=0x0000000000014e0d
- (id)initWithArticleController:(id)arg1;	// IMP=0x0000000000014d97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
