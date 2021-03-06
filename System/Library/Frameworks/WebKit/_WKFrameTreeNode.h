//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString;

@interface _WKFrameTreeNode <WKObject>
{
    struct ObjectStorage<API::FrameTreeNode> _node;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
- (id)_parentFrameHandle;	// IMP=0x00000000002d30fe
- (id)_handle;	// IMP=0x00000000002d3059
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d304e
@property(readonly, nonatomic) NSArray *childFrames;
- (id)webView;	// IMP=0x00000000002d2e9b
- (id)securityOrigin;	// IMP=0x00000000002d2dfd
- (id)request;	// IMP=0x00000000002d2de3
- (_Bool)isMainFrame;	// IMP=0x00000000002d2dd2
- (void)dealloc;	// IMP=0x00000000002d2d77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

