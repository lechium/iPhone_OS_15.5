//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/ASWebAuthenticationPresentationContextProviding-Protocol.h>

@class NSString, UIWindow;

@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding>
{
    UIWindow *_presentationAnchor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003a7fbe
@property(readonly, nonatomic) UIWindow *presentationAnchor; // @synthesize presentationAnchor=_presentationAnchor;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;	// IMP=0x00000000003a7fa2
- (id)initWithPresentationAnchor:(id)arg1;	// IMP=0x00000000003a7f24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
