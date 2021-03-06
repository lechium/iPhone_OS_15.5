//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXViewport;
@protocol SXMediaPlaybackDelegate;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener>
{
    id <SXMediaPlaybackDelegate> _mediaPlaybackDelegate;	// 8 = 0x8
    SXViewport *_viewport;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bbf06
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;	// IMP=0x00000000000bbe8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

