//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSExtensionContext, NSUUID, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface EXExtensionRequest : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    NSArray *_inputItems;	// 16 = 0x10
    NSXPCListenerEndpoint *_endpoint;	// 24 = 0x18
    NSUUID *_pkUUID;	// 32 = 0x20
    id _assertion;	// 40 = 0x28
    NSXPCConnection *_xpcConnection;	// 48 = 0x30
    NSExtensionContext *_context;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000025c2a
@property __weak NSExtensionContext *context; // @synthesize context=_context;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) id assertion; // @synthesize assertion=_assertion;
@property(retain) NSUUID *pkUUID; // @synthesize pkUUID=_pkUUID;
@property(retain) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property unsigned long long options; // @synthesize options=_options;
- (id)description;	// IMP=0x0000000000025a9e
- (void)dealloc;	// IMP=0x0000000000025a44
- (id)init;	// IMP=0x00000000000259ee
- (void)applyActiveWebPageAlternativeIfNeededForExtension:(id)arg1;	// IMP=0x0000000000017113

@end

