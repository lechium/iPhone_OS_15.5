//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMModificationContextFactory-Protocol.h>

@class NSString;
@protocol SXDocumentProviding;

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory>
{
    id <SXDocumentProviding> _documentProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000061b1
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
- (id)createModificationContextWithLayoutOptions:(id)arg1;	// IMP=0x00000000000060da
- (id)initWithDocumentProvider:(id)arg1;	// IMP=0x000000000000606f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
