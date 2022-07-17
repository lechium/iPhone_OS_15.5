//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject
{
    WebNavigationDataPrivate *_private;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000010ffa0
- (id)clientRedirectSource;	// IMP=0x000000000010ff90
- (_Bool)hasSubstituteData;	// IMP=0x000000000010ff80
- (id)response;	// IMP=0x000000000010ff70
- (id)originalRequest;	// IMP=0x000000000010ff60
- (id)title;	// IMP=0x000000000010ff50
- (id)url;	// IMP=0x000000000010ff40
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(_Bool)arg5 clientRedirectSource:(id)arg6;	// IMP=0x000000000010fe00

@end
