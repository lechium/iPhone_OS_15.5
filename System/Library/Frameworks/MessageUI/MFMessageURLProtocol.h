//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLProtocol.h>

#import <MessageUI/EFLoggable-Protocol.h>

@class EFPromise, EMContentRepresentation, NSString;
@protocol EFCancelable;

@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable>
{
    id <EFCancelable> _cancelable;	// 16 = 0x10
    EFPromise *_promise;	// 24 = 0x18
    EMContentRepresentation *_contentRepresentation;	// 32 = 0x20
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00000000000d8372
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00000000000d81ff
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x00000000000d8064
+ (id)contentRepresentationForURL:(id)arg1;	// IMP=0x00000000000d7fcc
+ (void)registerContentRepresentation:(id)arg1;	// IMP=0x00000000000d7f44
+ (void)setRegistry:(id)arg1;	// IMP=0x00000000000d7f30
+ (id)registry;	// IMP=0x00000000000d7ee3
+ (void)initialize;	// IMP=0x00000000000d7ea5
+ (id)log;	// IMP=0x00000000000d7dc8
- (void).cxx_destruct;	// IMP=0x00000000000d9f31
@property(retain, nonatomic) EMContentRepresentation *contentRepresentation; // @synthesize contentRepresentation=_contentRepresentation;
@property(retain, nonatomic) EFPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) id <EFCancelable> cancelable; // @synthesize cancelable=_cancelable;
- (void)stopLoading;	// IMP=0x00000000000d9d01
- (void)startLoading;	// IMP=0x00000000000d8bc7
- (id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d8913
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000000000d83ea
- (void)dealloc;	// IMP=0x00000000000d837a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
