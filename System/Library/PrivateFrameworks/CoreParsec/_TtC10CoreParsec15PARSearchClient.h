//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSXPCConnection;

@interface _TtC10CoreParsec15PARSearchClient : NSObject
{
    MISSING_TYPE *sessions;	// 8 = 0x8
    MISSING_TYPE *imageLoader;	// 16 = 0x10
    MISSING_TYPE *receivingStreamDelegate;	// 24 = 0x18
    MISSING_TYPE *queue;	// 40 = 0x28
    MISSING_TYPE *connection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000229d0
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;	// IMP=0x0000000000028c62
- (void)clearCompletionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000028a80
- (void)getImageMap:(CDUnknownBlockType)arg1;	// IMP=0x00000000000285d9
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027fce
- (void)listSessions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027aed
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x00000000000278b4
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000277c6
- (void)forceFetchBag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024898
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023adb
- (void)dealloc;	// IMP=0x00000000000229b3
- (id)init;	// IMP=0x000000000002265f
@property(nonatomic, readonly) NSXPCConnection *connection; // @synthesize connection;

@end

