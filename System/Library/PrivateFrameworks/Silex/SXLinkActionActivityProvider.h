//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXHost, SXLinkActionURLQualifier, SXURLHandling, SXURLPreviewing;

@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXURLHandling> _URLHandler;	// 8 = 0x8
    id <SXURLPreviewing> _URLPreviewing;	// 16 = 0x10
    id <SXHost> _host;	// 24 = 0x18
    id <SXLinkActionURLQualifier> _URLQualifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005245b
@property(readonly, nonatomic) id <SXLinkActionURLQualifier> URLQualifier; // @synthesize URLQualifier=_URLQualifier;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <SXURLPreviewing> URLPreviewing; // @synthesize URLPreviewing=_URLPreviewing;
@property(readonly, nonatomic) id <SXURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
- (void)openInSafari:(id)arg1;	// IMP=0x00000000000523bf
- (void)openInNewWindow:(id)arg1;	// IMP=0x0000000000052318
- (void)open:(id)arg1;	// IMP=0x00000000000522a6
- (id)previewActivityForAction:(id)arg1;	// IMP=0x00000000000521fa
- (id)activityGroupForAction:(id)arg1;	// IMP=0x0000000000051b16
- (id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4;	// IMP=0x0000000000051a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
