//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject
{
    NSMapTable *_tokenToRequestToken;	// 8 = 0x8
    WBSSiteMetadataManager *_manager;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000034ad9
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) WBSSiteMetadataManager *manager; // @synthesize manager=_manager;
- (void)_issueRequest:(id)arg1 isOneTime:(_Bool)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034364
- (void)cancelAllRegistrations;	// IMP=0x0000000000034350
- (void)cancelAllRegistrationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003426d
- (void)registerOneTimeRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003419e
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000034099
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033f97
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000033e95
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033d93
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033cc7
- (void)dealloc;	// IMP=0x0000000000033c6c
- (id)initWithSiteMetadataManager:(id)arg1;	// IMP=0x0000000000033bae

@end
