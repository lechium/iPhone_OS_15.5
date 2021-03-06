//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest <SSXPCCoding>
{
    long long _manifestFormat;	// 56 = 0x38
    _Bool _shouldHideUserPrompts;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000025ca2
- (id)copyXPCEncoding;	// IMP=0x0000000000025bc6
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025b5e
- (_Bool)start;	// IMP=0x0000000000025972
@property long long manifestFormat;
@property(readonly) NSURLRequest *URLRequest;
- (void)startWithManifestResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000255d1
@property _Bool shouldHideUserPrompts;
- (void)dealloc;	// IMP=0x0000000000025469
- (id)initWithURLRequest:(id)arg1;	// IMP=0x00000000000253b1
- (id)init;	// IMP=0x000000000002539d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSDownloadManifestRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

