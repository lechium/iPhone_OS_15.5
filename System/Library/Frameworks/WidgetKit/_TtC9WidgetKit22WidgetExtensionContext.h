//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WidgetKit/_TtP9WidgetKit27HostToExtensionXPCInterface_-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9WidgetKit22WidgetExtensionContext <_TtP9WidgetKit27HostToExtensionXPCInterface_>
{
    MISSING_TYPE *previewAgent;	// 8 = 0x8
    MISSING_TYPE *urlHandlers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000076af0
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x0000000000076980
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;	// IMP=0x0000000000076890
- (id)initWithInputItems:(id)arg1;	// IMP=0x0000000000076840
- (id)init;	// IMP=0x00000000000767e0
- (void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000076720
- (void)getTimelinesWithRequests:(id)arg1 isPreview:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074260
- (void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074160
- (void)handleURLSessionEventsFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071fc0
- (void)getDescriptorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071a00
- (void)invalidate;	// IMP=0x00000000000715b0
- (void)performCleanup;	// IMP=0x0000000000071590

@end

