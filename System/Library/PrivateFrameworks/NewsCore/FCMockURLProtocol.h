//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtocol.h>

@interface FCMockURLProtocol : NSURLProtocol
{
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00000000000e7c3d
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00000000000e7c27
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x00000000000e7b10
+ (id)URLForError:(id)arg1;	// IMP=0x00000000000e79bd
+ (id)URLForData:(id)arg1 mimeType:(id)arg2;	// IMP=0x00000000000e79a8
+ (id)URLForData:(id)arg1 mimeType:(id)arg2 statusCode:(unsigned long long)arg3;	// IMP=0x00000000000e770d
- (void)stopLoading;	// IMP=0x00000000000e8285
- (void)startLoading;	// IMP=0x00000000000e7d0c

@end

